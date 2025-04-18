// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rm_msgs:msg/Bias.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rm_msgs/msg/detail/bias__rosidl_typesupport_introspection_c.h"
#include "rm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rm_msgs/msg/detail/bias__functions.h"
#include "rm_msgs/msg/detail/bias__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rm_msgs__msg__Bias__init(message_memory);
}

void rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_fini_function(void * message_memory)
{
  rm_msgs__msg__Bias__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_msgs__msg__Bias, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "need_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_msgs__msg__Bias, need_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fly_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_msgs__msg__Bias, fly_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_bias_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_msgs__msg__Bias, serial_bias_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latency_bias_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_msgs__msg__Bias, latency_bias_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_bias_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_msgs__msg__Bias, motor_bias_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_message_members = {
  "rm_msgs__msg",  // message namespace
  "Bias",  // message name
  6,  // number of fields
  sizeof(rm_msgs__msg__Bias),
  rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_message_member_array,  // message members
  rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_init_function,  // function to initialize message memory (memory has to be allocated)
  rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_message_type_support_handle = {
  0,
  &rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_msgs, msg, Bias)() {
  rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_message_type_support_handle.typesupport_identifier) {
    rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rm_msgs__msg__Bias__rosidl_typesupport_introspection_c__Bias_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
