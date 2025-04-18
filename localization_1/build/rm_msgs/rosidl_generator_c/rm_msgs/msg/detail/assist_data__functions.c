// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_msgs:msg/AssistData.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/assist_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rm_msgs__msg__AssistData__init(rm_msgs__msg__AssistData * msg)
{
  if (!msg) {
    return false;
  }
  // rel_x
  // rel_y
  // rel_z
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rm_msgs__msg__AssistData__fini(msg);
    return false;
  }
  return true;
}

void
rm_msgs__msg__AssistData__fini(rm_msgs__msg__AssistData * msg)
{
  if (!msg) {
    return;
  }
  // rel_x
  // rel_y
  // rel_z
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
rm_msgs__msg__AssistData__are_equal(const rm_msgs__msg__AssistData * lhs, const rm_msgs__msg__AssistData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rel_x
  if (lhs->rel_x != rhs->rel_x) {
    return false;
  }
  // rel_y
  if (lhs->rel_y != rhs->rel_y) {
    return false;
  }
  // rel_z
  if (lhs->rel_z != rhs->rel_z) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
rm_msgs__msg__AssistData__copy(
  const rm_msgs__msg__AssistData * input,
  rm_msgs__msg__AssistData * output)
{
  if (!input || !output) {
    return false;
  }
  // rel_x
  output->rel_x = input->rel_x;
  // rel_y
  output->rel_y = input->rel_y;
  // rel_z
  output->rel_z = input->rel_z;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

rm_msgs__msg__AssistData *
rm_msgs__msg__AssistData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__AssistData * msg = (rm_msgs__msg__AssistData *)allocator.allocate(sizeof(rm_msgs__msg__AssistData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_msgs__msg__AssistData));
  bool success = rm_msgs__msg__AssistData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_msgs__msg__AssistData__destroy(rm_msgs__msg__AssistData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_msgs__msg__AssistData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_msgs__msg__AssistData__Sequence__init(rm_msgs__msg__AssistData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__AssistData * data = NULL;

  if (size) {
    data = (rm_msgs__msg__AssistData *)allocator.zero_allocate(size, sizeof(rm_msgs__msg__AssistData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_msgs__msg__AssistData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_msgs__msg__AssistData__fini(&data[i - 1]);
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
rm_msgs__msg__AssistData__Sequence__fini(rm_msgs__msg__AssistData__Sequence * array)
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
      rm_msgs__msg__AssistData__fini(&array->data[i]);
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

rm_msgs__msg__AssistData__Sequence *
rm_msgs__msg__AssistData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__AssistData__Sequence * array = (rm_msgs__msg__AssistData__Sequence *)allocator.allocate(sizeof(rm_msgs__msg__AssistData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_msgs__msg__AssistData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_msgs__msg__AssistData__Sequence__destroy(rm_msgs__msg__AssistData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_msgs__msg__AssistData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_msgs__msg__AssistData__Sequence__are_equal(const rm_msgs__msg__AssistData__Sequence * lhs, const rm_msgs__msg__AssistData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_msgs__msg__AssistData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_msgs__msg__AssistData__Sequence__copy(
  const rm_msgs__msg__AssistData__Sequence * input,
  rm_msgs__msg__AssistData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_msgs__msg__AssistData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_msgs__msg__AssistData * data =
      (rm_msgs__msg__AssistData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_msgs__msg__AssistData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_msgs__msg__AssistData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_msgs__msg__AssistData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
