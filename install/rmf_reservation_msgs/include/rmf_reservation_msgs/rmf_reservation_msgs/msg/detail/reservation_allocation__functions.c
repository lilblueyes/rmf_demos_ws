// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_reservation_msgs:msg/ReservationAllocation.idl
// generated code does not contain a copyright notice
#include "rmf_reservation_msgs/msg/detail/reservation_allocation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ticket`
#include "rmf_reservation_msgs/msg/detail/ticket__functions.h"
// Member `resource`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_reservation_msgs__msg__ReservationAllocation__init(rmf_reservation_msgs__msg__ReservationAllocation * msg)
{
  if (!msg) {
    return false;
  }
  // ticket
  if (!rmf_reservation_msgs__msg__Ticket__init(&msg->ticket)) {
    rmf_reservation_msgs__msg__ReservationAllocation__fini(msg);
    return false;
  }
  // instruction_type
  // chosen_alternative
  // resource
  if (!rosidl_runtime_c__String__init(&msg->resource)) {
    rmf_reservation_msgs__msg__ReservationAllocation__fini(msg);
    return false;
  }
  return true;
}

void
rmf_reservation_msgs__msg__ReservationAllocation__fini(rmf_reservation_msgs__msg__ReservationAllocation * msg)
{
  if (!msg) {
    return;
  }
  // ticket
  rmf_reservation_msgs__msg__Ticket__fini(&msg->ticket);
  // instruction_type
  // chosen_alternative
  // resource
  rosidl_runtime_c__String__fini(&msg->resource);
}

bool
rmf_reservation_msgs__msg__ReservationAllocation__are_equal(const rmf_reservation_msgs__msg__ReservationAllocation * lhs, const rmf_reservation_msgs__msg__ReservationAllocation * rhs)
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
  // instruction_type
  if (lhs->instruction_type != rhs->instruction_type) {
    return false;
  }
  // chosen_alternative
  if (lhs->chosen_alternative != rhs->chosen_alternative) {
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->resource), &(rhs->resource)))
  {
    return false;
  }
  return true;
}

bool
rmf_reservation_msgs__msg__ReservationAllocation__copy(
  const rmf_reservation_msgs__msg__ReservationAllocation * input,
  rmf_reservation_msgs__msg__ReservationAllocation * output)
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
  // instruction_type
  output->instruction_type = input->instruction_type;
  // chosen_alternative
  output->chosen_alternative = input->chosen_alternative;
  // resource
  if (!rosidl_runtime_c__String__copy(
      &(input->resource), &(output->resource)))
  {
    return false;
  }
  return true;
}

rmf_reservation_msgs__msg__ReservationAllocation *
rmf_reservation_msgs__msg__ReservationAllocation__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__ReservationAllocation * msg = (rmf_reservation_msgs__msg__ReservationAllocation *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__ReservationAllocation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_reservation_msgs__msg__ReservationAllocation));
  bool success = rmf_reservation_msgs__msg__ReservationAllocation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_reservation_msgs__msg__ReservationAllocation__destroy(rmf_reservation_msgs__msg__ReservationAllocation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_reservation_msgs__msg__ReservationAllocation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_reservation_msgs__msg__ReservationAllocation__Sequence__init(rmf_reservation_msgs__msg__ReservationAllocation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__ReservationAllocation * data = NULL;

  if (size) {
    data = (rmf_reservation_msgs__msg__ReservationAllocation *)allocator.zero_allocate(size, sizeof(rmf_reservation_msgs__msg__ReservationAllocation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_reservation_msgs__msg__ReservationAllocation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_reservation_msgs__msg__ReservationAllocation__fini(&data[i - 1]);
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
rmf_reservation_msgs__msg__ReservationAllocation__Sequence__fini(rmf_reservation_msgs__msg__ReservationAllocation__Sequence * array)
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
      rmf_reservation_msgs__msg__ReservationAllocation__fini(&array->data[i]);
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

rmf_reservation_msgs__msg__ReservationAllocation__Sequence *
rmf_reservation_msgs__msg__ReservationAllocation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__ReservationAllocation__Sequence * array = (rmf_reservation_msgs__msg__ReservationAllocation__Sequence *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__ReservationAllocation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_reservation_msgs__msg__ReservationAllocation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_reservation_msgs__msg__ReservationAllocation__Sequence__destroy(rmf_reservation_msgs__msg__ReservationAllocation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_reservation_msgs__msg__ReservationAllocation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_reservation_msgs__msg__ReservationAllocation__Sequence__are_equal(const rmf_reservation_msgs__msg__ReservationAllocation__Sequence * lhs, const rmf_reservation_msgs__msg__ReservationAllocation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_reservation_msgs__msg__ReservationAllocation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_reservation_msgs__msg__ReservationAllocation__Sequence__copy(
  const rmf_reservation_msgs__msg__ReservationAllocation__Sequence * input,
  rmf_reservation_msgs__msg__ReservationAllocation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_reservation_msgs__msg__ReservationAllocation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_reservation_msgs__msg__ReservationAllocation * data =
      (rmf_reservation_msgs__msg__ReservationAllocation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_reservation_msgs__msg__ReservationAllocation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_reservation_msgs__msg__ReservationAllocation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_reservation_msgs__msg__ReservationAllocation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
