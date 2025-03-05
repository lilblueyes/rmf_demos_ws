// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_dispenser_msgs:msg/DispenserState.idl
// generated code does not contain a copyright notice
#include "rmf_dispenser_msgs/msg/detail/dispenser_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `guid`
// Member `request_guid_queue`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_dispenser_msgs__msg__DispenserState__init(rmf_dispenser_msgs__msg__DispenserState * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    rmf_dispenser_msgs__msg__DispenserState__fini(msg);
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__init(&msg->guid)) {
    rmf_dispenser_msgs__msg__DispenserState__fini(msg);
    return false;
  }
  // mode
  // request_guid_queue
  if (!rosidl_runtime_c__String__Sequence__init(&msg->request_guid_queue, 0)) {
    rmf_dispenser_msgs__msg__DispenserState__fini(msg);
    return false;
  }
  // seconds_remaining
  return true;
}

void
rmf_dispenser_msgs__msg__DispenserState__fini(rmf_dispenser_msgs__msg__DispenserState * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
  // guid
  rosidl_runtime_c__String__fini(&msg->guid);
  // mode
  // request_guid_queue
  rosidl_runtime_c__String__Sequence__fini(&msg->request_guid_queue);
  // seconds_remaining
}

bool
rmf_dispenser_msgs__msg__DispenserState__are_equal(const rmf_dispenser_msgs__msg__DispenserState * lhs, const rmf_dispenser_msgs__msg__DispenserState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->guid), &(rhs->guid)))
  {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // request_guid_queue
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->request_guid_queue), &(rhs->request_guid_queue)))
  {
    return false;
  }
  // seconds_remaining
  if (lhs->seconds_remaining != rhs->seconds_remaining) {
    return false;
  }
  return true;
}

bool
rmf_dispenser_msgs__msg__DispenserState__copy(
  const rmf_dispenser_msgs__msg__DispenserState * input,
  rmf_dispenser_msgs__msg__DispenserState * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__copy(
      &(input->guid), &(output->guid)))
  {
    return false;
  }
  // mode
  output->mode = input->mode;
  // request_guid_queue
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->request_guid_queue), &(output->request_guid_queue)))
  {
    return false;
  }
  // seconds_remaining
  output->seconds_remaining = input->seconds_remaining;
  return true;
}

rmf_dispenser_msgs__msg__DispenserState *
rmf_dispenser_msgs__msg__DispenserState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_dispenser_msgs__msg__DispenserState * msg = (rmf_dispenser_msgs__msg__DispenserState *)allocator.allocate(sizeof(rmf_dispenser_msgs__msg__DispenserState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_dispenser_msgs__msg__DispenserState));
  bool success = rmf_dispenser_msgs__msg__DispenserState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_dispenser_msgs__msg__DispenserState__destroy(rmf_dispenser_msgs__msg__DispenserState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_dispenser_msgs__msg__DispenserState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_dispenser_msgs__msg__DispenserState__Sequence__init(rmf_dispenser_msgs__msg__DispenserState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_dispenser_msgs__msg__DispenserState * data = NULL;

  if (size) {
    data = (rmf_dispenser_msgs__msg__DispenserState *)allocator.zero_allocate(size, sizeof(rmf_dispenser_msgs__msg__DispenserState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_dispenser_msgs__msg__DispenserState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_dispenser_msgs__msg__DispenserState__fini(&data[i - 1]);
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
rmf_dispenser_msgs__msg__DispenserState__Sequence__fini(rmf_dispenser_msgs__msg__DispenserState__Sequence * array)
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
      rmf_dispenser_msgs__msg__DispenserState__fini(&array->data[i]);
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

rmf_dispenser_msgs__msg__DispenserState__Sequence *
rmf_dispenser_msgs__msg__DispenserState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_dispenser_msgs__msg__DispenserState__Sequence * array = (rmf_dispenser_msgs__msg__DispenserState__Sequence *)allocator.allocate(sizeof(rmf_dispenser_msgs__msg__DispenserState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_dispenser_msgs__msg__DispenserState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_dispenser_msgs__msg__DispenserState__Sequence__destroy(rmf_dispenser_msgs__msg__DispenserState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_dispenser_msgs__msg__DispenserState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_dispenser_msgs__msg__DispenserState__Sequence__are_equal(const rmf_dispenser_msgs__msg__DispenserState__Sequence * lhs, const rmf_dispenser_msgs__msg__DispenserState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_dispenser_msgs__msg__DispenserState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_dispenser_msgs__msg__DispenserState__Sequence__copy(
  const rmf_dispenser_msgs__msg__DispenserState__Sequence * input,
  rmf_dispenser_msgs__msg__DispenserState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_dispenser_msgs__msg__DispenserState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_dispenser_msgs__msg__DispenserState * data =
      (rmf_dispenser_msgs__msg__DispenserState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_dispenser_msgs__msg__DispenserState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_dispenser_msgs__msg__DispenserState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_dispenser_msgs__msg__DispenserState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
