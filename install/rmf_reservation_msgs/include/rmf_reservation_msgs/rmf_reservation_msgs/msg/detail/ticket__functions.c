// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_reservation_msgs:msg/Ticket.idl
// generated code does not contain a copyright notice
#include "rmf_reservation_msgs/msg/detail/ticket__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "rmf_reservation_msgs/msg/detail/request_header__functions.h"

bool
rmf_reservation_msgs__msg__Ticket__init(rmf_reservation_msgs__msg__Ticket * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!rmf_reservation_msgs__msg__RequestHeader__init(&msg->header)) {
    rmf_reservation_msgs__msg__Ticket__fini(msg);
    return false;
  }
  // ticket_id
  return true;
}

void
rmf_reservation_msgs__msg__Ticket__fini(rmf_reservation_msgs__msg__Ticket * msg)
{
  if (!msg) {
    return;
  }
  // header
  rmf_reservation_msgs__msg__RequestHeader__fini(&msg->header);
  // ticket_id
}

bool
rmf_reservation_msgs__msg__Ticket__are_equal(const rmf_reservation_msgs__msg__Ticket * lhs, const rmf_reservation_msgs__msg__Ticket * rhs)
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
  // ticket_id
  if (lhs->ticket_id != rhs->ticket_id) {
    return false;
  }
  return true;
}

bool
rmf_reservation_msgs__msg__Ticket__copy(
  const rmf_reservation_msgs__msg__Ticket * input,
  rmf_reservation_msgs__msg__Ticket * output)
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
  // ticket_id
  output->ticket_id = input->ticket_id;
  return true;
}

rmf_reservation_msgs__msg__Ticket *
rmf_reservation_msgs__msg__Ticket__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__Ticket * msg = (rmf_reservation_msgs__msg__Ticket *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__Ticket), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_reservation_msgs__msg__Ticket));
  bool success = rmf_reservation_msgs__msg__Ticket__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_reservation_msgs__msg__Ticket__destroy(rmf_reservation_msgs__msg__Ticket * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_reservation_msgs__msg__Ticket__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_reservation_msgs__msg__Ticket__Sequence__init(rmf_reservation_msgs__msg__Ticket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__Ticket * data = NULL;

  if (size) {
    data = (rmf_reservation_msgs__msg__Ticket *)allocator.zero_allocate(size, sizeof(rmf_reservation_msgs__msg__Ticket), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_reservation_msgs__msg__Ticket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_reservation_msgs__msg__Ticket__fini(&data[i - 1]);
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
rmf_reservation_msgs__msg__Ticket__Sequence__fini(rmf_reservation_msgs__msg__Ticket__Sequence * array)
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
      rmf_reservation_msgs__msg__Ticket__fini(&array->data[i]);
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

rmf_reservation_msgs__msg__Ticket__Sequence *
rmf_reservation_msgs__msg__Ticket__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__Ticket__Sequence * array = (rmf_reservation_msgs__msg__Ticket__Sequence *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__Ticket__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_reservation_msgs__msg__Ticket__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_reservation_msgs__msg__Ticket__Sequence__destroy(rmf_reservation_msgs__msg__Ticket__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_reservation_msgs__msg__Ticket__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_reservation_msgs__msg__Ticket__Sequence__are_equal(const rmf_reservation_msgs__msg__Ticket__Sequence * lhs, const rmf_reservation_msgs__msg__Ticket__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_reservation_msgs__msg__Ticket__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_reservation_msgs__msg__Ticket__Sequence__copy(
  const rmf_reservation_msgs__msg__Ticket__Sequence * input,
  rmf_reservation_msgs__msg__Ticket__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_reservation_msgs__msg__Ticket);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_reservation_msgs__msg__Ticket * data =
      (rmf_reservation_msgs__msg__Ticket *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_reservation_msgs__msg__Ticket__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_reservation_msgs__msg__Ticket__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_reservation_msgs__msg__Ticket__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
