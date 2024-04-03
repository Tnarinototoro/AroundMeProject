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

def train_ppo(config, trainer):
    
    # Config Parameters
    
    training_name = config['TaskName']
    trainer_method = config['TrainerMethod']
    trainer_type = config['TrainerType']
    timestamp = config['TimeStamp']
    
    temp_directory = config['IntermediatePath']
    
    observation_num = int(config['ObservationVectorDimensionNum'])
    action_num = int(config['ActionVectorDimensionNum'])
    max_episode_num = int(config['MaxEpisodeNum'])
    max_step_num = int(config['MaxStepNum'])
    
    policy_byte_num = int(config['PolicyNetworkByteNum'])
    policy_hidden_unit_num = int(config['PolicyHiddenUnitNum'])
    policy_layer_num = int(config['PolicyLayerNum'])
    policy_activation_function = config['PolicyActivationFunction']
    policy_action_noise_min = config['PolicyActionNoiseMin']
    policy_action_noise_max = config['PolicyActionNoiseMax']

    critic_byte_num = int(config['CriticNetworkByteNum'])
    critic_hidden_unit_num = int(config['CriticHiddenUnitNum'])
    critic_layer_num = int(config['CriticLayerNum'])
    critic_activation_function = config['CriticActivationFunction']

    niterations = int(config['IterationNum'])
    lr_actor = config['LearningRatePolicy']
    lr_critic = config['LearningRateCritic']
    lr_gamma = config['LearningRateDecay']
    weight_decay = config['WeightDecay']
    initial_action_scale = config['InitialActionScale']
    batch_size = int(config['BatchSize'])
    eps_clip = config['EpsilonClip']
    reg_coef = config['ActionRegularizationWeight']
    ent_coef = config['EntropyWeight']
    gae_lambda = config['GaeLambda']
    clip_advantage = config['ClipAdvantages']
    advantage_normalization = config['AdvantageNormalization']
    trim_episode_start = int(config['TrimEpisodeStartStepNum'])
    trim_episode_end = int(config['TrimEpisodeEndStepNum'])
    seed = int(config['Seed'])
    discount_factor = config['DiscountFactor']
    device = { 'GPU': 'cuda', 'CPU': 'cpu' }[config['Device']] # Remapping names for pytorch
    use_tensorboard = config['UseTensorBoard']

    use_initial_policy_network = config['UseInitialPolicyNetwork']
    use_initial_critic_network = config['UseInitialCriticNetwork']
    sync_critic = config['SynchronizeCriticNetwork']

    log_enabled = config['LoggingEnabled']

    if log_enabled:
        print(json.dumps(config, indent=4))
        sys.stdout.flush()

    training_identifier = training_name + '_' + trainer_method + '_' + trainer_type + '_' + timestamp

    np.random.seed(seed)
    torch.manual_seed(seed)
    torch.set_num_threads(1)

    # Create Replay Buffer

    if log_enabled: print('Creating Replay Buffer...')

    replay_buffer = ReplayBuffer(max_step_num)

    # Create Actor and Critic

    if log_enabled: print('Creating Networks...')

    actor_network = NeuralNetwork(
        observation_num, 
        2 * action_num, 
        policy_hidden_unit_num, 
        policy_layer_num,
        policy_activation_function,
        initial_action_scale).to(device)
        
    critic_network = NeuralNetwork(
        observation_num, 
        1,
        critic_hidden_unit_num,
        critic_layer_num,
        critic_activation_function).to(device)

    actor = Actor(
        actor_network, 
        device, 
        policy_action_noise_min,
        policy_action_noise_max).to(device)
        
    critic = Critic(critic_network, device).to(device)
    
    # Send or Receive initial networks
    
    if use_initial_policy_network:
        if log_enabled: print('Receiving Policy...')
        response = trainer.recv_policy(actor_network)
        assert response == UE_RESPONSE_SUCCESS
    else:
        if log_enabled: print('Sending Policy...')
        response = trainer.send_policy(actor_network)
        assert response == UE_RESPONSE_SUCCESS

    if use_initial_critic_network:
        if log_enabled: print('Receiving Critic...')
        response = trainer.recv_critic(critic_network)
        assert response == UE_RESPONSE_SUCCESS
    elif sync_critic:
        if log_enabled: print('Sending Critic...')
        response = trainer.send_critic(critic_network)
        assert response == UE_RESPONSE_SUCCESS

    # Create Optimizer

    if log_enabled: print('Creating Optimizer...')

    optimizer_actor = torch.optim.AdamW(
        actor_network.parameters(),
        lr=lr_actor,
        amsgrad=True,
        weight_decay=weight_decay)

    optimizer_critic = torch.optim.AdamW(
        critic_network.parameters(),
        lr=lr_critic,
        amsgrad=True,
        weight_decay=weight_decay)

    scheduler_actor = torch.optim.lr_scheduler.ExponentialLR(optimizer_actor, gamma=lr_gamma)
    scheduler_critic = torch.optim.lr_scheduler.ExponentialLR(optimizer_critic, gamma=lr_gamma)

    # Create PPO Policy

    if log_enabled: print('Creating PPO Policy...')

    policy = CustomPPOPolicy(
        actor,
        critic,
        optimizer_actor,
        optimizer_critic,
        lambda *logits: Independent(Normal(*logits), 1),
        discount_factor=discount_factor,
        max_grad_norm=None,
        eps_clip=eps_clip,
        reg_coef=reg_coef,
        ent_coef=ent_coef,
        gae_lambda=gae_lambda,
        value_clip=False,
        dual_clip=None,
        advantage_normalization=advantage_normalization,
        clip_advantage=clip_advantage,
        recompute_advantage=False,
        action_scaling=False,
        action_bound_method="")

    # TensorBoard

    if log_enabled: print('Opening TensorBoard...')

    if use_tensorboard:
        writer = SummaryWriter(log_dir=temp_directory + "/TensorBoard/runs/" + training_identifier, max_queue=1000)

    # Training Loop

    if log_enabled: print('Begin Training...')

    ti = 0

    while True:

        # Pull Experience

        with Profile('Pull Experience', log_enabled):
            response, avg_reward, avg_return, avg_episode_length = trainer.recv_experience(
                replay_buffer, 
                trim_episode_start, 
                trim_episode_end)
        
        if response == UE_RESPONSE_STOPPED:
            break
        else:
            assert response == UE_RESPONSE_SUCCESS
        
        # Check for completion
        
        if ti >= niterations:
            response = trainer.send_complete()
            assert response == UE_RESPONSE_SUCCESS
            break
        
        # Update Policy

        with Profile('Training', log_enabled):
            losses = policy.update(0, replay_buffer, batch_size=batch_size)
            avg_value = np.mean(losses['experience/value'])
            
        # Push Policy

        with Profile('Pushing Policy', log_enabled):
            response = trainer.send_policy(actor_network)
            assert response == UE_RESPONSE_SUCCESS
            
        if sync_critic:
        
            # Push Critic
            
            with Profile('Pushing Critic', log_enabled):
                response = trainer.send_critic(critic_network)
                assert response == UE_RESPONSE_SUCCESS
            
        # Log stats

        with Profile('Logging', log_enabled):

            if log_enabled: print('\rIter: %7i | Avg Reward: %7.5f | Avg Return: %7.5f | Avg Value: %7.5f | Avg Episode Length: %7.5f' % 
                (ti, avg_reward, avg_return, avg_value, avg_episode_length))
            sys.stdout.flush()
            
            if use_tensorboard:
                writer.add_scalar('experience/avg_reward', avg_reward, ti)
                writer.add_scalar('experience/avg_return', avg_return, ti)
                writer.add_scalar('experience/avg_value', avg_value, ti)
                writer.add_scalar('experience/avg_episode_length', avg_episode_length, ti)

            for bi in range(len(losses['loss/actor'])):

                if use_tensorboard:
                    writer.add_scalar('action/avg_mean_mag', losses['action/avg_mean_mag'][bi], ti)
                    writer.add_scalar('action/avg_std_mag', losses['action/avg_std_mag'][bi], ti)
                    writer.add_scalar('grads/actor', losses['grads/actor'][bi], ti)
                    writer.add_scalar('grads/critic', losses['grads/critic'][bi], ti)
                    writer.add_scalar('loss/actor', losses['loss/actor'][bi], ti)
                    writer.add_scalar('loss/critic', losses['loss/critic'][bi], ti)
                    writer.add_scalar('loss/clip', losses['loss/clip'][bi], ti)
                    writer.add_scalar('loss/reg', losses['loss/reg'][bi], ti)
                    writer.add_scalar('loss/ent', losses['loss/ent'][bi], ti)
                
                # Write Snapshot
                
                if ti % 1000 == 0:
                    
                    if log_enabled: print('Saving Snapshot...')
                    
                    if not os.path.exists(temp_directory + "/Snapshots/"):
                        os.mkdir(temp_directory + "/Snapshots/")
                    
                    serialize_snapshot(
                        temp_directory + "/Snapshots/" + training_identifier + '_policy_' + str(ti) + '.bin',
                        actor_network,
                        policy_byte_num)
                    
                    serialize_snapshot(
                        temp_directory + "/Snapshots/" + training_identifier + '_critic_' + str(ti) + '.bin',
                        critic_network,
                        critic_byte_num)
                        
                ti += 1
                
                # Update lr schedulers
                
                if ti % 1000 == 0:
                    scheduler_actor.step()
                    scheduler_critic.step()
        
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
        from tianshou.data import ReplayBuffer
        from tianshou.data import Batch
        from torch.distributions import Independent, Normal
        from custom_ppo import CustomPPOPolicy
        from train_common import (
            Profile, 
            SharedMemoryPPOTrainer, 
            NeuralNetwork, 
            Actor, 
            Critic, 
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
        
        trainer = SharedMemoryPPOTrainer(
            config['PolicyGuid'],
            config.get('CriticGuid', None),
            config['ControlsGuid'],
            config['EpisodeStartsGuid'],
            config['EpisodeLengthsGuid'],
            config['EpisodeCompletionModesGuid'],
            config['EpisodeFinalObservationsGuid'],
            config['ObservationsGuid'],
            config['ActionsGuid'],
            config['RewardsGuid'],
            int(config['ProcessNum']),
            int(config['ObservationVectorDimensionNum']),
            int(config['ActionVectorDimensionNum']),
            int(config['MaxEpisodeNum']),
            int(config['MaxStepNum']),
            int(config['PolicyNetworkByteNum']),
            int(config['CriticNetworkByteNum']),
            config['SynchronizeCriticNetwork'] or config['UseInitialCriticNetwork'])
        
        # Train
        
        train_ppo(config, trainer)

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
        from tianshou.data import ReplayBuffer
        from tianshou.data import Batch
        from torch.distributions import Independent, Normal
        from custom_ppo import CustomPPOPolicy
        from train_common import (
            Profile, 
            NetworkPPOTrainer, 
            NeuralNetwork,
            Actor, 
            Critic,
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
                        
                        trainer = NetworkPPOTrainer(
                            conn,
                            int(config['ObservationVectorDimensionNum']),
                            int(config['ActionVectorDimensionNum']),
                            int(config['MaxEpisodeNum']),
                            int(config['MaxStepNum']),
                            int(config['PolicyNetworkByteNum']),
                            int(config['CriticNetworkByteNum']),
                            config['SynchronizeCriticNetwork'] or config['UseInitialCriticNetwork'])
                        
                        # Train
                        
                        if log_enabled: print('Training...')
                        
                        train_ppo(config, trainer)
                        
                    if log_enabled: print('Exiting...')
                    
                except Exception as e:
                
                    print('Exception During Communication:' + str(e))
                    traceback.print_exc()
    else:
    
        raise Exception('Unknown Trainer Type %s' % trainer_type)
        
    