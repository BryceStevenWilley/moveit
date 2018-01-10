#include <moveit/collision_distance_field/collision_detector_distance_field_plugin_loader.h>
#include <pluginlib/class_list_macros.h>

namespace collision_detection
{
bool CollisionDetectorDistanceFieldPluginLoader::initialize(const planning_scene::PlanningScenePtr& scene,
                                                     bool exclusive) const
{
  scene->setActiveCollisionDetector(CollisionDetectorAllocatorDistanceField::create(), exclusive);
  return true;
}
}

PLUGINLIB_EXPORT_CLASS(collision_detection::CollisionDetectorDistanceFieldPluginLoader, collision_detection::CollisionPlugin)
