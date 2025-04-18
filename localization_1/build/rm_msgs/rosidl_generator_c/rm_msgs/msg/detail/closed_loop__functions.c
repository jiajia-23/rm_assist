// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_msgs:msg/ClosedLoop.idl
// generated code does not contain a copyright notice
#include "rm_msgs/msg/detail/closed_loop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image_header`
// Member `shoot_header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `now_pose`
// Member `pred_pose`
// Member `now_armor_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
rm_msgs__msg__ClosedLoop__init(rm_msgs__msg__ClosedLoop * msg)
{
  if (!msg) {
    return false;
  }
  // image_header
  if (!std_msgs__msg__Header__init(&msg->image_header)) {
    rm_msgs__msg__ClosedLoop__fini(msg);
    return false;
  }
  // shoot_header
  if (!std_msgs__msg__Header__init(&msg->shoot_header)) {
    rm_msgs__msg__ClosedLoop__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    rm_msgs__msg__ClosedLoop__fini(msg);
    return false;
  }
  // armor_num
  // r
  // another_r
  // dz
  // yaw
  // c_to_a_pitch
  // now_pose
  if (!geometry_msgs__msg__Pose__init(&msg->now_pose)) {
    rm_msgs__msg__ClosedLoop__fini(msg);
    return false;
  }
  // pred_pose
  if (!geometry_msgs__msg__Pose__init(&msg->pred_pose)) {
    rm_msgs__msg__ClosedLoop__fini(msg);
    return false;
  }
  // now_armor_pose
  if (!geometry_msgs__msg__Pose__init(&msg->now_armor_pose)) {
    rm_msgs__msg__ClosedLoop__fini(msg);
    return false;
  }
  // v0
  // theta
  // fly_t
  return true;
}

void
rm_msgs__msg__ClosedLoop__fini(rm_msgs__msg__ClosedLoop * msg)
{
  if (!msg) {
    return;
  }
  // image_header
  std_msgs__msg__Header__fini(&msg->image_header);
  // shoot_header
  std_msgs__msg__Header__fini(&msg->shoot_header);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // armor_num
  // r
  // another_r
  // dz
  // yaw
  // c_to_a_pitch
  // now_pose
  geometry_msgs__msg__Pose__fini(&msg->now_pose);
  // pred_pose
  geometry_msgs__msg__Pose__fini(&msg->pred_pose);
  // now_armor_pose
  geometry_msgs__msg__Pose__fini(&msg->now_armor_pose);
  // v0
  // theta
  // fly_t
}

bool
rm_msgs__msg__ClosedLoop__are_equal(const rm_msgs__msg__ClosedLoop * lhs, const rm_msgs__msg__ClosedLoop * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->image_header), &(rhs->image_header)))
  {
    return false;
  }
  // shoot_header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->shoot_header), &(rhs->shoot_header)))
  {
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
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // another_r
  if (lhs->another_r != rhs->another_r) {
    return false;
  }
  // dz
  if (lhs->dz != rhs->dz) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // c_to_a_pitch
  if (lhs->c_to_a_pitch != rhs->c_to_a_pitch) {
    return false;
  }
  // now_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->now_pose), &(rhs->now_pose)))
  {
    return false;
  }
  // pred_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pred_pose), &(rhs->pred_pose)))
  {
    return false;
  }
  // now_armor_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->now_armor_pose), &(rhs->now_armor_pose)))
  {
    return false;
  }
  // v0
  if (lhs->v0 != rhs->v0) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // fly_t
  if (lhs->fly_t != rhs->fly_t) {
    return false;
  }
  return true;
}

bool
rm_msgs__msg__ClosedLoop__copy(
  const rm_msgs__msg__ClosedLoop * input,
  rm_msgs__msg__ClosedLoop * output)
{
  if (!input || !output) {
    return false;
  }
  // image_header
  if (!std_msgs__msg__Header__copy(
      &(input->image_header), &(output->image_header)))
  {
    return false;
  }
  // shoot_header
  if (!std_msgs__msg__Header__copy(
      &(input->shoot_header), &(output->shoot_header)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // armor_num
  output->armor_num = input->armor_num;
  // r
  output->r = input->r;
  // another_r
  output->another_r = input->another_r;
  // dz
  output->dz = input->dz;
  // yaw
  output->yaw = input->yaw;
  // c_to_a_pitch
  output->c_to_a_pitch = input->c_to_a_pitch;
  // now_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->now_pose), &(output->now_pose)))
  {
    return false;
  }
  // pred_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pred_pose), &(output->pred_pose)))
  {
    return false;
  }
  // now_armor_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->now_armor_pose), &(output->now_armor_pose)))
  {
    return false;
  }
  // v0
  output->v0 = input->v0;
  // theta
  output->theta = input->theta;
  // fly_t
  output->fly_t = input->fly_t;
  return true;
}

rm_msgs__msg__ClosedLoop *
rm_msgs__msg__ClosedLoop__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__ClosedLoop * msg = (rm_msgs__msg__ClosedLoop *)allocator.allocate(sizeof(rm_msgs__msg__ClosedLoop), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_msgs__msg__ClosedLoop));
  bool success = rm_msgs__msg__ClosedLoop__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_msgs__msg__ClosedLoop__destroy(rm_msgs__msg__ClosedLoop * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_msgs__msg__ClosedLoop__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_msgs__msg__ClosedLoop__Sequence__init(rm_msgs__msg__ClosedLoop__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__ClosedLoop * data = NULL;

  if (size) {
    data = (rm_msgs__msg__ClosedLoop *)allocator.zero_allocate(size, sizeof(rm_msgs__msg__ClosedLoop), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_msgs__msg__ClosedLoop__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_msgs__msg__ClosedLoop__fini(&data[i - 1]);
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
rm_msgs__msg__ClosedLoop__Sequence__fini(rm_msgs__msg__ClosedLoop__Sequence * array)
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
      rm_msgs__msg__ClosedLoop__fini(&array->data[i]);
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

rm_msgs__msg__ClosedLoop__Sequence *
rm_msgs__msg__ClosedLoop__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_msgs__msg__ClosedLoop__Sequence * array = (rm_msgs__msg__ClosedLoop__Sequence *)allocator.allocate(sizeof(rm_msgs__msg__ClosedLoop__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_msgs__msg__ClosedLoop__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_msgs__msg__ClosedLoop__Sequence__destroy(rm_msgs__msg__ClosedLoop__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_msgs__msg__ClosedLoop__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_msgs__msg__ClosedLoop__Sequence__are_equal(const rm_msgs__msg__ClosedLoop__Sequence * lhs, const rm_msgs__msg__ClosedLoop__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_msgs__msg__ClosedLoop__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_msgs__msg__ClosedLoop__Sequence__copy(
  const rm_msgs__msg__ClosedLoop__Sequence * input,
  rm_msgs__msg__ClosedLoop__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_msgs__msg__ClosedLoop);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_msgs__msg__ClosedLoop * data =
      (rm_msgs__msg__ClosedLoop *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_msgs__msg__ClosedLoop__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_msgs__msg__ClosedLoop__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_msgs__msg__ClosedLoop__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
