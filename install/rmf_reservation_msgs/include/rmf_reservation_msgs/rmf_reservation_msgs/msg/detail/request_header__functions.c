// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_reservation_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice
#include "rmf_reservation_msgs/msg/detail/request_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_name`
// Member `fleet_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_reservation_msgs__msg__RequestHeader__init(rmf_reservation_msgs__msg__RequestHeader * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_reservation_msgs__msg__RequestHeader__fini(msg);
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_reservation_msgs__msg__RequestHeader__fini(msg);
    return false;
  }
  // request_id
  return true;
}

void
rmf_reservation_msgs__msg__RequestHeader__fini(rmf_reservation_msgs__msg__RequestHeader * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // request_id
}

bool
rmf_reservation_msgs__msg__RequestHeader__are_equal(const rmf_reservation_msgs__msg__RequestHeader * lhs, const rmf_reservation_msgs__msg__RequestHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fleet_name), &(rhs->fleet_name)))
  {
    return false;
  }
  // request_id
  if (lhs->request_id != rhs->request_id) {
    return false;
  }
  return true;
}

bool
rmf_reservation_msgs__msg__RequestHeader__copy(
  const rmf_reservation_msgs__msg__RequestHeader * input,
  rmf_reservation_msgs__msg__RequestHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__copy(
      &(input->fleet_name), &(output->fleet_name)))
  {
    return false;
  }
  // request_id
  output->request_id = input->request_id;
  return true;
}

rmf_reservation_msgs__msg__RequestHeader *
rmf_reservation_msgs__msg__RequestHeader__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__RequestHeader * msg = (rmf_reservation_msgs__msg__RequestHeader *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__RequestHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_reservation_msgs__msg__RequestHeader));
  bool success = rmf_reservation_msgs__msg__RequestHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_reservation_msgs__msg__RequestHeader__destroy(rmf_reservation_msgs__msg__RequestHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_reservation_msgs__msg__RequestHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_reservation_msgs__msg__RequestHeader__Sequence__init(rmf_reservation_msgs__msg__RequestHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__RequestHeader * data = NULL;

  if (size) {
    data = (rmf_reservation_msgs__msg__RequestHeader *)allocator.zero_allocate(size, sizeof(rmf_reservation_msgs__msg__RequestHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_reservation_msgs__msg__RequestHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_reservation_msgs__msg__RequestHeader__fini(&data[i - 1]);
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
rmf_reservation_msgs__msg__RequestHeader__Sequence__fini(rmf_reservation_msgs__msg__RequestHeader__Sequence * array)
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
      rmf_reservation_msgs__msg__RequestHeader__fini(&array->data[i]);
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

rmf_reservation_msgs__msg__RequestHeader__Sequence *
rmf_reservation_msgs__msg__RequestHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__RequestHeader__Sequence * array = (rmf_reservation_msgs__msg__RequestHeader__Sequence *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__RequestHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_reservation_msgs__msg__RequestHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_reservation_msgs__msg__RequestHeader__Sequence__destroy(rmf_reservation_msgs__msg__RequestHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_reservation_msgs__msg__RequestHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_reservation_msgs__msg__RequestHeader__Sequence__are_equal(const rmf_reservation_msgs__msg__RequestHeader__Sequence * lhs, const rmf_reservation_msgs__msg__RequestHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_reservation_msgs__msg__RequestHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_reservation_msgs__msg__RequestHeader__Sequence__copy(
  const rmf_reservation_msgs__msg__RequestHeader__Sequence * input,
  rmf_reservation_msgs__msg__RequestHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_reservation_msgs__msg__RequestHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_reservation_msgs__msg__RequestHeader * data =
      (rmf_reservation_msgs__msg__RequestHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_reservation_msgs__msg__RequestHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_reservation_msgs__msg__RequestHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_reservation_msgs__msg__RequestHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
