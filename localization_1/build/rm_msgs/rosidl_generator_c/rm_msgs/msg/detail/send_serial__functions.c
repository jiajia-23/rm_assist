// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_msgs:msg/SendSerial.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/send_serial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_msgs__msg__SendSerial__init(rm_msgs__msg__SendSerial * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_msgs__msg__SendSerial__fini(msg);
    return false;
  }
  // is_tracking
  // is_can_hit
  // yaw
  // pitch
  // distance
  return true;
}

void
rm_msgs__msg__SendSerial__fini(rm_msgs__msg__SendSerial * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_tracking
  // is_can_hit
  // yaw
  // pitch
  // distance
}

bool
rm_msgs__msg__SendSerial__are_equal(const rm_msgs__msg__SendSerial * lhs, const rm_msgs__msg__SendSerial * rhs)
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
  // is_tracking
  if (lhs->is_tracking != rhs->is_tracking) {
    return false;
  }
  // is_can_hit
  if (lhs->is_can_hit != rhs->is_can_hit) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
rm_msgs__msg__SendSerial__copy(
  const rm_msgs__msg__SendSerial * input,
  rm_msgs__msg__SendSerial * output)
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
  // is_tracking
  output->is_tracking = input->is_tracking;
  // is_can_hit
  output->is_can_hit = input->is_can_hit;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // distance
  output->distance = input->distance;
  return true;
}

rm_msgs__msg__SendSerial *
rm_msgs__msg__SendSerial__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__SendSerial * msg = (rm_msgs__msg__SendSerial *)allocator.allocate(sizeof(rm_msgs__msg__SendSerial), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_msgs__msg__SendSerial));
  bool success = rm_msgs__msg__SendSerial__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_msgs__msg__SendSerial__destroy(rm_msgs__msg__SendSerial * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_msgs__msg__SendSerial__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_msgs__msg__SendSerial__Sequence__init(rm_msgs__msg__SendSerial__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__SendSerial * data = NULL;

  if (size) {
    data = (rm_msgs__msg__SendSerial *)allocator.zero_allocate(size, sizeof(rm_msgs__msg__SendSerial), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_msgs__msg__SendSerial__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_msgs__msg__SendSerial__fini(&data[i - 1]);
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
rm_msgs__msg__SendSerial__Sequence__fini(rm_msgs__msg__SendSerial__Sequence * array)
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
      rm_msgs__msg__SendSerial__fini(&array->data[i]);
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

rm_msgs__msg__SendSerial__Sequence *
rm_msgs__msg__SendSerial__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__SendSerial__Sequence * array = (rm_msgs__msg__SendSerial__Sequence *)allocator.allocate(sizeof(rm_msgs__msg__SendSerial__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_msgs__msg__SendSerial__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_msgs__msg__SendSerial__Sequence__destroy(rm_msgs__msg__SendSerial__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_msgs__msg__SendSerial__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_msgs__msg__SendSerial__Sequence__are_equal(const rm_msgs__msg__SendSerial__Sequence * lhs, const rm_msgs__msg__SendSerial__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_msgs__msg__SendSerial__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_msgs__msg__SendSerial__Sequence__copy(
  const rm_msgs__msg__SendSerial__Sequence * input,
  rm_msgs__msg__SendSerial__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_msgs__msg__SendSerial);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_msgs__msg__SendSerial * data =
      (rm_msgs__msg__SendSerial *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_msgs__msg__SendSerial__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_msgs__msg__SendSerial__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_msgs__msg__SendSerial__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
