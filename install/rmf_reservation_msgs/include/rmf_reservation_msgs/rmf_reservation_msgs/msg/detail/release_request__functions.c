// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_reservation_msgs:msg/ReleaseRequest.idl
// generated code does not contain a copyright notice
#include "rmf_reservation_msgs/msg/detail/release_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ticket`
#include "rmf_reservation_msgs/msg/detail/ticket__functions.h"
// Member `location`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_reservation_msgs__msg__ReleaseRequest__init(rmf_reservation_msgs__msg__ReleaseRequest * msg)
{
  if (!msg) {
    return false;
  }
  // ticket
  if (!rmf_reservation_msgs__msg__Ticket__init(&msg->ticket)) {
    rmf_reservation_msgs__msg__ReleaseRequest__fini(msg);
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    rmf_reservation_msgs__msg__ReleaseRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_reservation_msgs__msg__ReleaseRequest__fini(rmf_reservation_msgs__msg__ReleaseRequest * msg)
{
  if (!msg) {
    return;
  }
  // ticket
  rmf_reservation_msgs__msg__Ticket__fini(&msg->ticket);
  // location
  rosidl_runtime_c__String__fini(&msg->location);
}

bool
rmf_reservation_msgs__msg__ReleaseRequest__are_equal(const rmf_reservation_msgs__msg__ReleaseRequest * lhs, const rmf_reservation_msgs__msg__ReleaseRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ticket
  if (!rmf_reservation_msgs__msg__Ticket__are_equal(
      &(lhs->ticket), &(rhs->ticket)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  return true;
}

bool
rmf_reservation_msgs__msg__ReleaseRequest__copy(
  const rmf_reservation_msgs__msg__ReleaseRequest * input,
  rmf_reservation_msgs__msg__ReleaseRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // ticket
  if (!rmf_reservation_msgs__msg__Ticket__copy(
      &(input->ticket), &(output->ticket)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  return true;
}

rmf_reservation_msgs__msg__ReleaseRequest *
rmf_reservation_msgs__msg__ReleaseRequest__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__ReleaseRequest * msg = (rmf_reservation_msgs__msg__ReleaseRequest *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__ReleaseRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_reservation_msgs__msg__ReleaseRequest));
  bool success = rmf_reservation_msgs__msg__ReleaseRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_reservation_msgs__msg__ReleaseRequest__destroy(rmf_reservation_msgs__msg__ReleaseRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_reservation_msgs__msg__ReleaseRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_reservation_msgs__msg__ReleaseRequest__Sequence__init(rmf_reservation_msgs__msg__ReleaseRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__ReleaseRequest * data = NULL;

  if (size) {
    data = (rmf_reservation_msgs__msg__ReleaseRequest *)allocator.zero_allocate(size, sizeof(rmf_reservation_msgs__msg__ReleaseRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_reservation_msgs__msg__ReleaseRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_reservation_msgs__msg__ReleaseRequest__fini(&data[i - 1]);
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
rmf_reservation_msgs__msg__ReleaseRequest__Sequence__fini(rmf_reservation_msgs__msg__ReleaseRequest__Sequence * array)
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
      rmf_reservation_msgs__msg__ReleaseRequest__fini(&array->data[i]);
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

rmf_reservation_msgs__msg__ReleaseRequest__Sequence *
rmf_reservation_msgs__msg__ReleaseRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__ReleaseRequest__Sequence * array = (rmf_reservation_msgs__msg__ReleaseRequest__Sequence *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__ReleaseRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_reservation_msgs__msg__ReleaseRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_reservation_msgs__msg__ReleaseRequest__Sequence__destroy(rmf_reservation_msgs__msg__ReleaseRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_reservation_msgs__msg__ReleaseRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_reservation_msgs__msg__ReleaseRequest__Sequence__are_equal(const rmf_reservation_msgs__msg__ReleaseRequest__Sequence * lhs, const rmf_reservation_msgs__msg__ReleaseRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_reservation_msgs__msg__ReleaseRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_reservation_msgs__msg__ReleaseRequest__Sequence__copy(
  const rmf_reservation_msgs__msg__ReleaseRequest__Sequence * input,
  rmf_reservation_msgs__msg__ReleaseRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_reservation_msgs__msg__ReleaseRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_reservation_msgs__msg__ReleaseRequest * data =
      (rmf_reservation_msgs__msg__ReleaseRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_reservation_msgs__msg__ReleaseRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_reservation_msgs__msg__ReleaseRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_reservation_msgs__msg__ReleaseRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
