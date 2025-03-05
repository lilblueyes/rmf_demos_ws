// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_reservation_msgs:msg/ClaimRequest.idl
// generated code does not contain a copyright notice
#include "rmf_reservation_msgs/msg/detail/claim_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ticket`
#include "rmf_reservation_msgs/msg/detail/ticket__functions.h"
// Member `wait_points`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_reservation_msgs__msg__ClaimRequest__init(rmf_reservation_msgs__msg__ClaimRequest * msg)
{
  if (!msg) {
    return false;
  }
  // ticket
  if (!rmf_reservation_msgs__msg__Ticket__init(&msg->ticket)) {
    rmf_reservation_msgs__msg__ClaimRequest__fini(msg);
    return false;
  }
  // wait_points
  if (!rosidl_runtime_c__String__Sequence__init(&msg->wait_points, 0)) {
    rmf_reservation_msgs__msg__ClaimRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_reservation_msgs__msg__ClaimRequest__fini(rmf_reservation_msgs__msg__ClaimRequest * msg)
{
  if (!msg) {
    return;
  }
  // ticket
  rmf_reservation_msgs__msg__Ticket__fini(&msg->ticket);
  // wait_points
  rosidl_runtime_c__String__Sequence__fini(&msg->wait_points);
}

bool
rmf_reservation_msgs__msg__ClaimRequest__are_equal(const rmf_reservation_msgs__msg__ClaimRequest * lhs, const rmf_reservation_msgs__msg__ClaimRequest * rhs)
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
  // wait_points
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->wait_points), &(rhs->wait_points)))
  {
    return false;
  }
  return true;
}

bool
rmf_reservation_msgs__msg__ClaimRequest__copy(
  const rmf_reservation_msgs__msg__ClaimRequest * input,
  rmf_reservation_msgs__msg__ClaimRequest * output)
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
  // wait_points
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->wait_points), &(output->wait_points)))
  {
    return false;
  }
  return true;
}

rmf_reservation_msgs__msg__ClaimRequest *
rmf_reservation_msgs__msg__ClaimRequest__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__ClaimRequest * msg = (rmf_reservation_msgs__msg__ClaimRequest *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__ClaimRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_reservation_msgs__msg__ClaimRequest));
  bool success = rmf_reservation_msgs__msg__ClaimRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_reservation_msgs__msg__ClaimRequest__destroy(rmf_reservation_msgs__msg__ClaimRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_reservation_msgs__msg__ClaimRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_reservation_msgs__msg__ClaimRequest__Sequence__init(rmf_reservation_msgs__msg__ClaimRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__ClaimRequest * data = NULL;

  if (size) {
    data = (rmf_reservation_msgs__msg__ClaimRequest *)allocator.zero_allocate(size, sizeof(rmf_reservation_msgs__msg__ClaimRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_reservation_msgs__msg__ClaimRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_reservation_msgs__msg__ClaimRequest__fini(&data[i - 1]);
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
rmf_reservation_msgs__msg__ClaimRequest__Sequence__fini(rmf_reservation_msgs__msg__ClaimRequest__Sequence * array)
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
      rmf_reservation_msgs__msg__ClaimRequest__fini(&array->data[i]);
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

rmf_reservation_msgs__msg__ClaimRequest__Sequence *
rmf_reservation_msgs__msg__ClaimRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__ClaimRequest__Sequence * array = (rmf_reservation_msgs__msg__ClaimRequest__Sequence *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__ClaimRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_reservation_msgs__msg__ClaimRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_reservation_msgs__msg__ClaimRequest__Sequence__destroy(rmf_reservation_msgs__msg__ClaimRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_reservation_msgs__msg__ClaimRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_reservation_msgs__msg__ClaimRequest__Sequence__are_equal(const rmf_reservation_msgs__msg__ClaimRequest__Sequence * lhs, const rmf_reservation_msgs__msg__ClaimRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_reservation_msgs__msg__ClaimRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_reservation_msgs__msg__ClaimRequest__Sequence__copy(
  const rmf_reservation_msgs__msg__ClaimRequest__Sequence * input,
  rmf_reservation_msgs__msg__ClaimRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_reservation_msgs__msg__ClaimRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_reservation_msgs__msg__ClaimRequest * data =
      (rmf_reservation_msgs__msg__ClaimRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_reservation_msgs__msg__ClaimRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_reservation_msgs__msg__ClaimRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_reservation_msgs__msg__ClaimRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
