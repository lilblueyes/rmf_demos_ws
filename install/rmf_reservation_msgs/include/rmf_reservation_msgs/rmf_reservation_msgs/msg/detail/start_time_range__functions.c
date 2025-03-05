// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_reservation_msgs:msg/StartTimeRange.idl
// generated code does not contain a copyright notice
#include "rmf_reservation_msgs/msg/detail/start_time_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `earliest_start_time`
// Member `latest_start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rmf_reservation_msgs__msg__StartTimeRange__init(rmf_reservation_msgs__msg__StartTimeRange * msg)
{
  if (!msg) {
    return false;
  }
  // earliest_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->earliest_start_time)) {
    rmf_reservation_msgs__msg__StartTimeRange__fini(msg);
    return false;
  }
  // has_earliest_start_time
  // latest_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->latest_start_time)) {
    rmf_reservation_msgs__msg__StartTimeRange__fini(msg);
    return false;
  }
  // has_latest_start_time
  return true;
}

void
rmf_reservation_msgs__msg__StartTimeRange__fini(rmf_reservation_msgs__msg__StartTimeRange * msg)
{
  if (!msg) {
    return;
  }
  // earliest_start_time
  builtin_interfaces__msg__Time__fini(&msg->earliest_start_time);
  // has_earliest_start_time
  // latest_start_time
  builtin_interfaces__msg__Time__fini(&msg->latest_start_time);
  // has_latest_start_time
}

bool
rmf_reservation_msgs__msg__StartTimeRange__are_equal(const rmf_reservation_msgs__msg__StartTimeRange * lhs, const rmf_reservation_msgs__msg__StartTimeRange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // earliest_start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->earliest_start_time), &(rhs->earliest_start_time)))
  {
    return false;
  }
  // has_earliest_start_time
  if (lhs->has_earliest_start_time != rhs->has_earliest_start_time) {
    return false;
  }
  // latest_start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->latest_start_time), &(rhs->latest_start_time)))
  {
    return false;
  }
  // has_latest_start_time
  if (lhs->has_latest_start_time != rhs->has_latest_start_time) {
    return false;
  }
  return true;
}

bool
rmf_reservation_msgs__msg__StartTimeRange__copy(
  const rmf_reservation_msgs__msg__StartTimeRange * input,
  rmf_reservation_msgs__msg__StartTimeRange * output)
{
  if (!input || !output) {
    return false;
  }
  // earliest_start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->earliest_start_time), &(output->earliest_start_time)))
  {
    return false;
  }
  // has_earliest_start_time
  output->has_earliest_start_time = input->has_earliest_start_time;
  // latest_start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->latest_start_time), &(output->latest_start_time)))
  {
    return false;
  }
  // has_latest_start_time
  output->has_latest_start_time = input->has_latest_start_time;
  return true;
}

rmf_reservation_msgs__msg__StartTimeRange *
rmf_reservation_msgs__msg__StartTimeRange__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__StartTimeRange * msg = (rmf_reservation_msgs__msg__StartTimeRange *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__StartTimeRange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_reservation_msgs__msg__StartTimeRange));
  bool success = rmf_reservation_msgs__msg__StartTimeRange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_reservation_msgs__msg__StartTimeRange__destroy(rmf_reservation_msgs__msg__StartTimeRange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_reservation_msgs__msg__StartTimeRange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_reservation_msgs__msg__StartTimeRange__Sequence__init(rmf_reservation_msgs__msg__StartTimeRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__StartTimeRange * data = NULL;

  if (size) {
    data = (rmf_reservation_msgs__msg__StartTimeRange *)allocator.zero_allocate(size, sizeof(rmf_reservation_msgs__msg__StartTimeRange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_reservation_msgs__msg__StartTimeRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_reservation_msgs__msg__StartTimeRange__fini(&data[i - 1]);
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
rmf_reservation_msgs__msg__StartTimeRange__Sequence__fini(rmf_reservation_msgs__msg__StartTimeRange__Sequence * array)
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
      rmf_reservation_msgs__msg__StartTimeRange__fini(&array->data[i]);
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

rmf_reservation_msgs__msg__StartTimeRange__Sequence *
rmf_reservation_msgs__msg__StartTimeRange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__StartTimeRange__Sequence * array = (rmf_reservation_msgs__msg__StartTimeRange__Sequence *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__StartTimeRange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_reservation_msgs__msg__StartTimeRange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_reservation_msgs__msg__StartTimeRange__Sequence__destroy(rmf_reservation_msgs__msg__StartTimeRange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_reservation_msgs__msg__StartTimeRange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_reservation_msgs__msg__StartTimeRange__Sequence__are_equal(const rmf_reservation_msgs__msg__StartTimeRange__Sequence * lhs, const rmf_reservation_msgs__msg__StartTimeRange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_reservation_msgs__msg__StartTimeRange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_reservation_msgs__msg__StartTimeRange__Sequence__copy(
  const rmf_reservation_msgs__msg__StartTimeRange__Sequence * input,
  rmf_reservation_msgs__msg__StartTimeRange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_reservation_msgs__msg__StartTimeRange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_reservation_msgs__msg__StartTimeRange * data =
      (rmf_reservation_msgs__msg__StartTimeRange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_reservation_msgs__msg__StartTimeRange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_reservation_msgs__msg__StartTimeRange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_reservation_msgs__msg__StartTimeRange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
