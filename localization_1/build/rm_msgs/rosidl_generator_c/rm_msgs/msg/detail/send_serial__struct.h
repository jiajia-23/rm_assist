// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/SendSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__SEND_SERIAL__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__SEND_SERIAL__STRUCT_H_

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

/// Struct defined in msg/SendSerial in the package rm_msgs.
typedef struct rm_msgs__msg__SendSerial
{
  std_msgs__msg__Header header;
  bool is_tracking;
  bool is_can_hit;
  double yaw;
  double pitch;
  double distance;
} rm_msgs__msg__SendSerial;

// Struct for a sequence of rm_msgs__msg__SendSerial.
typedef struct rm_msgs__msg__SendSerial__Sequence
{
  rm_msgs__msg__SendSerial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__SendSerial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__SEND_SERIAL__STRUCT_H_
