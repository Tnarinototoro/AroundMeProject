# -*- coding: utf-8 -*-
'''
Copyright Epic Games, Inc. All Rights Reserved.
'''

# This includes a custom version of tianshou PPO with some small additions
# and changes such as clipping negative advantages 

from typing import Any, Dict, List, Optional, Type, Union

import numpy as np
import torch
from torch import nn

from tianshou.data import Batch, ReplayBuffer, to_torch_as
from tianshou.policy import A2CPolicy
from tianshou.utils.net.common import ActorCritic

from train_common import UE_LEARNING_DEVELOPMENT, UE_LEARNING_PROFILE, Profile

UE_LEARNING_PPO_PROFILE = UE_LEARNING_PROFILE
# UE_LEARNING_PPO_PROFILE = False

def print_array_details(name, arr):
    print(
        name,
        arr.min(), 
        arr.max(), 
        arr.mean(), 
        arr.std(), 
        np.any(~np.isfinite(arr)),
        np.any(np.isinf(arr)),
        np.any(np.isposinf(arr)),
        np.any(np.isneginf(arr)),
        np.any(np.isnan(arr)),
        arr)

def check_actor_input_output(check_name, actor_input, actor_output):
    
    if not UE_LEARNING_DEVELOPMENT: return
    
    with torch.no_grad():
    
        output_mu = actor_output[0].detach().cpu().numpy()
        output_sigma = actor_output[1].detach().cpu().numpy()
        
        if np.any(~np.isfinite(actor_input)):
            print_array_details(check_name+'_input', actor_input)

        if np.any(~np.isfinite(output_mu)):
            print_array_details(check_name+'_output_mu', output_mu)
            
        if np.any(~np.isfinite(output_sigma)):
            print_array_details(check_name+'_output_sigma', output_sigma)

def check_array(check_name, arr):
    
    if not UE_LEARNING_DEVELOPMENT: return
    
    with torch.no_grad():
        arr_numpy = arr.detach().cpu().numpy()

        if np.any(~np.isfinite(arr_numpy)):
            print_array_details(check_name, arr_numpy)

        
def check_network(check_name, network):
    
    if not UE_LEARNING_DEVELOPMENT: return
    
    with torch.no_grad():
        for name, param in network.named_parameters():
            param_numpy = param.detach().cpu().numpy()
            if np.any(~np.isfinite(param_numpy)):
                print_array_details(check_name + '_' + name, param_numpy)

def check_network_gradients(check_name, network):
    
    if not UE_LEARNING_DEVELOPMENT: return
    
    with torch.no_grad():
        for name, param in network.named_parameters():
            param_grad_numpy = param.grad.detach().cpu().numpy()
            if np.any(~np.isfinite(param_grad_numpy)):
                print_array_details(check_name + '_' + name + '_grad', param_grad_numpy)

def check_scalar(check_name, value):
    
    if not UE_LEARNING_DEVELOPMENT: return
    
    with torch.no_grad():
        value_item = value.item()
        if not np.isfinite(value_item):
            print(check_name, value_item)
    

class CustomPPOPolicy(A2CPolicy):
    r"""Implementation of Proximal Policy Optimization. arXiv:1707.06347.
    :param torch.nn.Module actor: the actor network following the rules in
        :class:`~tianshou.policy.BasePolicy`. (s -> logits)
    :param torch.nn.Module critic: the critic network. (s -> V(s))
    :param torch.optim.Optimizer optim: the optimizer for actor and critic network.
    :param dist_fn: distribution class for computing the action.
    :type dist_fn: Type[torch.distributions.Distribution]
    :param float discount_factor: in [0, 1]. Default to 0.99.
    :param float eps_clip: :math:`\epsilon` in :math:`L_{CLIP}` in the original
        paper. Default to 0.2.
    :param float dual_clip: a parameter c mentioned in arXiv:1912.09729 Equ. 5,
        where c > 1 is a constant indicating the lower bound.
        Default to 5.0 (set None if you do not want to use it).
    :param bool value_clip: a parameter mentioned in arXiv:1811.02553v3 Sec. 4.1.
        Default to True.
    :param bool advantage_normalization: whether to do per mini-batch advantage
        normalization. Default to True.
    :param bool recompute_advantage: whether to recompute advantage every update
        repeat according to https://arxiv.org/pdf/2006.05990.pdf Sec. 3.5.
        Default to False.
    :param float vf_coef: weight for value loss. Default to 0.5.
    :param float ent_coef: weight for entropy loss. Default to 0.01.
    :param float reg_coef: weight for action regularization loss. Default to 0.01.
    :param bool l1_norm_vf: use the l1 norm for the loss of the value function
    :param float max_grad_norm: clipping gradients in back propagation. Default to
        None.
    :param float gae_lambda: in [0, 1], param for Generalized Advantage Estimation.
        Default to 0.95.
    :param bool reward_normalization: normalize estimated values to have std close
        to 1, also normalize the advantage to Normal(0, 1). Default to False.
    :param int max_batchsize: the maximum size of the batch when computing GAE,
        depends on the size of available memory and the memory cost of the model;
        should be as large as possible within the memory constraint. Default to 256.
    :param bool action_scaling: whether to map actions from range [-1, 1] to range
        [action_spaces.low, action_spaces.high]. Default to True.
    :param str action_bound_method: method to bound action to range [-1, 1], can be
        either "clip" (for simply clipping the action), "tanh" (for applying tanh
        squashing) for now, or empty string for no bounding. Default to "clip".
    :param Optional[gym.Space] action_space: env's action space, mandatory if you want
        to use option "action_scaling" or "action_bound_method". Default to None.
    :param lr_scheduler: a learning rate scheduler that adjusts the learning rate in
        optimizer in each policy.update(). Default to None (no lr_scheduler).
    :param bool deterministic_eval: whether to use deterministic action instead of
        stochastic action sampled by the policy. Default to False.
    .. seealso::
        Please refer to :class:`~tianshou.policy.BasePolicy` for more detailed
        explanation.
    """

    def __init__(
        self,
        actor: torch.nn.Module,
        critic: torch.nn.Module,
        optim_actor: torch.optim.Optimizer,
        optim_critic: torch.optim.Optimizer,
        dist_fn: Type[torch.distributions.Distribution],
        eps_clip: float = 0.2,
        dual_clip: Optional[float] = None,
        value_clip: bool = False,
        advantage_normalization: bool = True,
        recompute_advantage: bool = False,
        clip_advantage: bool = False,
        reg_coef: float = 0.01,
        l1_norm_vf: bool = True,
        ratio_clip: float = 10.0,
        **kwargs: Any,
    ) -> None:

        super().__init__(actor, critic, None, dist_fn, **kwargs)
        
        self.optim_actor = optim_actor
        self.optim_critic = optim_critic
        
        self._eps_clip = eps_clip

        assert dual_clip is None or dual_clip > 1.0, \
            "Dual-clip PPO parameter should greater than 1.0."

        self._dual_clip = dual_clip
        self._value_clip = value_clip

        if not self._rew_norm:
            assert not self._value_clip, \
                "value clip is available only when `reward_normalization` is True"

        self._norm_adv = advantage_normalization
        self._recompute_adv = recompute_advantage
        self._clip_adv = clip_advantage
        self._actor_critic: ActorCritic
        self._weight_reg = reg_coef
        self._l1_norm_vf = l1_norm_vf
        self._ratio_clip = ratio_clip

    def process_fn(
        self, batch: Batch, buffer: ReplayBuffer, indices: np.ndarray
    ) -> Batch:
        
        with Profile('PPO compute returns', UE_LEARNING_PPO_PROFILE):
        
            if self._recompute_adv:
                # buffer input `buffer` and `indices` to be used in `learn()`.
                self._buffer, self._indices = buffer, indices

            batch = self._compute_returns(batch, buffer, indices)
            batch.act = to_torch_as(batch.act, batch.v_s)

        with Profile('PPO old log prob', UE_LEARNING_PPO_PROFILE):

            old_log_prob = []
            with torch.no_grad():
                for minibatch in batch.split(self._batch, shuffle=False, merge_last=True):
                    old_log_prob.append(self(minibatch).dist.log_prob(minibatch.act))
            batch.logp_old = torch.cat(old_log_prob, dim=0)

            return batch

    def forward(
        self,
        batch: Batch,
        state: Optional[Union[dict, Batch, np.ndarray]] = None,
        **kwargs: Any,
    ) -> Batch:
        
        logits, hidden = self.actor(batch.obs, state=state)
        check_actor_input_output('inference', batch.obs, logits)
        check_network('inference', self.actor)
        
        dist = self.dist_fn(*logits)

        if self._deterministic_eval and not self.training:
            act = logits[0]
        else:
            act = dist.sample()

        return Batch(logits=logits, act=act, state=hidden, dist=dist)

    def learn(
        self,
        batch: Batch,
        batch_size: int) -> Dict[str, List[float]]:

        (action_avg_mean_mag, 
         action_avg_std_mag, 
         grads_actor, 
         grads_critic,
         max_weight_actor,
         max_weight_critic,
         avg_value,
         actor_losses, 
         critic_losses, 
         clip_losses, 
         ent_losses, 
         reg_losses) = [], [], [], [], [], [], [], [], [], [], [], []

        if self._recompute_adv:
            batch = self._compute_returns(batch, self._buffer, self._indices)
        
        with Profile('PPO learn', UE_LEARNING_PPO_PROFILE):
        
            for minibatch in batch.split(batch_size, merge_last=True):
            
                evaluation = self(minibatch)
            
                if self._norm_adv:
                    minibatch.adv = minibatch.adv / (minibatch.adv.std() + 1e-4)  # per-batch norm

                if self._clip_adv:
                    minibatch.adv = torch.relu(minibatch.adv)

                ratio = (
                    evaluation.dist.log_prob(minibatch.act) - 
                    minibatch.logp_old).clamp(-self._ratio_clip, self._ratio_clip).exp().float()
                    
                ratio = ratio.reshape(ratio.size(0), -1).transpose(0, 1)

                surr1 = ratio * minibatch.adv
                surr2 = ratio.clamp(1.0 - self._eps_clip, 1.0 + self._eps_clip) * minibatch.adv

                check_array('ratio', ratio)
                check_array('surr1', surr1)
                check_array('surr2', surr2)

                if self._dual_clip:
                    clip1 = torch.min(surr1, surr2)
                    clip2 = torch.max(clip1, self._dual_clip * minibatch.adv)
                    loss_clip = -torch.where(minibatch.adv < 0, clip2, clip1).mean()
                else:
                    loss_clip = -torch.min(surr1, surr2).mean()

                check_scalar('loss_clip', loss_clip)
            
                # calculate loss for critic
                value = self.critic(minibatch.obs).flatten()
                if self._value_clip:
                    v_clip = minibatch.v_s + (value - minibatch.v_s).clamp(-self._eps_clip, self._eps_clip)

                    if self._l1_norm_vf:
                        vf1 = abs(minibatch.returns - value)
                        vf2 = abs(minibatch.returns - v_clip)
                    else:
                        vf1 = (minibatch.returns - value).pow(2)
                        vf2 = (minibatch.returns - v_clip).pow(2)

                    vf_loss = self._weight_vf * torch.max(vf1, vf2).mean()
                else:
                    if self._l1_norm_vf:
                        vf_loss = self._weight_vf * abs(minibatch.returns - value).mean()
                    else:
                        vf_loss = self._weight_vf * (minibatch.returns - value).pow(2).mean()

                batch_value = minibatch.returns.mean()

                # Calculate Regularization and Entropy losses

                loss_ent = self._weight_ent * evaluation.dist.entropy().mean()
                loss_reg = self._weight_reg * abs(evaluation.logits[0]).mean()
                
                check_scalar('loss_reg', loss_reg)
                check_scalar('loss_ent', loss_ent)

                # Update Actor
                
                loss_actor = loss_clip + loss_reg - loss_ent
                
                check_scalar('loss_actor', loss_actor)
                check_network('actor_pre', self.actor)
            
                self.optim_actor.zero_grad()
                loss_actor.backward()
            
                check_network_gradients('actor_grad', self.actor)
                if self._grad_norm:
                    nn.utils.clip_grad_norm_(self.actor.parameters(), max_norm=self._grad_norm)
                    
                self.optim_actor.step()
            
                check_network('actor_post', self.actor)

                # Update Critic
                
                loss_critic = vf_loss
                
                check_scalar('loss_critic', loss_critic)
                check_network('critic_pre', self.critic)
            
                self.optim_critic.zero_grad()
                loss_critic.backward()
                
                check_network_gradients('critic_grad', self.critic)
                if self._grad_norm:
                    nn.utils.clip_grad_norm_(self.critic.parameters(), max_norm=self._grad_norm)
                    
                self.optim_critic.step()
                
                check_network('critic_post', self.critic)

                # Compute other stats

                with torch.no_grad():
                    avg_mean_mag = torch.mean(abs(evaluation.logits[0]))
                    avg_std_mag = torch.mean(abs(evaluation.logits[1]))

                    total_grad_norm_actor = torch.norm(
                        torch.stack([torch.norm(p.grad) for p in self.actor.parameters()]))
                        
                    total_grad_norm_critic = torch.norm(
                        torch.stack([torch.norm(p.grad) for p in self.critic.parameters()]))
                    
                # Append losses and other stats
                action_avg_mean_mag.append(avg_mean_mag.item())
                action_avg_std_mag.append(avg_std_mag.item())
                grads_actor.append(total_grad_norm_actor.item())
                grads_critic.append(total_grad_norm_critic.item())
                avg_value.append(batch_value.item())
                actor_losses.append(loss_actor.item())
                critic_losses.append(loss_critic.item())
                clip_losses.append(loss_clip.item())
                ent_losses.append(loss_ent.item())
                reg_losses.append(loss_reg.item())

        return {
            "action/avg_mean_mag": action_avg_mean_mag,
            "action/avg_std_mag": action_avg_std_mag,
            "grads/actor": grads_actor,
            "grads/critic": grads_critic,
            "experience/value": avg_value,
            "loss/actor": actor_losses,
            "loss/critic": critic_losses,
            "loss/clip": clip_losses,
            "loss/ent": ent_losses,
            "loss/reg": reg_losses,
        }
