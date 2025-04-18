// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/AssistData.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__ASSIST_DATA__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__ASSIST_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/AssistData in the package rm_msgs.
/**
  * 前哨站相对于机器人的位置 (单位：米)
 */
typedef struct rm_msgs__msg__AssistData
{
  double rel_x;
  double rel_y;
  double rel_z;
  ///  前哨站相对于机器人的欧拉角 (单位：弧度)
  /// float64 roll
  /// float64 pitch
  /// float64 yaw
  ///  可选：时间戳
  builtin_interfaces__msg__Time stamp;
} rm_msgs__msg__AssistData;

// Struct for a sequence of rm_msgs__msg__AssistData.
typedef struct rm_msgs__msg__AssistData__Sequence
{
  rm_msgs__msg__AssistData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__AssistData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__ASSIST_DATA__STRUCT_H_
