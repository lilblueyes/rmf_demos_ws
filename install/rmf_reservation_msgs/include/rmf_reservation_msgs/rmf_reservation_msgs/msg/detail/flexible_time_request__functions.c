// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_reservation_msgs:msg/FlexibleTimeRequest.idl
// generated code does not contain a copyright notice
#include "rmf_reservation_msgs/msg/detail/flexible_time_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "rmf_reservation_msgs/msg/detail/request_header__functions.h"
// Member `alternatives`
#include "rmf_reservation_msgs/msg/detail/flexible_time_reservation_alt__functions.h"

bool
rmf_reservation_msgs__msg__FlexibleTimeRequest__init(rmf_reservation_msgs__msg__FlexibleTimeRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!rmf_reservation_msgs__msg__RequestHeader__init(&msg->header)) {
    rmf_reservation_msgs__msg__FlexibleTimeRequest__fini(msg);
    return false;
  }
  // alternatives
  if (!rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__init(&msg->alternatives, 0)) {
    rmf_reservation_msgs__msg__FlexibleTimeRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_reservation_msgs__msg__FlexibleTimeRequest__fini(rmf_reservation_msgs__msg__FlexibleTimeRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  rmf_reservation_msgs__msg__RequestHeader__fini(&msg->header);
  // alternatives
  rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__fini(&msg->alternatives);
}

bool
rmf_reservation_msgs__msg__FlexibleTimeRequest__are_equal(const rmf_reservation_msgs__msg__FlexibleTimeRequest * lhs, const rmf_reservation_msgs__msg__FlexibleTimeRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!rmf_reservation_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // alternatives
  if (!rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__are_equal(
      &(lhs->alternatives), &(rhs->alternatives)))
  {
    return false;
  }
  return true;
}

bool
rmf_reservation_msgs__msg__FlexibleTimeRequest__copy(
  const rmf_reservation_msgs__msg__FlexibleTimeRequest * input,
  rmf_reservation_msgs__msg__FlexibleTimeRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!rmf_reservation_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // alternatives
  if (!rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence__copy(
      &(input->alternatives), &(output->alternatives)))
  {
    return false;
  }
  return true;
}

rmf_reservation_msgs__msg__FlexibleTimeRequest *
rmf_reservation_msgs__msg__FlexibleTimeRequest__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__FlexibleTimeRequest * msg = (rmf_reservation_msgs__msg__FlexibleTimeRequest *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__FlexibleTimeRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_reservation_msgs__msg__FlexibleTimeRequest));
  bool success = rmf_reservation_msgs__msg__FlexibleTimeRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_reservation_msgs__msg__FlexibleTimeRequest__destroy(rmf_reservation_msgs__msg__FlexibleTimeRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_reservation_msgs__msg__FlexibleTimeRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence__init(rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__FlexibleTimeRequest * data = NULL;

  if (size) {
    data = (rmf_reservation_msgs__msg__FlexibleTimeRequest *)allocator.zero_allocate(size, sizeof(rmf_reservation_msgs__msg__FlexibleTimeRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_reservation_msgs__msg__FlexibleTimeRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_reservation_msgs__msg__FlexibleTimeRequest__fini(&data[i - 1]);
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
rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence__fini(rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence * array)
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
      rmf_reservation_msgs__msg__FlexibleTimeRequest__fini(&array->data[i]);
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

rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence *
rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence * array = (rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence__destroy(rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence__are_equal(const rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence * lhs, const rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_reservation_msgs__msg__FlexibleTimeRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence__copy(
  const rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence * input,
  rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_reservation_msgs__msg__FlexibleTimeRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_reservation_msgs__msg__FlexibleTimeRequest * data =
      (rmf_reservation_msgs__msg__FlexibleTimeRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_reservation_msgs__msg__FlexibleTimeRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_reservation_msgs__msg__FlexibleTimeRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_reservation_msgs__msg__FlexibleTimeRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
