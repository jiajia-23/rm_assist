// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_H_

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

/// Struct defined in msg/ReceiveSerial in the package rm_msgs.
typedef struct rm_msgs__msg__ReceiveSerial
{
  std_msgs__msg__Header header;
  double yaw;
  double pitch;
  double v0;
  double motor_speed;
  double serial_time;
  bool is_rune;
} rm_msgs__msg__ReceiveSerial;

// Struct for a sequence of rm_msgs__msg__ReceiveSerial.
typedef struct rm_msgs__msg__ReceiveSerial__Sequence
{
  rm_msgs__msg__ReceiveSerial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__ReceiveSerial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_H_
