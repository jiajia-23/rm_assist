// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__TARGET__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'armor_position'
// Member 'car_position'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'armor_velocity'
// Member 'car_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Target in the package rm_msgs.
typedef struct rm_msgs__msg__Target
{
  std_msgs__msg__Header header;
  bool tracking;
  rosidl_runtime_c__String id;
  int32_t armor_num;
  geometry_msgs__msg__Pose armor_position;
  geometry_msgs__msg__Pose car_position;
  geometry_msgs__msg__Vector3 armor_velocity;
  geometry_msgs__msg__Vector3 car_velocity;
  double yaw;
  double v_yaw;
  double radius_1;
  double radius_2;
  double dz;
  double c_to_a_pitch;
  bool is_repeat;
} rm_msgs__msg__Target;

// Struct for a sequence of rm_msgs__msg__Target.
typedef struct rm_msgs__msg__Target__Sequence
{
  rm_msgs__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__TARGET__STRUCT_H_
