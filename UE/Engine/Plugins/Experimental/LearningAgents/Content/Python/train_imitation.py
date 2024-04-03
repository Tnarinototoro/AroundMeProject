# -*- coding: utf-8 -*-
'''
Copyright Epic Games, Inc. All Rights Reserved.
'''

import sys
import os
import time
import json
import socket
import traceback

def train_imitation(config, trainer):

    # Config Parameters

    training_name = config['TaskName']
    trainer_method = config['TrainerMethod']
    trainer_type = config['TrainerType']
    timestamp = config['TimeStamp']
    
    site_packages = config['SitePackagesPath']
    temp_directory = config['IntermediatePath']

    observation_num = int(config['ObservationVectorDimensionNum'])
    action_num = int(config['ActionVectorDimensionNum'])
    max_sample_num = int(config['MaxSampleNum'])
    
    policy_byte_num = int(config['PolicyNetworkByteNum'])
    policy_hidden_unit_num = int(config['PolicyHiddenUnitNum'])
    policy_layer_num = int(config['PolicyLayerNum'])
    policy_activation_function = config['PolicyActivationFunction']
    policy_action_noise_min = config['PolicyActionNoiseMin']
    policy_action_noise_max = config['PolicyActionNoiseMax']
    
    niterations = int(config['IterationNum'])
    lr_actor = config['LearningRateActor']
    lr_gamma = config['LearningRateDecay']
    weight_decay = config['WeightDecay']
    batch_size = int(config['BatchSize'])
    seed = int(config['Seed'])
    device = { 'GPU': 'cuda', 'CPU': 'cpu' }[config['Device']] # Remapping names for pytorch
    use_tensorboard = config['UseTensorBoard']
    iterations_per_sync = 100
    
    use_initial_policy_network = config['UseInitialPolicyNetwork']

    log_enabled = config['LoggingEnabled']

    if log_enabled:
        print(json.dumps(config, indent=4))
        sys.stdout.flush()

    training_identifier = training_name + '_' + trainer_method + '_' + trainer_type + '_' + timestamp

    np.random.seed(seed)
    torch.manual_seed(seed)
    torch.set_num_threads(1)

    # Create Actor

    if log_enabled: print('Creating Networks...')

    actor_network = NeuralNetwork(
        observation_num, 
        2 * action_num, 
        policy_hidden_unit_num, 
        policy_layer_num,
        policy_activation_function).to(device)

    actor = Actor(
        actor_network, 
        device, 
        policy_action_noise_min,
        policy_action_noise_max).to(device)
        
    # Send or Receive initial policy network
    
    if use_initial_policy_network:
        if log_enabled: print('Receiving Policy...')
        response = trainer.recv_policy(actor_network)
        assert response == UE_RESPONSE_SUCCESS
    else:
        if log_enabled: print('Sending Policy...')
        response = trainer.send_policy(actor_network)
        assert response == UE_RESPONSE_SUCCESS

    # Wait for experience

    with Profile('Waiting for Experience...', log_enabled):
        response, observations, actions = trainer.recv_experience()
        assert response == UE_RESPONSE_SUCCESS
        
    # Create Optimizer

    if log_enabled: print('Creating Optimizer...')

    optimizer_actor = torch.optim.AdamW(
        actor_network.parameters(),
        lr=lr_actor,
        amsgrad=True,
        weight_decay=weight_decay)

    scheduler_actor = torch.optim.lr_scheduler.ExponentialLR(optimizer_actor, gamma=lr_gamma)

    # TensorBoard

    if log_enabled: print('Opening TensorBoard...')

    if use_tensorboard:
        writer = SummaryWriter(log_dir=temp_directory + "/TensorBoard/runs/" + training_identifier)

    # Training Loop

    if log_enabled: print('Begin Training...')

    rolling_avg_loss = None
    ti = 0

    while True:

        # Check if we need to stop

        if trainer.has_stop():
            response = trainer.recv_stop()
            assert response == UE_RESPONSE_SUCCESS
            break
        
        # Do multiple iterations per sync
        
        for _ in range(iterations_per_sync):
        
            # Check for completion

            if ti >= niterations:
                response = trainer.send_complete() 
                assert response == UE_RESPONSE_SUCCESS
                break

            # Update Policy

            with Profile('Training', log_enabled):
                
                batch = np.random.randint(0, len(observations), size=[batch_size])
            
                (mu, sigma), state = actor.forward(observations[batch]) 
                
                loss = torch.mean(torch.abs(mu - torch.as_tensor(actions[batch], device=device)))

                actor.zero_grad()
                loss.backward()
                optimizer_actor.step()

                loss_item = loss.item()

            # Log stats

            with Profile('Logging', log_enabled):

                if rolling_avg_loss is None:
                    rolling_avg_loss = loss_item
                else:
                    rolling_avg_loss = rolling_avg_loss * 0.99 + loss_item * 0.01

                if log_enabled: print('\rIter: %7i Loss: %7.5f' % (ti, rolling_avg_loss))

                # TensorBoard

                if use_tensorboard:
                    writer.add_scalar('losses/loss', loss_item, ti)

            # Write Snapshot
            
            if ti % 1000 == 0:
                
                if log_enabled: print('Saving Snapshot...')
                
                if not os.path.exists(temp_directory + "/Snapshots/"):
                    os.mkdir(temp_directory + "/Snapshots/")
                
                serialize_snapshot(
                    temp_directory + "/Snapshots/" + training_identifier + '_policy_' + str(ti) + '.bin',
                    actor_network,
                    policy_byte_num)
            
            ti += 1
        
            # Update lr schedulers

            if ti % 1000 == 0:
                scheduler_actor.step()

        # Push Policy

        with Profile('Pushing Policy...', log_enabled):
            response = trainer.send_policy(actor_network) 
            assert response == UE_RESPONSE_SUCCESS

    if log_enabled: print("Done!")
    
    
if __name__ == '__main__':

    if len(sys.argv) <= 1:
        raise Exception('Trainer type not provided')
    else:
        trainer_type = sys.argv[1]
    
    if trainer_type == 'SharedMemory':
        
        # Load Config from File
        
        if len(sys.argv) != 3:
            raise Exception('Wrong number of arguments to Shared Memory Trainer')
        
        config_file = sys.argv[2]
        
        with open(config_file) as f:
            config = json.load(f)

        # Append site packages and import modules

        sys.path.append(config['SitePackagesPath'])
        
        import numpy as np
        import torch
        from train_common import (
            Profile, 
            SharedMemoryImitationTrainer, 
            NeuralNetwork, 
            Actor, 
            UE_RESPONSE_SUCCESS, 
            UE_RESPONSE_UNEXPECTED, 
            UE_RESPONSE_COMPLETED,
            UE_RESPONSE_STOPPED,
            UE_RESPONSE_TIMEOUT,
            serialize_snapshot)
        
        # Import TensorBoard
        
        if config['UseTensorBoard']:
            try:
                from torch.utils.tensorboard import SummaryWriter
            except ImportError as e:
                if config['LoggingEnabled']:
                    print('Failed to Load TensorBoard. Could not be found in site-packages.')
                config['UseTensorBoard'] = False
        
        # Create Trainer
        
        trainer = SharedMemoryImitationTrainer(
            config['PolicyGuid'],
            config['ControlsGuid'],
            config['ObservationsGuid'],
            config['ActionsGuid'],
            int(config['ObservationVectorDimensionNum']),
            int(config['ActionVectorDimensionNum']),
            int(config['MaxSampleNum']),
            int(config['PolicyNetworkByteNum']))
        
        # Train
        
        train_imitation(config, trainer)

        if config['LoggingEnabled']: print('Exiting...')        


    elif trainer_type == 'Socket':
        
        # Command line args
        
        if len(sys.argv) != 6:
            raise Exception('Wrong number of arguments to Socket Trainer')
        
        address = sys.argv[2]
        site_packages = sys.argv[3]
        temp_directory = sys.argv[4]
        log_enabled = bool(sys.argv[5])
        
        if log_enabled:
            print('Starting Socket Trainer...')
        
        # Append site packages and import modules

        sys.path.append(site_packages)
        
        import numpy as np
        import torch
        from train_common import (
            Profile, 
            NetworkImitationTrainer, 
            NeuralNetwork, 
            Actor, 
            socket_recv_config,
            UE_RESPONSE_SUCCESS, 
            UE_RESPONSE_UNEXPECTED, 
            UE_RESPONSE_COMPLETED,
            UE_RESPONSE_STOPPED,
            UE_RESPONSE_TIMEOUT,
            serialize_snapshot)
        
        # Create Server
        
        host, port = address.split(':')
        port = int(port)
        
        if log_enabled:
            print('Creating Socket Trainer Server (%s:%i)...' % (host, port))
        
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        
            if log_enabled: print('Listening...')
            
            s.bind((host, port))
            s.listen()
            
            while True:
                
                conn, addr = s.accept()
                
                # For now we will just set the timeout on the socket
                # directly. In the future we should make this socket
                # non-blocking and handle the timeouts properly as is
                # done on the C++ side.
                conn.settimeout(10.0)
                
                try:
                    
                    if log_enabled: print('Accepted...')

                    with conn:
                        
                        if log_enabled: print('Receiving Config...')
                        
                        response, config = socket_recv_config(conn)
                        
                        if response != UE_RESPONSE_SUCCESS:
                            raise Exception('Failed to get config...')
                            
                        config = json.loads(config)
                        config['SitePackagesPath'] = site_packages
                        config['IntermediatePath'] = temp_directory
                        config['LoggingEnabled'] = log_enabled
                        
                        # Import TensorBoard
                        
                        if config['UseTensorBoard']:
                            try:
                                from torch.utils.tensorboard import SummaryWriter
                            except ImportError as e:
                                if config['LoggingEnabled']:
                                    print('Failed to import TensorBoard. Please add manually to site-packages.')
                                config['UseTensorBoard'] = False
                        
                        # Save Config

                        if not os.path.exists(temp_directory+'/Configs/'):
                            os.makedirs(temp_directory+'/Configs/')

                        with open(temp_directory+'/Configs/%s_%s_%s_%s.json' % (
                            config['TaskName'], 
                            config['TrainerMethod'], 
                            config['TrainerType'], 
                            config['TimeStamp']), 'w') as f:
                             
                            json.dump(config, f, indent=4)
                        
                        # Create Trainer
                        
                        if log_enabled: print('Creating Trainer...')
                        
                        trainer = NetworkImitationTrainer(
                            conn,
                            int(config['ObservationVectorDimensionNum']),
                            int(config['ActionVectorDimensionNum']),
                            int(config['PolicyNetworkByteNum']))
                        
                        # Train
                        
                        if log_enabled: print('Training...')
                        
                        train_imitation(config, trainer)
                        
                    if log_enabled: print('Exiting...')
                
                except Exception as e:
                
                    print('Exception During Communication:' + str(e))
                    traceback.print_exc()

    else:
    
        raise Exception('Unknown Trainer Type %s' % trainer_type)
        
    