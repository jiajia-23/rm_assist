// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_msgs:msg/Bias.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/bias__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_msgs__msg__Bias__init(rm_msgs__msg__Bias * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_msgs__msg__Bias__fini(msg);
    return false;
  }
  // need_t
  // fly_t
  // serial_bias_time
  // latency_bias_time
  // motor_bias_time
  return true;
}

void
rm_msgs__msg__Bias__fini(rm_msgs__msg__Bias * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // need_t
  // fly_t
  // serial_bias_time
  // latency_bias_time
  // motor_bias_time
}

bool
rm_msgs__msg__Bias__are_equal(const rm_msgs__msg__Bias * lhs, const rm_msgs__msg__Bias * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // need_t
  if (lhs->need_t != rhs->need_t) {
    return false;
  }
  // fly_t
  if (lhs->fly_t != rhs->fly_t) {
    return false;
  }
  // serial_bias_time
  if (lhs->serial_bias_time != rhs->serial_bias_time) {
    return false;
  }
  // latency_bias_time
  if (lhs->latency_bias_time != rhs->latency_bias_time) {
    return false;
  }
  // motor_bias_time
  if (lhs->motor_bias_time != rhs->motor_bias_time) {
    return false;
  }
  return true;
}

bool
rm_msgs__msg__Bias__copy(
  const rm_msgs__msg__Bias * input,
  rm_msgs__msg__Bias * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // need_t
  output->need_t = input->need_t;
  // fly_t
  output->fly_t = input->fly_t;
  // serial_bias_time
  output->serial_bias_time = input->serial_bias_time;
  // latency_bias_time
  output->latency_bias_time = input->latency_bias_time;
  // motor_bias_time
  output->motor_bias_time = input->motor_bias_time;
  return true;
}

rm_msgs__msg__Bias *
rm_msgs__msg__Bias__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__Bias * msg = (rm_msgs__msg__Bias *)allocator.allocate(sizeof(rm_msgs__msg__Bias), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_msgs__msg__Bias));
  bool success = rm_msgs__msg__Bias__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_msgs__msg__Bias__destroy(rm_msgs__msg__Bias * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_msgs__msg__Bias__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_msgs__msg__Bias__Sequence__init(rm_msgs__msg__Bias__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__Bias * data = NULL;

  if (size) {
    data = (rm_msgs__msg__Bias *)allocator.zero_allocate(size, sizeof(rm_msgs__msg__Bias), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_msgs__msg__Bias__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_msgs__msg__Bias__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_msgs__msg__Bias__Sequence__fini(rm_msgs__msg__Bias__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_msgs__msg__Bias__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_msgs__msg__Bias__Sequence *
rm_msgs__msg__Bias__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__Bias__Sequence * array = (rm_msgs__msg__Bias__Sequence *)allocator.allocate(sizeof(rm_msgs__msg__Bias__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_msgs__msg__Bias__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_msgs__msg__Bias__Sequence__destroy(rm_msgs__msg__Bias__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_msgs__msg__Bias__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_msgs__msg__Bias__Sequence__are_equal(const rm_msgs__msg__Bias__Sequence * lhs, const rm_msgs__msg__Bias__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_msgs__msg__Bias__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_msgs__msg__Bias__Sequence__copy(
  const rm_msgs__msg__Bias__Sequence * input,
  rm_msgs__msg__Bias__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_msgs__msg__Bias);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_msgs__msg__Bias * data =
      (rm_msgs__msg__Bias *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_msgs__msg__Bias__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_msgs__msg__Bias__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_msgs__msg__Bias__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
