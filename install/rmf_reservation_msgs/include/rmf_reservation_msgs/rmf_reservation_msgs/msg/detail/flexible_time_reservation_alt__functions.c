// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_reservation_msgs:msg/FlexibleTimeReservationAlt.idl
// generated code does not contain a copyright notice
#include "rmf_reservation_msgs/msg/detail/flexible_time_reservation_alt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `resource_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_time`
#include "rmf_reservation_msgs/msg/detail/start_time_range__functions.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__init(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * msg)
{
  if (!msg) {
    return false;
  }
  // resource_name
  if (!rosidl_runtime_c__String__init(&msg->resource_name)) {
    rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__fini(msg);
    return false;
  }
  // cost
  // start_time
  if (!rmf_reservation_msgs__msg__StartTimeRange__init(&msg->start_time)) {
    rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__fini(msg);
    return false;
  }
  // has_end
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__fini(msg);
    return false;
  }
  return true;
}

void
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__fini(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * msg)
{
  if (!msg) {
    return;
  }
  // resource_name
  rosidl_runtime_c__String__fini(&msg->resource_name);
  // cost
  // start_time
  rmf_reservation_msgs__msg__StartTimeRange__fini(&msg->start_time);
  // has_end
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
}

bool
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__are_equal(const rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * lhs, const rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resource_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->resource_name), &(rhs->resource_name)))
  {
    return false;
  }
  // cost
  if (lhs->cost != rhs->cost) {
    return false;
  }
  // start_time
  if (!rmf_reservation_msgs__msg__StartTimeRange__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // has_end
  if (lhs->has_end != rhs->has_end) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  return true;
}

bool
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__copy(
  const rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * input,
  rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * output)
{
  if (!input || !output) {
    return false;
  }
  // resource_name
  if (!rosidl_runtime_c__String__copy(
      &(input->resource_name), &(output->resource_name)))
  {
    return false;
  }
  // cost
  output->cost = input->cost;
  // start_time
  if (!rmf_reservation_msgs__msg__StartTimeRange__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // has_end
  output->has_end = input->has_end;
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  return true;
}

rmf_reservation_msgs__msg__FlexibleTimeReservationAlt *
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * msg = (rmf_reservation_msgs__msg__FlexibleTimeReservationAlt *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt));
  bool success = rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__destroy(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__init(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * data = NULL;

  if (size) {
    data = (rmf_reservation_msgs__msg__FlexibleTimeReservationAlt *)allocator.zero_allocate(size, sizeof(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__fini(&data[i - 1]);
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
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__fini(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence * array)
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
      rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__fini(&array->data[i]);
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

rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence *
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence * array = (rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__destroy(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__are_equal(const rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence * lhs, const rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__copy(
  const rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence * input,
  rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_reservation_msgs__msg__FlexibleTimeReservationAlt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * data =
      (rmf_reservation_msgs__msg__FlexibleTimeReservationAlt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
