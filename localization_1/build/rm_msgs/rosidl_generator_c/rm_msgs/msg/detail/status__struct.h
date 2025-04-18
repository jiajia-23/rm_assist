// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define RM_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Status in the package rm_msgs.
typedef struct rm_msgs__msg__Status
{
  bool is_rune;
} rm_msgs__msg__Status;

// Struct for a sequence of rm_msgs__msg__Status.
typedef struct rm_msgs__msg__Status__Sequence
{
  rm_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
