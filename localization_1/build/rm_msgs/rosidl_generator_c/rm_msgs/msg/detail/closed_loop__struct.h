// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/ClosedLoop.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__CLOSED_LOOP__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__CLOSED_LOOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image_header'
// Member 'shoot_header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'now_pose'
// Member 'pred_pose'
// Member 'now_armor_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ClosedLoop in the package rm_msgs.
typedef struct rm_msgs__msg__ClosedLoop
{
  std_msgs__msg__Header image_header;
  std_msgs__msg__Header shoot_header;
  rosidl_runtime_c__String id;
  int8_t armor_num;
  double r;
  double another_r;
  double dz;
  double yaw;
  double c_to_a_pitch;
  geometry_msgs__msg__Pose now_pose;
  geometry_msgs__msg__Pose pred_pose;
  geometry_msgs__msg__Pose now_armor_pose;
  double v0;
  double theta;
  double fly_t;
} rm_msgs__msg__ClosedLoop;

// Struct for a sequence of rm_msgs__msg__ClosedLoop.
typedef struct rm_msgs__msg__ClosedLoop__Sequence
{
  rm_msgs__msg__ClosedLoop * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__ClosedLoop__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__CLOSED_LOOP__STRUCT_H_
