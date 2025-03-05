// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/Door.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/door__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_building_map_msgs__msg__Door__init(rmf_building_map_msgs__msg__Door * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__Door__fini(msg);
    return false;
  }
  // v1_x
  // v1_y
  // v2_x
  // v2_y
  // door_type
  // motion_range
  // motion_direction
  return true;
}

void
rmf_building_map_msgs__msg__Door__fini(rmf_building_map_msgs__msg__Door * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // v1_x
  // v1_y
  // v2_x
  // v2_y
  // door_type
  // motion_range
  // motion_direction
}

bool
rmf_building_map_msgs__msg__Door__are_equal(const rmf_building_map_msgs__msg__Door * lhs, const rmf_building_map_msgs__msg__Door * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // v1_x
  if (lhs->v1_x != rhs->v1_x) {
    return false;
  }
  // v1_y
  if (lhs->v1_y != rhs->v1_y) {
    return false;
  }
  // v2_x
  if (lhs->v2_x != rhs->v2_x) {
    return false;
  }
  // v2_y
  if (lhs->v2_y != rhs->v2_y) {
    return false;
  }
  // door_type
  if (lhs->door_type != rhs->door_type) {
    return false;
  }
  // motion_range
  if (lhs->motion_range != rhs->motion_range) {
    return false;
  }
  // motion_direction
  if (lhs->motion_direction != rhs->motion_direction) {
    return false;
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Door__copy(
  const rmf_building_map_msgs__msg__Door * input,
  rmf_building_map_msgs__msg__Door * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // v1_x
  output->v1_x = input->v1_x;
  // v1_y
  output->v1_y = input->v1_y;
  // v2_x
  output->v2_x = input->v2_x;
  // v2_y
  output->v2_y = input->v2_y;
  // door_type
  output->door_type = input->door_type;
  // motion_range
  output->motion_range = input->motion_range;
  // motion_direction
  output->motion_direction = input->motion_direction;
  return true;
}

rmf_building_map_msgs__msg__Door *
rmf_building_map_msgs__msg__Door__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Door * msg = (rmf_building_map_msgs__msg__Door *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Door), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__Door));
  bool success = rmf_building_map_msgs__msg__Door__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__Door__destroy(rmf_building_map_msgs__msg__Door * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_building_map_msgs__msg__Door__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_building_map_msgs__msg__Door__Sequence__init(rmf_building_map_msgs__msg__Door__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Door * data = NULL;

  if (size) {
    data = (rmf_building_map_msgs__msg__Door *)allocator.zero_allocate(size, sizeof(rmf_building_map_msgs__msg__Door), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__Door__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__Door__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__Door__Sequence__fini(rmf_building_map_msgs__msg__Door__Sequence * array)
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
      rmf_building_map_msgs__msg__Door__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__Door__Sequence *
rmf_building_map_msgs__msg__Door__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Door__Sequence * array = (rmf_building_map_msgs__msg__Door__Sequence *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Door__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__Door__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__Door__Sequence__destroy(rmf_building_map_msgs__msg__Door__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_building_map_msgs__msg__Door__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_building_map_msgs__msg__Door__Sequence__are_equal(const rmf_building_map_msgs__msg__Door__Sequence * lhs, const rmf_building_map_msgs__msg__Door__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_building_map_msgs__msg__Door__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Door__Sequence__copy(
  const rmf_building_map_msgs__msg__Door__Sequence * input,
  rmf_building_map_msgs__msg__Door__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_building_map_msgs__msg__Door);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_building_map_msgs__msg__Door * data =
      (rmf_building_map_msgs__msg__Door *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_building_map_msgs__msg__Door__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_building_map_msgs__msg__Door__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_building_map_msgs__msg__Door__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
