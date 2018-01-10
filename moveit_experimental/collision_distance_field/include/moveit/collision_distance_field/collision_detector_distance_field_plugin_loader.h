/*
 * collision_detector_distance_field_plugin_loader.h
 */

#ifndef MOVEIT_COLLISION_DISTANCE_FIELD_COLLISION_DETECTOR_DISTANCE_FIELD_PLUGIN_LOADER_H_
#define MOVEIT_COLLISION_DISTANCE_FIELD_COLLISION_DETECTOR_DISTANCE_FIELD_PLUGIN_LOADER_H_

#include <moveit/collision_detection/collision_plugin.h>
#include <moveit/collision_distance_field/collision_detector_allocator_distance_field.h>

namespace collision_detection
{
class CollisionDetectorDistanceFieldPluginLoader : public CollisionPlugin
{
public:
  virtual bool initialize(const planning_scene::PlanningScenePtr& scene, bool exclusive) const;
};
}
#endif  // MOVEIT_COLLISION_DISTANCE_FIELD_COLLISION_DETECTOR_DISTANCE_FIELD_PLUGIN_LOADER_H_