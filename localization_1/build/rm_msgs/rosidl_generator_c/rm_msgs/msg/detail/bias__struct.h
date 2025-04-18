// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/Bias.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__BIAS__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__BIAS__STRUCT_H_

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

/// Struct defined in msg/Bias in the package rm_msgs.
typedef struct rm_msgs__msg__Bias
{
  std_msgs__msg__Header header;
  double need_t;
  double fly_t;
  double serial_bias_time;
  double latency_bias_time;
  double motor_bias_time;
} rm_msgs__msg__Bias;

// Struct for a sequence of rm_msgs__msg__Bias.
typedef struct rm_msgs__msg__Bias__Sequence
{
  rm_msgs__msg__Bias * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__Bias__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__BIAS__STRUCT_H_
