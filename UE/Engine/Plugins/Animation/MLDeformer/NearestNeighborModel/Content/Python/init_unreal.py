# -*- coding: utf-8 -*-
"""
NearestNeighborTrainingModel class.

Copyright Epic Games, Inc. All Rights Reserved.
"""

from importlib import reload
import unreal

@unreal.uclass()
class NearestNeighborPythonTrainingModel(unreal.NearestNeighborTrainingModel):
    def import_module(self):
        import nearestneighbormodel
        reload(nearestneighbormodel)
        return nearestneighbormodel

    @unreal.ufunction(override=True)
    def train(self):
        nearestneighbormodel = self.import_module()
        return nearestneighbormodel.run(self)

    @unreal.ufunction(override=True)
    def update_nearest_neighbor_data(self):
        nearestneighbormodel = self.import_module()
        return nearestneighbormodel.update_nearest_neighbor_data(self)

    @unreal.ufunction(override=True)
    def kmeans_cluster_poses(self, part_id):
        nearestneighbormodel = self.import_module()
        return nearestneighbormodel.kmeans_cluster_poses(self, part_id)

@unreal.uclass()
class NearestNeighborPythonOptimizedNetworkLoader(unreal.NearestNeighborOptimizedNetworkLoader):
    def import_module(self):
        try:
            import serialization_helpers
            reload(serialization_helpers)
            return serialization_helpers
        except ImportError as e:
            return None

    @unreal.ufunction(override=True)
    def load_optimized_network(self, onnx_path):
        serialization_helpers = self.import_module()
        if serialization_helpers is not None:
            return serialization_helpers.load_optimized_network(self, onnx_path)
        else:
            return False