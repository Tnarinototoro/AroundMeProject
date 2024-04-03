# -*- coding: utf-8 -*-
'''
Copyright Epic Games, Inc. All Rights Reserved.
'''

import sys
from multiprocessing import shared_memory
import os
import time
import struct
import select

import numpy as np
import torch
import torch.nn as nn

from tianshou.data import Batch

UE_LEARNING_DEVELOPMENT = False
UE_LEARNING_PROFILE = True


# Profile

class Profile:

    def __init__(self, name, enabled=True):
        self.name = name
        self.enabled = enabled and UE_LEARNING_PROFILE

    def __enter__(self):
        if self.enabled:
            self.start_time = time.time()

    def __exit__(self, type, value, traceback):
        if self.enabled:
            print("Profile| %-25s %6ims" % (self.name, round((time.time() - self.start_time) * 1000)))


# Completion

UE_COMPLETION_RUNNING = 0
UE_COMPLETION_TRUNCATED = 1
UE_COMPLETION_TERMINATED = 2


# Trainer Response

UE_RESPONSE_SUCCESS = 0
UE_RESPONSE_UNEXPECTED = 1
UE_RESPONSE_COMPLETED = 2
UE_RESPONSE_STOPPED = 3
UE_RESPONSE_TIMEOUT = 4


# Shared Memory

UE_SHARED_MEMORY_EXPERIENCE_EPISODE_NUM = 0
UE_SHARED_MEMORY_EXPERIENCE_STEP_NUM = 1
UE_SHARED_MEMORY_EXPERIENCE_SIGNAL = 2
UE_SHARED_MEMORY_POLICY_SIGNAL = 3
UE_SHARED_MEMORY_CRITIC_SIGNAL = 4
UE_SHARED_MEMORY_COMPLETE_SIGNAL = 5
UE_SHARED_MEMORY_STOP_SIGNAL = 6

UE_SHARED_MEMORY_CONTROL_NUM = 8


def shared_memory_map_array(guid, shape, dtype):
    handle = shared_memory.SharedMemory(guid, create=False, size=np.product(shape) * np.dtype(dtype).itemsize)
    assert handle is not None
    array = np.frombuffer(handle.buf, dtype=dtype, count=np.product(shape)).reshape(shape)
    return handle, array
    

def shared_memory_send_policy(controls, policy, network, timeout=10.0, sleeptime=0.001):

    waittime = 0.0
    while controls[UE_SHARED_MEMORY_POLICY_SIGNAL]:
        time.sleep(sleeptime)
        waittime += sleeptime
        if waittime > timeout:
            return UE_RESPONSE_TIMEOUT
    
    network.serialize(0, policy)
    
    controls[UE_SHARED_MEMORY_POLICY_SIGNAL] = 1
    
    return UE_RESPONSE_SUCCESS


def shared_memory_send_critic(controls, critic, network, timeout=10.0, sleeptime=0.001):

    waittime = 0.0
    while controls[UE_SHARED_MEMORY_CRITIC_SIGNAL]:
        time.sleep(sleeptime)
        waittime += sleeptime
        if waittime > timeout:
            return UE_RESPONSE_TIMEOUT
    
    network.serialize(0, critic)
    
    controls[UE_SHARED_MEMORY_CRITIC_SIGNAL] = 1
    
    return UE_RESPONSE_SUCCESS

def shared_memory_send_policy_multiprocess(processes_controls, policy, network, timeout=10.0, sleeptime=0.001):

    for controls in processes_controls:
        waittime = 0.0
        while controls[UE_SHARED_MEMORY_POLICY_SIGNAL]:
            time.sleep(sleeptime)
            waittime += sleeptime
            if waittime > timeout:
                return UE_RESPONSE_TIMEOUT
    
    network.serialize(0, policy)
    
    for controls in processes_controls:
        controls[UE_SHARED_MEMORY_POLICY_SIGNAL] = 1
    
    return UE_RESPONSE_SUCCESS


def shared_memory_send_critic_multiprocess(processes_controls, critic, network, timeout=10.0, sleeptime=0.001):

    for controls in processes_controls:
        waittime = 0.0
        while controls[UE_SHARED_MEMORY_CRITIC_SIGNAL]:
            time.sleep(sleeptime)
            waittime += sleeptime
            if waittime > timeout:
                return UE_RESPONSE_TIMEOUT
    
    network.serialize(0, critic)
    
    for controls in processes_controls:
        controls[UE_SHARED_MEMORY_CRITIC_SIGNAL] = 1
    
    return UE_RESPONSE_SUCCESS


def shared_memory_recv_policy(controls, policy, network, timeout=10.0, sleeptime=0.001):

    controls[UE_SHARED_MEMORY_POLICY_SIGNAL] = 1
    
    waittime = 0.0
    while controls[UE_SHARED_MEMORY_POLICY_SIGNAL]:
        time.sleep(sleeptime)
        waittime += sleeptime
        if waittime > timeout:
            return UE_RESPONSE_TIMEOUT
    
    network.deserialize(0, policy)
    
    return UE_RESPONSE_SUCCESS


def shared_memory_recv_critic(controls, critic, network, timeout=10.0, sleeptime=0.001):

    controls[UE_SHARED_MEMORY_CRITIC_SIGNAL] = 1
    
    waittime = 0.0
    while controls[UE_SHARED_MEMORY_CRITIC_SIGNAL]:
        time.sleep(sleeptime)
        waittime += sleeptime
        if waittime > timeout:
            return UE_RESPONSE_TIMEOUT
    
    network.deserialize(0, critic)
    
    return UE_RESPONSE_SUCCESS



def shared_memory_recv_policy_multiprocess(processes_controls, policy, network, timeout=10.0, sleeptime=0.001):
    
    for controls in processes_controls:
        controls[UE_SHARED_MEMORY_POLICY_SIGNAL] = 1
    
    for controls in processes_controls:
        waittime = 0.0
        while controls[UE_SHARED_MEMORY_POLICY_SIGNAL]:
            time.sleep(sleeptime)
            waittime += sleeptime
            if waittime > timeout:
                return UE_RESPONSE_TIMEOUT
    
    network.deserialize(0, policy)
    
    return UE_RESPONSE_SUCCESS


def shared_memory_recv_critic_multiprocess(processes_controls, critic, network, timeout=10.0, sleeptime=0.001):
    
    for controls in processes_controls:
        controls[UE_SHARED_MEMORY_CRITIC_SIGNAL] = 1
    
    for controls in processes_controls:
        waittime = 0.0
        while controls[UE_SHARED_MEMORY_CRITIC_SIGNAL]:
            time.sleep(sleeptime)
            waittime += sleeptime
            if waittime > timeout:
                return UE_RESPONSE_TIMEOUT
    
    network.deserialize(0, critic)
    
    return UE_RESPONSE_SUCCESS


def shared_memory_recv_experience_multiprocess(
    processes_controls, 
    processes_episode_starts,
    processes_episode_lengths,
    processes_episode_completion_modes,
    processes_episode_final_observations,
    processes_observations,
    processes_actions,
    processes_rewards,
    replay_buffer, 
    obs_next_buffer,
    terminated_buffer,
    truncated_buffer,
    done_buffer,
    trim_episode_start, 
    trim_episode_end,
    timeout=10.0,
    sleeptime=0.001):
    
    # Wait until experience is ready
    
    for controls in processes_controls:
        waittime = 0.0
        while not controls[UE_SHARED_MEMORY_EXPERIENCE_SIGNAL]:
        
            if controls[UE_SHARED_MEMORY_STOP_SIGNAL]:
                controls[UE_SHARED_MEMORY_STOP_SIGNAL] = 0
                return UE_RESPONSE_STOPPED, None, None, None
        
            time.sleep(sleeptime)
            waittime += sleeptime
            if waittime > timeout:
                return UE_RESPONSE_TIMEOUT, None, None, None
    
    # Append experience from shared memory to replay buffer

    avg_reward = 0.0
    avg_return = 0.0
    avg_episode_length = 0.0
    
    replay_buffer.reset()
    
    for (controls, 
         episode_starts, 
         episode_lengths,
         episode_completion_modes,
         episode_final_observations,
         observations,
         actions,
         rewards) in zip(
            processes_controls,
            processes_episode_starts,
            processes_episode_lengths,
            processes_episode_completion_modes,
            processes_episode_final_observations,
            processes_observations,
            processes_actions,
            processes_rewards):
        
        episode_num = controls[UE_SHARED_MEMORY_EXPERIENCE_EPISODE_NUM]
        step_num = controls[UE_SHARED_MEMORY_EXPERIENCE_STEP_NUM]
        assert episode_num > 0 and step_num > 0

        for ei in range(episode_num):
            
            ep_start = episode_starts[ei] + trim_episode_start
            ep_end = episode_starts[ei] + episode_lengths[ei] - trim_episode_end
            ep_len = episode_lengths[ei] - trim_episode_end - trim_episode_start
            
            if ep_len > 0:
            
                obs = observations[ep_start:ep_end]
                act = actions[ep_start:ep_end]
                rew = rewards[ep_start:ep_end]
                
                if UE_LEARNING_DEVELOPMENT:
                    assert np.all(np.isfinite(obs))
                    assert np.all(np.isfinite(act))
                    assert np.all(np.isfinite(rew))
                
                avg_reward += rew.mean() / (episode_num * len(processes_controls))
                avg_return += rew.sum() / (episode_num * len(processes_controls))
                avg_episode_length += float(ep_len) / (episode_num * len(processes_controls))

                obs_next = obs_next_buffer[:ep_len]
                obs_next[:-1] = obs[1:]
                obs_next[-1] = episode_final_observations[ei]

                terminated = terminated_buffer[:ep_len]
                terminated[:-1] = False
                terminated[-1] = (episode_completion_modes[ei] == UE_COMPLETION_TERMINATED)

                truncated = truncated_buffer[:ep_len]
                truncated[:-1] = False
                truncated[-1] = (episode_completion_modes[ei] == UE_COMPLETION_TRUNCATED)

                done = done_buffer[:ep_len]                
                done[:-1] = False
                done[-1] = True

                replay_buffer.add_batch(Batch(
                    obs=obs,
                    obs_next=obs_next,
                    act=act,
                    rew=rew,
                    terminated=terminated,
                    truncated=truncated,
                    done=done))

        controls[UE_SHARED_MEMORY_EXPERIENCE_SIGNAL] = 0
    
    return UE_RESPONSE_SUCCESS, avg_reward, avg_return, avg_episode_length
    
    
def shared_memory_recv_experience_imitation(controls, observations, actions, timeout=10.0, sleeptime=0.001):

    # Wait until experience is ready
    
    waittime = 0.0
    while not controls[UE_SHARED_MEMORY_EXPERIENCE_SIGNAL]:
    
        if controls[UE_SHARED_MEMORY_STOP_SIGNAL]:
            controls[UE_SHARED_MEMORY_STOP_SIGNAL] = 0
            return UE_RESPONSE_STOPPED, None, None
    
        time.sleep(sleeptime)
        waittime += sleeptime
        if waittime > timeout:
            return UE_RESPONSE_TIMEOUT, None, None
    
    # Copy experience
    
    step_num = controls[UE_SHARED_MEMORY_EXPERIENCE_STEP_NUM]
    assert step_num > 0

    observations_experience = observations[:step_num].copy()
    actions_experience = actions[:step_num].copy()

    if UE_LEARNING_DEVELOPMENT:
        assert np.all(np.isfinite(observations_experience))
        assert np.all(np.isfinite(actions_experience))

    controls[UE_SHARED_MEMORY_EXPERIENCE_SIGNAL] = 0
    
    return UE_RESPONSE_SUCCESS, observations_experience, actions_experience
   

def shared_memory_send_complete(controls):
    controls[UE_SHARED_MEMORY_COMPLETE_SIGNAL] = 1
    return UE_RESPONSE_SUCCESS
    
    
def shared_memory_send_complete_multiprocess(processes_controls):

    for controls in processes_controls:
        controls[UE_SHARED_MEMORY_COMPLETE_SIGNAL] = 1
    
    return UE_RESPONSE_SUCCESS

def shared_memory_has_stop(controls):
    return controls[UE_SHARED_MEMORY_STOP_SIGNAL]

def shared_memory_recv_stop(controls, timeout=10.0, sleeptime=0.001):

    waittime = 0.0
    while not controls[UE_SHARED_MEMORY_STOP_SIGNAL]:
    
        time.sleep(sleeptime)
        waittime += sleeptime
        if waittime > timeout:
            return UE_RESPONSE_TIMEOUT

    controls[UE_SHARED_MEMORY_STOP_SIGNAL] = 0
    
    return UE_RESPONSE_SUCCESS


class SharedMemoryPPOTrainer:

    def __init__(
        self,
        policy_guid,
        critic_guid,
        controls_guid,
        episode_starts_guid,
        episode_lengths_guid,
        episode_completion_modes_guid,
        episode_final_observations_guid,
        observations_guid,
        actions_guid,
        rewards_guid,
        process_num,
        observation_num,
        action_num,
        max_episode_num,
        max_step_num,
        max_policy_byte_num,
        max_critic_byte_num,
        requires_critic_buffer):
        
        self.process_num = process_num
        
        self.policy = shared_memory_map_array(policy_guid, [max_policy_byte_num], np.uint8)
        self.critic = shared_memory_map_array(critic_guid, [max_critic_byte_num], np.uint8) if requires_critic_buffer else None
        self.control = shared_memory_map_array(controls_guid, [process_num, UE_SHARED_MEMORY_CONTROL_NUM], np.int32)
        self.episode_starts = shared_memory_map_array(episode_starts_guid, [process_num, max_episode_num], np.int32)
        self.episode_lengths = shared_memory_map_array(episode_lengths_guid, [process_num, max_episode_num], np.int32)
        self.episode_completion_modes = shared_memory_map_array(episode_completion_modes_guid, [process_num, max_episode_num], np.uint8)
        self.episode_final_observations = shared_memory_map_array(episode_final_observations_guid, [process_num, max_episode_num, observation_num], np.float32)
        self.observations = shared_memory_map_array(observations_guid, [process_num, max_step_num, observation_num], np.float32)
        self.actions = shared_memory_map_array(actions_guid, [process_num, max_step_num, action_num], np.float32)
        self.rewards = shared_memory_map_array(rewards_guid, [process_num, max_step_num], np.float32)

        self.obs_next_buffer = np.zeros([max_step_num, observation_num], dtype=np.float32)
        self.terminated_buffer = np.zeros([max_step_num], dtype=bool)
        self.truncated_buffer = np.zeros([max_step_num], dtype=bool)
        self.done_buffer = np.zeros([max_step_num], dtype=bool)

    def __del__(self):
        
        # Remove reference to numpy arrays by taking only first elements
        self.policy = self.policy[0]
        self.critic = self.critic[0] if self.critic is not None else None
        self.control = self.control[0]
        self.episode_starts = self.episode_starts[0]
        self.episode_lengths = self.episode_lengths[0]
        self.episode_completion_modes = self.episode_completion_modes[0]
        self.episode_final_observations = self.episode_final_observations[0]
        self.observations = self.observations[0]
        self.actions = self.actions[0]
        self.rewards = self.rewards[0]
        
        # Close shared memory
        self.policy.close()
        if self.critic is not None: self.critic.close()
        self.control.close()
        self.episode_starts.close()
        self.episode_lengths.close()
        self.episode_completion_modes.close()
        self.episode_final_observations.close()
        self.observations.close()
        self.actions.close()
        self.rewards.close()
    
    def send_policy(self, network):
        return shared_memory_send_policy_multiprocess(
            [self.control[1][pi] for pi in range(self.process_num)],
            self.policy[1],
            network)
            
    def send_critic(self, network):
        return shared_memory_send_critic_multiprocess(
            [self.control[1][pi] for pi in range(self.process_num)],
            self.critic[1],
            network)
        
    def recv_policy(self, network):
        return shared_memory_recv_policy_multiprocess(
            [self.control[1][pi] for pi in range(self.process_num)],
            self.policy[1],
            network)

    def recv_critic(self, network):
        return shared_memory_recv_critic_multiprocess(
            [self.control[1][pi] for pi in range(self.process_num)],
            self.critic[1],
            network)

    def recv_experience(self, replay_buffer, trim_episode_start, trim_episode_end):
        
        return shared_memory_recv_experience_multiprocess(
            [self.control[1][pi] for pi in range(self.process_num)],
            [self.episode_starts[1][pi] for pi in range(self.process_num)],
            [self.episode_lengths[1][pi] for pi in range(self.process_num)],
            [self.episode_completion_modes[1][pi] for pi in range(self.process_num)],
            [self.episode_final_observations[1][pi] for pi in range(self.process_num)],
            [self.observations[1][pi] for pi in range(self.process_num)],
            [self.actions[1][pi] for pi in range(self.process_num)],
            [self.rewards[1][pi] for pi in range(self.process_num)],
            replay_buffer,
            self.obs_next_buffer,
            self.terminated_buffer,
            self.truncated_buffer,
            self.done_buffer,
            trim_episode_start,
            trim_episode_end)
        
    def send_complete(self):
        return send_complete_multiprocess([self.control[1][pi] for pi in range(self.process_num)])
    
    
class SharedMemoryImitationTrainer:

    def __init__(
        self,
        policy_guid,
        controls_guid,
        observations_guid,
        actions_guid,
        observation_num,
        action_num,
        max_step_num,
        max_policy_byte_num):
        
        self.policy = shared_memory_map_array(policy_guid, [max_policy_byte_num], np.uint8)
        self.control = shared_memory_map_array(controls_guid, [UE_SHARED_MEMORY_CONTROL_NUM], np.int32)
        self.observations = shared_memory_map_array(observations_guid, [max_step_num, observation_num], np.float32)
        self.actions = shared_memory_map_array(actions_guid, [max_step_num, action_num], np.float32)

    def __del__(self):
    
        # Remove reference to numpy arrays by taking only first elements
        self.policy = self.policy[0]
        self.control = self.control[0]
        self.observations = self.observations[0]
        self.actions = self.actions[0]

        # Close shared memory
        self.policy.close()
        self.control.close()
        self.observations.close()
        self.actions.close()
    
    def send_policy(self, network):
        return shared_memory_send_policy(self.control[1], self.policy[1], network)
    
    def recv_policy(self, network):
        return shared_memory_recv_policy(self.control[1], self.policy[1], network)
    
    def recv_experience(self):
        return shared_memory_recv_experience_imitation(self.control[1], self.observations[1], self.actions[1])
    
    def has_stop(self):
        return shared_memory_has_stop(self.control[1])
    
    def recv_stop(self):
        return shared_memory_recv_stop(self.control[1])
    
    def send_complete(self):
        return shared_memory_send_complete(self.control[1])

# Network Trainers

UE_SOCKET_SIGNAL_INVALID = 0
UE_SOCKET_SIGNAL_SEND_CONFIG = 1
UE_SOCKET_SIGNAL_SEND_EXPERIENCE = 2
UE_SOCKET_SIGNAL_RECV_POLICY = 3
UE_SOCKET_SIGNAL_SEND_POLICY = 4
UE_SOCKET_SIGNAL_RECV_CRITIC = 5
UE_SOCKET_SIGNAL_SEND_CRITIC = 6
UE_SOCKET_SIGNAL_RECV_COMPLETE = 7
UE_SOCKET_SIGNAL_SEND_STOP = 8

def socket_recvall(sock, byte_num):
    data = b''
    while len(data) < byte_num:
        data += sock.recv(byte_num - len(data))
    return data
    
def socket_sendall(sock, data):
    sent = 0
    while sent < len(data):
        sent += sock.send(data[sent:])
    
def socket_send_policy(socket, network, policy_buffer):
    socket_sendall(socket, b'%c' % UE_SOCKET_SIGNAL_RECV_POLICY) 
    network.serialize(0, policy_buffer)
    socket_sendall(socket, policy_buffer.tobytes())
    return UE_RESPONSE_SUCCESS

def socket_send_critic(socket, network, critic_buffer):
    socket_sendall(socket, b'%c' % UE_SOCKET_SIGNAL_RECV_CRITIC) 
    network.serialize(0, critic_buffer)
    socket_sendall(socket, critic_buffer.tobytes())
    return UE_RESPONSE_SUCCESS

def socket_recv_policy(socket, network, policy_buffer):
    signal = ord(socket_recvall(socket, 1))
    
    if signal != UE_SOCKET_SIGNAL_SEND_POLICY:
        return UE_RESPONSE_UNEXPECTED

    policy_buffer[:] = np.frombuffer(socket_recvall(socket, len(policy_buffer)), dtype=np.uint8)
    network.deserialize(0, policy_buffer)
    
    return UE_RESPONSE_SUCCESS

def socket_recv_critic(socket, network, critic_buffer):
    signal = ord(socket_recvall(socket, 1))
    
    if signal != UE_SOCKET_SIGNAL_SEND_CRITIC:
        return UE_RESPONSE_UNEXPECTED

    critic_buffer[:] = np.frombuffer(socket_recvall(socket, len(critic_buffer)), dtype=np.uint8)
    network.deserialize(0, critic_buffer)
    
    return UE_RESPONSE_SUCCESS

def socket_send_complete(socket):
    socket_sendall(socket, b'%c' % UE_SOCKET_SIGNAL_RECV_COMPLETE)
    return UE_RESPONSE_SUCCESS

def socket_recv_experience(
    socket, 
    replay_buffer, 
    observation_num, 
    action_num, 
    obs_next_buffer,
    terminated_buffer,
    truncated_buffer,
    done_buffer, 
    trim_episode_start, 
    trim_episode_end):
    
    signal = ord(socket_recvall(socket, 1))
    
    if signal == UE_SOCKET_SIGNAL_SEND_STOP:
        return UE_RESPONSE_STOPPED, None, None, None
        
    if signal != UE_SOCKET_SIGNAL_SEND_EXPERIENCE:
        return UE_RESPONSE_UNEXPECTED, None, None, None
        
    # Append experience from shared memory to replay buffer

    replay_buffer.reset()
    
    episode_num = int.from_bytes(socket_recvall(socket, 4), byteorder='little')
    step_num = int.from_bytes(socket_recvall(socket, 4), byteorder='little')
    assert episode_num > 0 and step_num > 0

    episode_starts = np.frombuffer(socket_recvall(socket, episode_num * np.dtype(np.int32).itemsize), dtype=np.int32).reshape([episode_num])
    episode_lengths = np.frombuffer(socket_recvall(socket, episode_num * np.dtype(np.int32).itemsize), dtype=np.int32).reshape([episode_num])
    episode_completion_modes = np.frombuffer(socket_recvall(socket, episode_num * np.dtype(np.uint8).itemsize), dtype=np.uint8).reshape([episode_num])
    episode_final_observations = np.frombuffer(socket_recvall(socket, episode_num * observation_num * np.dtype(np.float32).itemsize), dtype=np.float32).reshape([episode_num, observation_num])
    observations = np.frombuffer(socket_recvall(socket, step_num * observation_num * np.dtype(np.float32).itemsize), dtype=np.float32).reshape([step_num, observation_num])
    actions = np.frombuffer(socket_recvall(socket, step_num * action_num * np.dtype(np.float32).itemsize), dtype=np.float32).reshape([step_num, action_num])
    rewards = np.frombuffer(socket_recvall(socket, step_num * np.dtype(np.float32).itemsize), dtype=np.float32).reshape([step_num])

    avg_reward = 0.0
    avg_returns = 0.0
    avg_episode_length = 0.0

    for ei in range(episode_num):

        ep_start = episode_starts[ei] + trim_episode_start
        ep_end = episode_starts[ei] + episode_lengths[ei] - trim_episode_end
        ep_len = episode_lengths[ei] - trim_episode_end - trim_episode_start
        
        if ep_len > 0:

            obs = observations[ep_start:ep_end]
            act = actions[ep_start:ep_end]
            rew = rewards[ep_start:ep_end]
            
            if UE_LEARNING_DEVELOPMENT:
                assert np.all(np.isfinite(obs))
                assert np.all(np.isfinite(act))
                assert np.all(np.isfinite(rew))
            
            avg_reward += rew.mean() / episode_num
            avg_returns += rew.sum() / episode_num
            avg_episode_length += float(ep_len) / episode_num
            
            obs_next = obs_next_buffer[:ep_len]
            obs_next[:-1] = obs[1:]
            obs_next[-1] = episode_final_observations[ei]

            terminated = terminated_buffer[:ep_len]
            terminated[:-1] = False
            terminated[-1] = (episode_completion_modes[ei] == UE_COMPLETION_TERMINATED)

            truncated = truncated_buffer[:ep_len]
            truncated[:-1] = False
            truncated[-1] = (episode_completion_modes[ei] == UE_COMPLETION_TRUNCATED)

            done = done_buffer[:ep_len]                
            done[:-1] = False
            done[-1] = True

            replay_buffer.add_batch(Batch(
                obs=obs,
                obs_next=obs_next,
                act=act,
                rew=rew,
                terminated=terminated,
                truncated=truncated,
                done=done))
    
    return UE_RESPONSE_SUCCESS, avg_reward, avg_returns, avg_episode_length


def socket_recv_experience_imitation(socket, observation_num, action_num):
    
    signal = ord(socket_recvall(socket, 1))
    
    if signal != UE_SOCKET_SIGNAL_SEND_EXPERIENCE:
        return UE_RESPONSE_UNEXPECTED, None, None

    step_num = int.from_bytes(socket_recvall(socket, 4), byteorder='little')
    assert step_num > 0

    observations = np.frombuffer(socket_recvall(socket, step_num * observation_num * np.dtype(np.float32).itemsize), dtype=np.float32).reshape([step_num, observation_num])
    actions = np.frombuffer(socket_recvall(socket, step_num * action_num * np.dtype(np.float32).itemsize), dtype=np.float32).reshape([step_num, action_num])

    if UE_LEARNING_DEVELOPMENT:
        assert np.all(np.isfinite(observations))
        assert np.all(np.isfinite(actions))

    return UE_RESPONSE_SUCCESS, observations, actions


def socket_recv_config(socket):

    signal = ord(socket_recvall(socket, 1))
    if signal != UE_SOCKET_SIGNAL_SEND_CONFIG:
        return UE_RESPONSE_UNEXPECTED, None

    config_length = int.from_bytes(socket_recvall(socket, 4), byteorder='little')
    
    config = socket_recvall(socket, config_length)

    return UE_RESPONSE_SUCCESS, config
    
    
def socket_has_stop(socket):
    r, _, _ = select.select([socket],[],[],0)
    return socket in r

def socket_recv_stop(socket):

    signal = ord(socket_recvall(socket, 1))
    if signal != UE_SOCKET_SIGNAL_SEND_STOP:
        return UE_RESPONSE_UNEXPECTED, None

    return UE_RESPONSE_SUCCESS
    
    

class NetworkPPOTrainer:

    def __init__(
        self,
        socket,
        observation_num,
        action_num,
        max_episode_num,
        max_step_num,
        max_policy_byte_num,
        max_critic_byte_num,
        requires_critic_buffer):
        
        self.socket = socket
        self.observation_num = observation_num
        self.action_num = action_num
        self.max_episode_num = max_episode_num
        self.max_step_num = max_step_num
        self.max_policy_byte_num = max_policy_byte_num
        self.max_critic_byte_num = max_critic_byte_num
        
        self.policy_buffer = np.empty([max_policy_byte_num], dtype=np.uint8)
        self.critic_buffer = None if requires_critic_buffer is False else np.empty([max_critic_byte_num], dtype=np.uint8)
        self.terminated_buffer = np.zeros([max_step_num], dtype=bool)
        self.truncated_buffer = np.zeros([max_step_num], dtype=bool)
        self.done_buffer = np.zeros([max_step_num], dtype=bool)
        self.obs_next_buffer = np.zeros([max_step_num, observation_num], dtype=np.float32)
        
    def send_policy(self, network):
        return socket_send_policy(self.socket, network, self.policy_buffer)
        
    def send_critic(self, network):
        return socket_send_critic(self.socket, network, self.critic_buffer)
        
    def recv_policy(self, network):
        return socket_recv_policy(self.socket, network, self.policy_buffer)
        
    def recv_critic(self, network):
        return socket_recv_critic(self.socket, network, self.critic_buffer)
        
    def recv_experience(self, replay_buffer, trim_episode_start, trim_episode_end):
        return socket_recv_experience(
            self.socket, 
            replay_buffer, 
            self.observation_num, 
            self.action_num, 
            self.obs_next_buffer,
            self.terminated_buffer,
            self.truncated_buffer,
            self.done_buffer, 
            trim_episode_start, 
            trim_episode_end)
        
    def send_complete(self):
        return socket_send_complete(self.socket)


class NetworkImitationTrainer:

    def __init__(
        self,
        socket,
        observation_num,
        action_num,
        max_policy_byte_num):
        
        self.socket = socket
        self.observation_num = observation_num
        self.action_num = action_num
        self.max_policy_byte_num = max_policy_byte_num
        
        self.policy_buffer = np.empty([max_policy_byte_num], dtype=np.uint8)
        
    def send_policy(self, network):
        return socket_send_policy(self.socket, network, self.policy_buffer)

    def recv_policy(self, network):
        return socket_recv_policy(self.socket, network, self.policy_buffer)

    def recv_experience(self):
        return socket_recv_experience_imitation(self.socket, self.observation_num, self.action_num)
        
    def has_stop(self):
        return socket_has_stop(self.socket)
        
    def recv_stop(self):
        return socket_recv_stop(self.socket)
        
    def send_complete(self):
        return socket_send_complete(self.socket)

    
# Serialization

def serialize_int32(offset, data, x):
    data[offset:offset+4] = np.frombuffer(struct.pack('i', x), np.uint8)
    return offset + 4

def serialize_array_float32(offset, data, x):
    offset = serialize_int32(offset, data, len(x.shape))
    for xs in x.shape: offset = serialize_int32(offset, data, xs)
    
    nbytes = np.prod(x.shape) * np.dtype(np.float32).itemsize
    data[offset:offset+nbytes] = np.frombuffer(x.astype(np.float32).tobytes(), np.uint8)
    return offset + nbytes

def deserialize_int32(offset, data):
    x = struct.unpack('i', data[offset:offset+4].tobytes())[0]
    return offset + 4, x

def deserialize_array_float32(offset, data):
    offset, rank = deserialize_int32(offset, data)
    shape = []
    for _ in range(rank):
        offset, xs = deserialize_int32(offset, data)
        shape.append(xs)
    nbytes = np.prod(shape) * np.dtype(np.float32).itemsize
    x = np.frombuffer(data[offset:offset+nbytes].tobytes(), dtype=np.float32).reshape(shape).copy()
    return offset + nbytes, x


# Neural Networks

UE_KINDA_SMALL_NUMBER = 1e-4

def invexpapprox(x):
    return 1.0 / (1.0 + 1.00746054 * x + 0.45053901 * x * x + 0.25724632 * x * x * x)

def elu_invapprox(x):
    return torch.where(x > 0.0, x, invexpapprox(-x) - 1.0)

str_to_activation = {
    'ReLU': nn.functional.relu,
    'ELU': nn.functional.elu,
    'TanH': torch.tanh,
}

activation_to_int32 = {
    nn.functional.relu: 0,
    nn.functional.elu: 1,
    torch.tanh: 2,
}

int32_to_activation = {
    0: nn.functional.relu,
    1: nn.functional.elu,
    2: torch.tanh,
}

class NeuralNetwork(nn.Module):

    def __init__(self, input_num, output_num, hidden_num, layer_num, activation, initial_action_scale=None):
        super(NeuralNetwork, self).__init__()

        assert layer_num >= 2

        self.layers = nn.ModuleList()

        self.layers.append(nn.Linear(input_num, hidden_num))
        for i in range(layer_num - 2):
            self.layers.append(nn.Linear(hidden_num, hidden_num))
        self.layers.append(nn.Linear(hidden_num, output_num))
        
        if initial_action_scale is not None:
            self.layers[-1].weight.data *= initial_action_scale
            self.layers[-1].bias.data *= initial_action_scale
        
        self.activation = str_to_activation[activation]
        
    def forward(self, x):

        for i in range(len(self.layers)):
            x = self.layers[i](x)
            if i != len(self.layers) - 1:
                x = self.activation(x)

        return x

    def serialize(self, offset, data):
        
        with torch.no_grad():
        
            offset = serialize_int32(offset, data, activation_to_int32[self.activation])
            offset = serialize_int32(offset, data, len(self.layers))
            
            for i in range(len(self.layers)):
                offset = serialize_array_float32(offset, data, self.layers[i].weight.T.cpu().detach().numpy())
                offset = serialize_array_float32(offset, data, self.layers[i].bias.cpu().detach().numpy())
            
            return offset
            
    def deserialize(self, offset, data):
        
        with torch.no_grad():
            
            offset, activation = deserialize_int32(offset, data)
            assert activation == activation_to_int32[self.activation]
            
            offset, layer_num = deserialize_int32(offset, data)
            assert layer_num == len(self.layers)
            
            for i in range(len(self.layers)):
                offset, weights = deserialize_array_float32(offset, data)
                offset, bias = deserialize_array_float32(offset, data)
                
                self.layers[i].weight.data[:] = torch.as_tensor(weights.T)
                self.layers[i].bias.data[:] = torch.as_tensor(bias)
                
            return offset
            

UE_LEARNING_NEURAL_NETWORK_MAGIC_NUMBER = 0x0cd353cf
UE_LEARNING_NEURAL_NETWORK_VERSION_NUMBER = 1

def serialize_snapshot(filename, network, network_byte_num):
    
    with open(filename, 'wb') as f:
    
        data = np.zeros([
            4 + # Magic Number 
            4 + # Version Number
            network_byte_num], dtype=np.uint8)
        
        offset = 0
        offset = serialize_int32(offset, data, UE_LEARNING_NEURAL_NETWORK_MAGIC_NUMBER)
        offset = serialize_int32(offset, data, UE_LEARNING_NEURAL_NETWORK_VERSION_NUMBER)
        offset = network.serialize(offset, data)
        assert offset == len(data)

        f.write(data.tobytes())
    

class Actor(nn.Module):

    def __init__(self, 
        network, 
        device, 
        action_noise_min, 
        action_noise_max):
        
        super(Actor, self).__init__()

        self.network = network
        self.device = device

        self.log_action_noise_min = torch.as_tensor(np.log(action_noise_min + UE_KINDA_SMALL_NUMBER))
        self.log_action_noise_max = torch.as_tensor(np.log(action_noise_max + UE_KINDA_SMALL_NUMBER))

    def forward(self, obs, state=None):
        obs = torch.as_tensor(
            obs,
            device=self.device,
            dtype=torch.float32)

        mu_sigma = self.network(obs)
        
        mu = mu_sigma[:,:mu_sigma.shape[1]//2]
        log_sigma = mu_sigma[:,mu_sigma.shape[1]//2:]
        
        sigma = torch.exp(torch.sigmoid(log_sigma) * 
            (self.log_action_noise_max - self.log_action_noise_min) + self.log_action_noise_min)
        
        return (mu, sigma), state


class Critic(nn.Module):

    def __init__(self, network, device):
        super(Critic, self).__init__()
        self.network = network
        self.device = device

    def forward(self, obs) -> torch.Tensor:
        obs = torch.as_tensor(
            obs,
            device=self.device,
            dtype=torch.float32)

        return self.network(obs)