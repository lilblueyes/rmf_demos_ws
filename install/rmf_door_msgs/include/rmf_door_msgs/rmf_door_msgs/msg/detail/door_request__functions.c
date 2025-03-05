// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_door_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice
#include "rmf_door_msgs/msg/detail/door_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `request_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `requester_id`
// Member `door_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `requested_mode`
#include "rmf_door_msgs/msg/detail/door_mode__functions.h"

bool
rmf_door_msgs__msg__DoorRequest__init(rmf_door_msgs__msg__DoorRequest * msg)
{
  if (!msg) {
    return false;
  }
  // request_time
  if (!builtin_interfaces__msg__Time__init(&msg->request_time)) {
    rmf_door_msgs__msg__DoorRequest__fini(msg);
    return false;
  }
  // requester_id
  if (!rosidl_runtime_c__String__init(&msg->requester_id)) {
    rmf_door_msgs__msg__DoorRequest__fini(msg);
    return false;
  }
  // door_name
  if (!rosidl_runtime_c__String__init(&msg->door_name)) {
    rmf_door_msgs__msg__DoorRequest__fini(msg);
    return false;
  }
  // requested_mode
  if (!rmf_door_msgs__msg__DoorMode__init(&msg->requested_mode)) {
    rmf_door_msgs__msg__DoorRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_door_msgs__msg__DoorRequest__fini(rmf_door_msgs__msg__DoorRequest * msg)
{
  if (!msg) {
    return;
  }
  // request_time
  builtin_interfaces__msg__Time__fini(&msg->request_time);
  // requester_id
  rosidl_runtime_c__String__fini(&msg->requester_id);
  // door_name
  rosidl_runtime_c__String__fini(&msg->door_name);
  // requested_mode
  rmf_door_msgs__msg__DoorMode__fini(&msg->requested_mode);
}

bool
rmf_door_msgs__msg__DoorRequest__are_equal(const rmf_door_msgs__msg__DoorRequest * lhs, const rmf_door_msgs__msg__DoorRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->request_time), &(rhs->request_time)))
  {
    return false;
  }
  // requester_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->requester_id), &(rhs->requester_id)))
  {
    return false;
  }
  // door_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->door_name), &(rhs->door_name)))
  {
    return false;
  }
  // requested_mode
  if (!rmf_door_msgs__msg__DoorMode__are_equal(
      &(lhs->requested_mode), &(rhs->requested_mode)))
  {
    return false;
  }
  return true;
}

bool
rmf_door_msgs__msg__DoorRequest__copy(
  const rmf_door_msgs__msg__DoorRequest * input,
  rmf_door_msgs__msg__DoorRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // request_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->request_time), &(output->request_time)))
  {
    return false;
  }
  // requester_id
  if (!rosidl_runtime_c__String__copy(
      &(input->requester_id), &(output->requester_id)))
  {
    return false;
  }
  // door_name
  if (!rosidl_runtime_c__String__copy(
      &(input->door_name), &(output->door_name)))
  {
    return false;
  }
  // requested_mode
  if (!rmf_door_msgs__msg__DoorMode__copy(
      &(input->requested_mode), &(output->requested_mode)))
  {
    return false;
  }
  return true;
}

rmf_door_msgs__msg__DoorRequest *
rmf_door_msgs__msg__DoorRequest__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_door_msgs__msg__DoorRequest * msg = (rmf_door_msgs__msg__DoorRequest *)allocator.allocate(sizeof(rmf_door_msgs__msg__DoorRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_door_msgs__msg__DoorRequest));
  bool success = rmf_door_msgs__msg__DoorRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_door_msgs__msg__DoorRequest__destroy(rmf_door_msgs__msg__DoorRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_door_msgs__msg__DoorRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_door_msgs__msg__DoorRequest__Sequence__init(rmf_door_msgs__msg__DoorRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_door_msgs__msg__DoorRequest * data = NULL;

  if (size) {
    data = (rmf_door_msgs__msg__DoorRequest *)allocator.zero_allocate(size, sizeof(rmf_door_msgs__msg__DoorRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_door_msgs__msg__DoorRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_door_msgs__msg__DoorRequest__fini(&data[i - 1]);
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
rmf_door_msgs__msg__DoorRequest__Sequence__fini(rmf_door_msgs__msg__DoorRequest__Sequence * array)
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
      rmf_door_msgs__msg__DoorRequest__fini(&array->data[i]);
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

rmf_door_msgs__msg__DoorRequest__Sequence *
rmf_door_msgs__msg__DoorRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_door_msgs__msg__DoorRequest__Sequence * array = (rmf_door_msgs__msg__DoorRequest__Sequence *)allocator.allocate(sizeof(rmf_door_msgs__msg__DoorRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_door_msgs__msg__DoorRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_door_msgs__msg__DoorRequest__Sequence__destroy(rmf_door_msgs__msg__DoorRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_door_msgs__msg__DoorRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_door_msgs__msg__DoorRequest__Sequence__are_equal(const rmf_door_msgs__msg__DoorRequest__Sequence * lhs, const rmf_door_msgs__msg__DoorRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_door_msgs__msg__DoorRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_door_msgs__msg__DoorRequest__Sequence__copy(
  const rmf_door_msgs__msg__DoorRequest__Sequence * input,
  rmf_door_msgs__msg__DoorRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_door_msgs__msg__DoorRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_door_msgs__msg__DoorRequest * data =
      (rmf_door_msgs__msg__DoorRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_door_msgs__msg__DoorRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_door_msgs__msg__DoorRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_door_msgs__msg__DoorRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
