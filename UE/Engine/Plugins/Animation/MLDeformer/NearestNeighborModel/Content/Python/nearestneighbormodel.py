# -*- coding: utf-8 -*-
"""
Copyright Epic Games, Inc. All Rights Reserved.
"""

import os
from os.path import join, isdir
import traceback
import logging
import time
import unreal as ue
import numpy as np
import torch
import torch.nn as nn
import datetime
from torch.utils.data import DataLoader
import onnx
from sklearn.decomposition import PCA
from sklearn.cluster import KMeans

tensorboard_exist = True
try:
    from torch.utils.tensorboard import SummaryWriter
except ImportError as e:
    tensorboard_exist = False

def get_acc_arr(in_arr):
    out_arr = [0 for i in range(len(in_arr) + 1)]
    for i in range(len(in_arr)):
        out_arr[i+1] = out_arr[i] + in_arr[i]
    return out_arr

class TrainParam:
    def __init__(self, api):
        self.api = api
        self.use_debug_mode = False

    def init_debug_param(self):
        self.skip_training = False
        self.skip_training_except = GeneratorExit('Unusable')
        self.use_debug_mode = False

    def init_common_param(self):
        self.model = self.api.get_nearest_neighbor_model()
        assert(self.model is not None)
        self.training_dir = self.model.get_model_dir()
        if not os.path.exists(self.training_dir):
            os.makedirs(self.training_dir)
        self.recompute_deltas = self.model.recompute_deltas
        self.recompute_pca = self.model.recompute_pca
        self.use_file_cache = self.model.use_file_cache

    def init_delta_param(self):
        self.delta_dtype = np.float32
        self.num_samples = self.api.num_samples()
        self.num_bone_values = 3 * self.api.get_number_sample_transforms()  # x, y, z of the quaternions
        self.num_curve_values = self.api.get_number_sample_curves()
        self.num_inputs = self.num_bone_values + self.num_curve_values
        self.num_delta_values = 3 * self.api.get_number_sample_deltas()
        self.num_parts = self.model.get_num_parts();

        self.part_num_vts = [self.model.get_part_num_verts(part_id) for part_id in range(self.num_parts)]
        self.vertex_maps = [np.empty(self.part_num_vts[part_id], dtype=np.int32) for part_id in range(self.num_parts)]
        for part_id in range(self.num_parts):
            self.vertex_maps[part_id][:] = self.api.get_part_vertex_map(part_id)

        self.num_sum_deltas = sum(self.part_num_vts)
        self.acc_part_num_vts = get_acc_arr(self.part_num_vts)

    def init_pca_param(self):
        self.num_pca_basis = [self.model.get_pca_coeff_num(part_id) for part_id in range(self.num_parts)]

    def init_train_param(self):
        self.batch_size = self.model.get_batch_size()
        self.num_epochs = self.model.get_num_epochs()
        self.lr = self.model.get_learning_rate()
        self.device = get_device()
        self.num_sample_deltas = self.api.get_number_sample_deltas()

    def init_run_param(self):
        self.init_common_param()
        self.init_delta_param()
        self.init_pca_param()
        self.init_train_param()
        self.init_debug_param()

    def init_update_neighbor_param(self):
        model = self.api.get_nearest_neighbor_model()
        assert(model is not None)
        self.model = model
        self.training_dir = model.get_model_dir()
        num_parts = model.get_num_parts();
        self.num_parts = num_parts
        self.num_bone_values = 3 * self.api.get_number_sample_transforms()  # x, y, z of the quaternions
        self.num_curve_values = self.api.get_number_sample_curves()
        self.num_inputs = self.num_bone_values + self.num_curve_values
        self.part_num_samples = [self.api.get_part_num_neighbors(part_id) for part_id in range(num_parts)]
        self.part_num_verts = [model.get_part_num_verts(part_id) for part_id in range(num_parts)]
        self.num_delta_values = self.api.get_number_sample_deltas() * 3
        self.delta_dtype = np.float32
        part_num_vts = [model.get_part_num_verts(part_id) for part_id in range(num_parts)]
        vertex_maps = [np.empty(part_num_vts[part_id], dtype=np.int32) for part_id in range(num_parts)]
        for part_id in range(num_parts):
            vertex_maps[part_id][:] = self.api.get_part_vertex_map(part_id)
        self.vertex_maps = vertex_maps

    def init_kmeans_param(self, part_id):
        model = self.api.get_nearest_neighbor_model()
        assert(model is not None)
        self.model = model
        self.training_dir = model.get_model_dir()

        self.part_id = part_id
        self.num_anims = self.api.get_kmeans_num_anims()
        self.num_anim_frames = [self.api.get_kmeans_anim_num_frames(anim_id) for anim_id in range(self.num_anims)]
        self.acc_anim_frames = [0 for i in range(self.num_anims + 1)]
        for anim_id in range(self.num_anims):
            self.acc_anim_frames[anim_id + 1] = self.acc_anim_frames[anim_id] + self.num_anim_frames[anim_id]
        self.num_bone_values = 3 * self.api.get_number_sample_transforms()  # x, y, z of the quaternions
        self.num_curve_values = self.api.get_number_sample_curves()
        self.num_inputs = self.num_bone_values + self.num_curve_values

        # debug settings
        self.use_debug_mode = False
        self.inputs_dir = f'{self.training_dir}/inputs'
        self.outputs_dir = f'{self.training_dir}/UEOutputs'
        if not isdir(self.inputs_dir):
            os.makedirs(self.inputs_dir)
        if not isdir(self.outputs_dir):
            os.makedirs(self.outputs_dir)
        self.debug_max_frames = 100

    def get_part_range(self, part_id):
        return range(self.acc_part_num_vts[part_id] * 3, self.acc_part_num_vts[part_id + 1] * 3)

    def get_anim_and_frame(self, i):
        for anim_id in range(self.num_anims):
            if i < self.acc_anim_frames[anim_id + 1]:
                return anim_id, i - self.acc_anim_frames[anim_id]
        return self.num_anims - 1, self.num_anim_frames[-1] - 1

# ====================================== Network ======================================
class MLPPCA(nn.Module):
    def __init__(self, dims, inputs_mean, inputs_std, outputs_mean, outputs_std):
        super(MLPPCA, self).__init__()
        layers=[]
        for i in range(len(dims)-2):
            layers+=[
                nn.Linear(dims[i],dims[i+1]),
                nn.BatchNorm1d(dims[i+1]),
                nn.PReLU()
            ]
        layers.append(nn.Linear(dims[-2],dims[-1]))
        self.model=nn.Sequential(*layers)

        self.register_buffer('inputs_mean', inputs_mean[None,:])
        self.register_buffer('inputs_std', inputs_std[None,:] + 1e-6)
        self.register_buffer('outputs_mean', outputs_mean[None,:])
        self.register_buffer('outputs_std', outputs_std[None,:] + 1e-6)

    def forward(self, x):
        x=(x-self.inputs_mean)/self.inputs_std
        return self.model(x)*self.outputs_std+self.outputs_mean

def create_empty_network(param):
    model = param.model

    num_inputs = param.num_inputs
    hidden_dims = model.get_hidden_layer_dims()
    # TODO: model.get_total_num_pca_coeffs
    num_outputs = sum([model.get_pca_coeff_num(part_id) for part_id in range(model.get_num_parts())])

    dims = [num_inputs] + list(hidden_dims) + [num_outputs]
    if param.use_debug_mode:
        out_path = f'{param.training_dir}/dims.txt'
        print('write to', out_path)
        np.savetxt(out_path, np.array(dims), fmt='%d')

    inputs_mean = torch.zeros(num_inputs)
    inputs_std = torch.zeros(num_inputs)
    outputs_mean = torch.zeros(num_outputs)
    outputs_std = torch.zeros(num_outputs)

    network = MLPPCA(dims, inputs_mean, inputs_std, outputs_mean, outputs_std)

    return network

def load_torch_network(param, path):
    network = create_empty_network(param)
    network.load_state_dict(torch.load(path))

    return network

# ====================================== Utils ======================================
seed = 1234
def rand_seed():
    global seed
    np.random.seed(seed)
    torch.random.manual_seed(seed)

def generate_time_strings(cur_iteration, total_num_iterations, start_time):
    iterations_remaining = total_num_iterations - cur_iteration
    passed_time = time.time() - start_time
    avg_iteration_time = passed_time / (cur_iteration + 1)
    est_time_remaining = iterations_remaining * avg_iteration_time
    est_time_remaining_string = str(datetime.timedelta(seconds=int(est_time_remaining)))
    passed_time_string = str(datetime.timedelta(seconds=int(passed_time)))
    return passed_time_string, est_time_remaining_string

def get_device():
    if torch.cuda.is_available():
        device = 'cuda'
    else:
        device = 'cpu'
    return device

def has_error(return_code):
    return (return_code & 1) != 0

class EvalNetwork:
    def __init__(self, param):
        model_dir = param.training_dir
        self.api = param.api
        self.instance = param.api.create_model_instance()

    def forward(self, x):
        x = self.instance.eval(x.tolist())
        return np.array(x)

    def __del__(self):
        self.api.destroy_model_instance(self.instance)

# ====================================== Update nearest neighbor data ======================================
def sample_neighbor_data(param):
    num_parts = param.num_parts
    api = param.api
    inputs = [None for part_id in range(num_parts)]
    deltas = [None for part_id in range(num_parts)]
    delta_buffer = np.empty(param.num_delta_values, dtype=param.delta_dtype)

    total_tasks = sum(param.part_num_samples)
    with ue.ScopedSlowTask(total_tasks, "Sample nearest neighbor data") as update_task:
        update_task.make_dialog(True)
        for part_id in range(num_parts):
            if update_task.should_cancel():
                raise GeneratorExit('Aborted')

            return_code = api.set_sampler_part_data(part_id)
            if has_error(return_code):
                raise GeneratorExit('SetSamplerFailed')

            num_samples = param.part_num_samples[part_id]            
            num_verts = param.part_num_verts[part_id]

            part_inputs = np.empty((num_samples, param.num_inputs), dtype = np.float32)
            part_deltas = np.empty((num_samples, num_verts * 3), dtype = np.float32)

            for sample_id in range(num_samples):
                if update_task.should_cancel():
                    raise GeneratorExit('Aborted')

                sample_exists = api.set_current_sample_index(int(sample_id))
                delta_buffer[:] = api.sample_deltas
                part_delta = delta_buffer.reshape((-1,3))[param.vertex_maps[part_id]]
                part_deltas[sample_id,:] = part_delta.reshape(-1)
                part_inputs[sample_id,:] = api.sample_bone_rotations

                update_task.enter_progress_frame(1, f'UpdateNearestNeighborData: sampling part {part_id}, frame {sample_id + 1:6d} of {num_samples:6d}')

            inputs[part_id] = part_inputs
            deltas[part_id] = part_deltas

    return inputs, deltas

def update_neighbor_offsets(param, eval_network, inputs, deltas):
    num_parts = param.num_parts
    model = param.model

    total_tasks = sum(param.part_num_samples)
    with ue.ScopedSlowTask(total_tasks, "Update nearest neighbor offsets") as update_task:
        update_task.make_dialog(True)

        for part_id in range(num_parts):
            if update_task.should_cancel():
                raise GeneratorExit('Aborted')

            part_inputs = inputs[part_id]
            part_deltas = deltas[part_id]
            num_samples = param.part_num_samples[part_id]

            num_verts = param.part_num_verts[part_id]
            num_pca = model.get_pca_coeff_num(part_id)
            pca_start = model.get_pca_coeff_start(part_id)

            vertex_mean = np.empty(num_verts * 3, dtype = np.float32)
            vertex_mean[:] = model.vertex_mean(part_id)

            pca_basis = np.empty(num_pca * num_verts * 3, dtype = np.float32)
            pca_basis[:] = model.pca_basis(part_id)
            pca_basis = pca_basis.reshape((num_pca, num_verts * 3))

            coeffs = np.empty((num_samples, num_pca), dtype = np.float32)
            remaining_offsets = np.empty((num_samples, num_verts * 3), dtype = np.float32)

            for sample_id in range(num_samples):
                if update_task.should_cancel():
                    raise GeneratorExit('Aborted')

                sample_coeff = eval_network.forward(part_inputs[sample_id])
                sample_coeff = sample_coeff[pca_start : pca_start + num_pca]
                coeffs[sample_id, :] = sample_coeff
                remaining_offsets[sample_id, :] = part_deltas[sample_id] - sample_coeff.dot(pca_basis) - vertex_mean

                update_task.enter_progress_frame(1, f'UpdateNearestNeighborData: updating part {part_id}: frame {sample_id + 1:6d} of {num_samples:6d}')

            model.set_num_neighbors(part_id, num_samples)
            model.set_neighbor_coeffs(part_id, coeffs.reshape(-1).tolist())
            model.set_neighbor_offsets(part_id, remaining_offsets.reshape(-1).tolist())

def update_nearest_neighbor_data(api):
    return_code = 0
    try:
        param = TrainParam(api)
        param.init_update_neighbor_param()
        inputs, deltas = sample_neighbor_data(param)
        eval_network = EvalNetwork(param)
        update_neighbor_offsets(param, eval_network, inputs, deltas)

    except GeneratorExit as e:
        if str(e) == 'Aborted':
            ue.log_warning('Nearest neighbor update aborted by user')
            return_code = 2 # warning
        else:
            logging.error(e)
            logging.error(traceback.format_exc())
            return_code = 1
    except Exception as e:
        logging.error(e)
        logging.error(traceback.format_exc())
        return_code = 1

    return return_code

# ====================================== Kmeans ======================================
def find_nearest_neighbor(X,coeff):
    d2=(X-np.expand_dims(coeff,0))**2
    d=np.sum(d2,axis=1)
    return np.argmin(d)

def sample_kmeans_data(param, eval_network):
    model = param.model
    part_id = param.part_id
    part_coeffs = []

    total_frames = sum(param.num_anim_frames)
    with ue.ScopedSlowTask(total_frames, "KMeans sampling") as sample_task:
        sample_task.make_dialog(True)

        num_pca = model.get_pca_coeff_num(part_id)
        pca_start = model.get_pca_coeff_start(part_id)
        for anim_id in range(param.num_anims):
            sample_exists = param.api.sample_kmeans_anim(anim_id)
            num_frames = param.num_anim_frames[anim_id]
            for frame in range(num_frames):
                if sample_task.should_cancel():
                    raise GeneratorExit('Aborted')

                sample_exists = param.api.sample_kmeans_frame(frame)
                inputs = np.zeros(param.num_inputs, dtype = np.float32)
                inputs[:] = param.api.sample_bone_rotations

                sample_coeff = eval_network.forward(inputs)
                part_coeffs.append(sample_coeff[pca_start : pca_start + num_pca])

                sample_task.enter_progress_frame(1, f'Sampling Anim {anim_id}/{param.num_anims}, frame {frame}/{num_frames}')

                if param.use_debug_mode:
                    out_path = f'{param.inputs_dir}/{frame:08d}.npy'
                    print('write to', out_path)
                    np.save(out_path, inputs)
                    out_path = f'{param.outputs_dir}/{frame:08d}.npy'
                    print('write to', out_path)
                    np.save(out_path, sample_coeff)
                    if frame > param.debug_max_frames:
                        break

            if param.use_debug_mode:
                raise GeneratorExit('Aborted')

    return part_coeffs

def kmeans_and_find_poses(param, part_coeffs):
    global seed
    results = []
    with ue.ScopedSlowTask(1, "Running KMeans (this may take a while)") as kmeans_task:
        kmeans_task.make_dialog(True)
        n_clusters = param.api.get_kmeans_num_clusters()
        kmeans=KMeans(n_clusters=n_clusters,max_iter=10*n_clusters,n_init='auto',random_state=seed).fit(part_coeffs)

        anim_ids = []
        frames = []
        for cluster_id in range(n_clusters):
            center=kmeans.cluster_centers_[cluster_id]
            acc_id = find_nearest_neighbor(part_coeffs, center)
            anim_id, frame = param.get_anim_and_frame(acc_id)
            anim_ids.append(anim_id)
            frames.append(frame)

        results = [int(item) for pair in zip(anim_ids, frames) for item in pair] 
    return results

def kmeans_cluster_poses(api, part_id):
    return_code = 0
    results = []
    try:
        param = TrainParam(api)
        param.init_kmeans_param(part_id)
        eval_network = EvalNetwork(param)
        part_coeffs = sample_kmeans_data(param, eval_network)
        results = kmeans_and_find_poses(param, part_coeffs)
    except GeneratorExit as e:
        if str(e) == 'Aborted':
            ue.log_warning('Kmeans aborted by user')
            return_code = 2
        else:
            logging.error(e)
            logging.error(traceback.format_exc())
            return_code = 1 
    except Exception as e:
        logging.error(e)
        logging.error(traceback.format_exc())
        return_code = 1

    if return_code == 0:
        api.kmeans_results = results
    return return_code

# ====================================== run ======================================
def save_tpose_data(param):
    unskinned = param.api.get_unskinned_vertex_positions()
    unskinned = np.array(unskinned).reshape((-1, 3))
    out_path = f'{param.training_dir}/unskinned.npy'
    print('write to', out_path)
    np.save(out_path, unskinned)

    faces = param.api.get_mesh_index_buffer()
    faces = np.array(faces).reshape((-1,3))
    out_path = f'{param.training_dir}/topo.npy'
    print('write to', out_path)
    np.save(out_path, faces)

    for part_id in range(param.num_parts):
        out_path = f'{param.training_dir}/vertex_map_{part_id}.txt'
        print('write to', out_path)
        np.savetxt(out_path, param.vertex_maps[part_id])

# ====================================== deltas ======================================
def compute_deltas(param):
    api = param.api
    deltas_path = f'{param.training_dir}/deltas.bin'
    deltas = np.memmap(deltas_path, dtype=param.delta_dtype, mode='w+', shape=(param.num_samples, param.num_sum_deltas * 3))

    inputs_path = f'{param.training_dir}/inputs.npy'
    inputs = np.empty([param.num_samples, param.num_inputs], dtype=np.float32)

    delta_buffer = np.empty(param.num_delta_values, dtype=param.delta_dtype)
    data_start_time = time.time()
    with ue.ScopedSlowTask(param.num_samples, "Sampling Frames") as sampling_task:
        sampling_task.make_dialog(True)
        for i in range(param.num_samples):
            # Stop if the user has pressed Cancel in the UI
            if sampling_task.should_cancel():
                raise GeneratorExit('CannotUse')

            # Set the sample
            sample_exists = api.set_current_sample_index(int(i))
            assert (sample_exists)

            # Copy inputs
            inputs[i, :param.num_bone_values] = api.sample_bone_rotations
            inputs[i, param.num_bone_values:] = api.sample_curve_values

            # Copy outputs
            delta_buffer[:] = api.sample_deltas
            full_delta = delta_buffer.reshape((-1,3))
            for part_id in range(param.num_parts):
                part_delta = full_delta[param.vertex_maps[part_id]]
                part_range = param.get_part_range(part_id)
                deltas[i, part_range] = part_delta.reshape(-1)

            # Calculate passed and estimated time and report progress
            passed_time_string, est_time_remaining_string = generate_time_strings(i, param.num_samples, data_start_time)
            sampling_task.enter_progress_frame(1, 
                f'Sampling frame {i + 1:6d} of {param.num_samples:6d} - Time: {passed_time_string} - Left: {est_time_remaining_string}')

    data_elapsed_time = time.time() - data_start_time
    ue.log(f'Calculating inputs and outputs took {data_elapsed_time:.0f} seconds.')

    deltas._mmap.close()

    print('write to', inputs_path)
    np.save(inputs_path, inputs)

# ====================================== pca ======================================
def save_part_pca(training_dir, part_id, vertex_mean, pca_basis):
    out_path=f'{training_dir}/vertex_mean_{part_id}.npy'
    print('write to', out_path)
    np.save(out_path, vertex_mean)

    out_path = f'{training_dir}/pca_basis_{part_id}.npy'
    print('write to',out_path)
    np.save(out_path, pca_basis)

def load_pca(param):
    model = param.model
    for part_id in range(param.num_parts):
        vertex_mean = np.load(f'{param.training_dir}/vertex_mean_{part_id}.npy')
        model.set_vertex_mean(part_id, vertex_mean.astype(np.float32).tolist())
        pca_basis = np.load(f'{param.training_dir}/pca_basis_{part_id}.npy')
        model.set_pca_basis(part_id, pca_basis.astype(np.float32).reshape(-1).tolist())

def compute_pca(param):
    global seed
    model = param.model
    num_parts = param.num_parts
    deltas_path = f'{param.training_dir}/deltas.bin'
    deltas = np.memmap(deltas_path, dtype=param.delta_dtype, mode='r', shape=(param.num_samples, param.num_sum_deltas * 3))
    
    all_coeffs = [None for part_id in range(num_parts)]

    with ue.ScopedSlowTask(num_parts, 'Computing PCA Basis') as pca_task:
        pca_task.make_dialog(True)
        for part_id in range(num_parts):
            if pca_task.should_cancel():
                raise GeneratorExit('CannotUse')

            part_deltas = deltas[:, param.get_part_range(part_id)]
            part_deltas = part_deltas.copy().reshape((param.num_samples, -1))
            pca = PCA(n_components=param.num_pca_basis[part_id],random_state=seed)
            coeffs = pca.fit_transform(part_deltas)
            all_coeffs[part_id] = np.ascontiguousarray(coeffs).astype(np.float32)
            vertex_mean = pca.mean_.astype(np.float32)
            pca_basis = np.ascontiguousarray(pca.components_.astype(np.float32))

            save_part_pca(param.training_dir, part_id, vertex_mean, pca_basis)
            pca_task.enter_progress_frame(1, f'Computing PCA Basis {part_id + 1:6d} of {num_parts:6d}')

    deltas._mmap.close()
    outputs = np.concatenate(all_coeffs, axis = 1)
    out_path = f'{param.training_dir}/output_coeffs.npy'
    print('write to', out_path)
    np.save(out_path, outputs)

# ====================================== train ======================================
def load_train_data(training_dir):
    inputs_path = f'{training_dir}/inputs.npy'
    inputs = np.load(inputs_path)

    outputs_path = f'{training_dir}/output_coeffs.npy'
    outputs = np.load(outputs_path)

    return inputs, outputs

def compute_stats(train_data, device):
    inputs, outputs = train_data
    inputs_mean_np = np.mean(inputs, axis = 0)
    inputs_mean = torch.from_numpy(inputs_mean_np).float().to(device)
    inputs_std_np = np.std(inputs, axis = 0)
    inputs_std = torch.from_numpy(inputs_std_np).float().to(device)

    outputs_mean_np = np.mean(outputs, axis = 0)
    outputs_mean = torch.from_numpy(outputs_mean_np).float().to(device)
    outputs_std_np = np.std(outputs, axis = 0)
    outputs_std = torch.from_numpy(outputs_std_np).float().to(device)

    return inputs_mean, inputs_std, outputs_mean, outputs_std

def load_inputs_range(model, train_data):
    inputs = train_data[0]
    inputs_min = np.min(inputs, axis = 0)
    inputs_max = np.max(inputs, axis = 0)
    model.inputs_min = inputs_min.tolist()
    model.inputs_max = inputs_max.tolist()

class TensorDataset:
    def __init__(self, inputs, outputs):
        self.inputs = inputs
        self.outputs = outputs

    def __getitem__(self, index):
        return self.inputs[index], self.outputs[index]

    def __len__(self):
        return len(self.inputs)

def create_data_loaders(param, train_data):
    inputs, outputs = train_data
    device = param.device
    batch_size = param.batch_size
    num_samples = param.num_samples

    permutations = np.random.permutation(num_samples)
    num_train = int(num_samples * 0.9)
    num_val = num_samples - num_train

    train_samples = permutations[:num_train]
    train_inputs = torch.from_numpy(inputs[train_samples]).float().to(device)
    train_outputs = torch.from_numpy(outputs[train_samples]).float().to(device)
    train_dataset = TensorDataset(train_inputs, train_outputs)
    train_loader = DataLoader(train_dataset, batch_size=batch_size, shuffle=True)

    val_samples = permutations[num_train:num_samples]
    val_inputs = torch.from_numpy(inputs[val_samples]).float().to(device)
    val_outputs = torch.from_numpy(outputs[val_samples]).float().to(device)
    val_dataset = TensorDataset(val_inputs, val_outputs)
    val_loader = DataLoader(val_dataset, batch_size=batch_size, shuffle=True)

    return train_loader, val_loader

def create_network(param, data_stats):
    inputs_mean, inputs_std, outputs_mean, outputs_std = data_stats

    hidden_dims = param.model.get_hidden_layer_dims()
    input_dim = len(inputs_mean)
    output_dim = len(outputs_mean)
    dims = [input_dim] + list(hidden_dims) + [output_dim]

    network = MLPPCA(dims, inputs_mean, inputs_std, outputs_mean, outputs_std)
    network.to(param.device)
    return network

def train(param):
    device = param.device
    num_epochs = param.num_epochs

    train_data = load_train_data(param.training_dir)
    data_stats = compute_stats(train_data, device)
    load_inputs_range(param.model, train_data)

    train_loader, val_loader = create_data_loaders(param, train_data)
    network = create_network(param, data_stats)
    optimizer = torch.optim.AdamW(network.parameters(),lr=param.lr,weight_decay=1e-5)
    mse_loss = nn.MSELoss(reduction = 'sum')

    if tensorboard_exist:
        log_dir = f'{param.training_dir}/logs/{datetime.datetime.now().strftime("%Y%m%d-%H%M%S")}'
        if not os.path.exists(log_dir):
            os.makedirs(log_dir)
        writer = SummaryWriter(log_dir)

    min_val_loss=float('Inf')
    min_val_epoch=-1

    training_start_time = time.time()
    n_batches = 0
    with ue.ScopedSlowTask(param.num_epochs, "Training Model") as training_task:
        training_task.make_dialog(True)

        for epoch in range(num_epochs):
            train_loss = 0.0
            network.train()
            for X,Y in train_loader:
                if training_task.should_cancel():
                    raise GeneratorExit('Usable')
                optimizer.zero_grad()
                batch_loss = mse_loss(network(X), Y)
                batch_loss.backward()
                optimizer.step()
                train_loss += batch_loss.item()

                n_batches += 1

            train_loss /= len(train_loader.dataset) * param.num_sample_deltas
            if tensorboard_exist:
                writer.add_scalar('Loss/train', train_loss, epoch)

            val_loss = 0.0
            network.eval()
            with torch.no_grad():
                for X,Y in val_loader:
                    if training_task.should_cancel():
                        raise GeneratorExit('Usable')
                    batch_loss = mse_loss(network(X), Y)
                    val_loss += batch_loss.item()

            val_loss/=len(val_loader.dataset) * param.num_sample_deltas
            if tensorboard_exist:
                writer.add_scalar('Loss/val', val_loss, epoch)

            if val_loss < min_val_loss:
                min_val_loss = val_loss
                min_val_epoch = epoch

                save_path=f'{param.training_dir}/NearestNeighborModel.pt'
                torch.save(network.state_dict(),save_path)

            passed_time_string, est_time_remaining_string = generate_time_strings(epoch, num_epochs, training_start_time)
            training_task.enter_progress_frame(
                1,
                f'Training epoch: {epoch + 1:6d} of {num_epochs:6d}, Val error: {val_loss:.2e} Time: {passed_time_string} - Left: {est_time_remaining_string}')

        ue.log("Model successfully trained.")

def save_onnx_network(param):
    training_dir = param.training_dir
    num_inputs = param.num_inputs

    state_dict = torch.load(f'{training_dir}/NearestNeighborModel.pt')
    network = create_empty_network(param)
    network.load_state_dict(state_dict)
    network.eval()
    X = torch.randn(1, num_inputs)

    out_path = f'{training_dir}/NearestNeighborModel.onnx'
    print('onnx exported to', out_path)
    torch.onnx.export(
        network, X,
        out_path,
        verbose=False,
        export_params=True,
        input_names=['InputParams'],
        output_names=['OutputPredictions'])

def remove_files_in_dir(d, skip_files):
    if os.path.exists(d):
        for f in os.listdir(d):
            if not f in skip_files:
                file_path = os.path.join(d, f)
                if os.path.isfile(file_path):
                    os.remove(file_path)

def cleanup(training_dir):
    remove_files_in_dir(training_dir, skip_files = ['NearestNeighborModel.onnx'])

def run(api):
    return_code = 0 # success
    try:
        # Training Parameters
        rand_seed()
        param = TrainParam(api)
        param.init_run_param()

        if param.use_debug_mode:
            save_tpose_data(param)

        if param.recompute_deltas:
            compute_deltas(param)

        if param.recompute_pca:
            compute_pca(param)
        load_pca(param)

        if param.skip_training:
            raise param.skip_training_except

        train(param)

    except GeneratorExit as e:
        ue.log_warning("Training canceled by user.")
        if str(e)=='Usable':
            return_code = 1  # 'aborted useable'
        else:
            return_code = 2  # 'aborted not useable'

    except Exception as e:
        logging.error(e)
        logging.error(traceback.format_exc())
        return_code = 2 # 'error'

    if return_code == 0 or return_code == 1:
        save_onnx_network(param)

    if return_code == 0 and not param.use_file_cache:
        cleanup(param.training_dir)

    return return_code
