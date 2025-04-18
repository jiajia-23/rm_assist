// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_msgs:msg/Target.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `armor_position`
// Member `car_position`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `armor_velocity`
// Member `car_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
rm_msgs__msg__Target__init(rm_msgs__msg__Target * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_msgs__msg__Target__fini(msg);
    return false;
  }
  // tracking
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    rm_msgs__msg__Target__fini(msg);
    return false;
  }
  // armor_num
  // armor_position
  if (!geometry_msgs__msg__Pose__init(&msg->armor_position)) {
    rm_msgs__msg__Target__fini(msg);
    return false;
  }
  // car_position
  if (!geometry_msgs__msg__Pose__init(&msg->car_position)) {
    rm_msgs__msg__Target__fini(msg);
    return false;
  }
  // armor_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->armor_velocity)) {
    rm_msgs__msg__Target__fini(msg);
    return false;
  }
  // car_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->car_velocity)) {
    rm_msgs__msg__Target__fini(msg);
    return false;
  }
  // yaw
  // v_yaw
  // radius_1
  // radius_2
  // dz
  // c_to_a_pitch
  // is_repeat
  return true;
}

void
rm_msgs__msg__Target__fini(rm_msgs__msg__Target * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracking
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // armor_num
  // armor_position
  geometry_msgs__msg__Pose__fini(&msg->armor_position);
  // car_position
  geometry_msgs__msg__Pose__fini(&msg->car_position);
  // armor_velocity
  geometry_msgs__msg__Vector3__fini(&msg->armor_velocity);
  // car_velocity
  geometry_msgs__msg__Vector3__fini(&msg->car_velocity);
  // yaw
  // v_yaw
  // radius_1
  // radius_2
  // dz
  // c_to_a_pitch
  // is_repeat
}

bool
rm_msgs__msg__Target__are_equal(const rm_msgs__msg__Target * lhs, const rm_msgs__msg__Target * rhs)
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
  // tracking
  if (lhs->tracking != rhs->tracking) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // armor_num
  if (lhs->armor_num != rhs->armor_num) {
    return false;
  }
  // armor_position
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->armor_position), &(rhs->armor_position)))
  {
    return false;
  }
  // car_position
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->car_position), &(rhs->car_position)))
  {
    return false;
  }
  // armor_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->armor_velocity), &(rhs->armor_velocity)))
  {
    return false;
  }
  // car_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->car_velocity), &(rhs->car_velocity)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // v_yaw
  if (lhs->v_yaw != rhs->v_yaw) {
    return false;
  }
  // radius_1
  if (lhs->radius_1 != rhs->radius_1) {
    return false;
  }
  // radius_2
  if (lhs->radius_2 != rhs->radius_2) {
    return false;
  }
  // dz
  if (lhs->dz != rhs->dz) {
    return false;
  }
  // c_to_a_pitch
  if (lhs->c_to_a_pitch != rhs->c_to_a_pitch) {
    return false;
  }
  // is_repeat
  if (lhs->is_repeat != rhs->is_repeat) {
    return false;
  }
  return true;
}

bool
rm_msgs__msg__Target__copy(
  const rm_msgs__msg__Target * input,
  rm_msgs__msg__Target * output)
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
  // tracking
  output->tracking = input->tracking;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // armor_num
  output->armor_num = input->armor_num;
  // armor_position
  if (!geometry_msgs__msg__Pose__copy(
      &(input->armor_position), &(output->armor_position)))
  {
    return false;
  }
  // car_position
  if (!geometry_msgs__msg__Pose__copy(
      &(input->car_position), &(output->car_position)))
  {
    return false;
  }
  // armor_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->armor_velocity), &(output->armor_velocity)))
  {
    return false;
  }
  // car_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->car_velocity), &(output->car_velocity)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // v_yaw
  output->v_yaw = input->v_yaw;
  // radius_1
  output->radius_1 = input->radius_1;
  // radius_2
  output->radius_2 = input->radius_2;
  // dz
  output->dz = input->dz;
  // c_to_a_pitch
  output->c_to_a_pitch = input->c_to_a_pitch;
  // is_repeat
  output->is_repeat = input->is_repeat;
  return true;
}

rm_msgs__msg__Target *
rm_msgs__msg__Target__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__Target * msg = (rm_msgs__msg__Target *)allocator.allocate(sizeof(rm_msgs__msg__Target), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_msgs__msg__Target));
  bool success = rm_msgs__msg__Target__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_msgs__msg__Target__destroy(rm_msgs__msg__Target * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_msgs__msg__Target__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_msgs__msg__Target__Sequence__init(rm_msgs__msg__Target__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__Target * data = NULL;

  if (size) {
    data = (rm_msgs__msg__Target *)allocator.zero_allocate(size, sizeof(rm_msgs__msg__Target), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_msgs__msg__Target__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_msgs__msg__Target__fini(&data[i - 1]);
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
rm_msgs__msg__Target__Sequence__fini(rm_msgs__msg__Target__Sequence * array)
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
      rm_msgs__msg__Target__fini(&array->data[i]);
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

rm_msgs__msg__Target__Sequence *
rm_msgs__msg__Target__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__Target__Sequence * array = (rm_msgs__msg__Target__Sequence *)allocator.allocate(sizeof(rm_msgs__msg__Target__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_msgs__msg__Target__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_msgs__msg__Target__Sequence__destroy(rm_msgs__msg__Target__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_msgs__msg__Target__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_msgs__msg__Target__Sequence__are_equal(const rm_msgs__msg__Target__Sequence * lhs, const rm_msgs__msg__Target__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_msgs__msg__Target__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_msgs__msg__Target__Sequence__copy(
  const rm_msgs__msg__Target__Sequence * input,
  rm_msgs__msg__Target__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_msgs__msg__Target);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_msgs__msg__Target * data =
      (rm_msgs__msg__Target *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_msgs__msg__Target__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_msgs__msg__Target__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_msgs__msg__Target__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
