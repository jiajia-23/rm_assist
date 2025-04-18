// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/Armor.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__ARMOR__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__ARMOR__STRUCT_H_

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
// Member 'name'
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Armor in the package rm_msgs.
typedef struct rm_msgs__msg__Armor
{
  std_msgs__msg__Header header;
  int8_t id;
  int8_t color;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String type;
  float distance_to_image_center;
  double c_to_a_pitch;
  geometry_msgs__msg__Pose pose;
  bool is_repeat;
} rm_msgs__msg__Armor;

// Struct for a sequence of rm_msgs__msg__Armor.
typedef struct rm_msgs__msg__Armor__Sequence
{
  rm_msgs__msg__Armor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__Armor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__ARMOR__STRUCT_H_
