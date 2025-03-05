// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_reservation_msgs:msg/FreeParkingSpots.idl
// generated code does not contain a copyright notice
#include "rmf_reservation_msgs/msg/detail/free_parking_spots__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `spots`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_reservation_msgs__msg__FreeParkingSpots__init(rmf_reservation_msgs__msg__FreeParkingSpots * msg)
{
  if (!msg) {
    return false;
  }
  // spots
  if (!rosidl_runtime_c__String__Sequence__init(&msg->spots, 0)) {
    rmf_reservation_msgs__msg__FreeParkingSpots__fini(msg);
    return false;
  }
  return true;
}

void
rmf_reservation_msgs__msg__FreeParkingSpots__fini(rmf_reservation_msgs__msg__FreeParkingSpots * msg)
{
  if (!msg) {
    return;
  }
  // spots
  rosidl_runtime_c__String__Sequence__fini(&msg->spots);
}

bool
rmf_reservation_msgs__msg__FreeParkingSpots__are_equal(const rmf_reservation_msgs__msg__FreeParkingSpots * lhs, const rmf_reservation_msgs__msg__FreeParkingSpots * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // spots
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->spots), &(rhs->spots)))
  {
    return false;
  }
  return true;
}

bool
rmf_reservation_msgs__msg__FreeParkingSpots__copy(
  const rmf_reservation_msgs__msg__FreeParkingSpots * input,
  rmf_reservation_msgs__msg__FreeParkingSpots * output)
{
  if (!input || !output) {
    return false;
  }
  // spots
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->spots), &(output->spots)))
  {
    return false;
  }
  return true;
}

rmf_reservation_msgs__msg__FreeParkingSpots *
rmf_reservation_msgs__msg__FreeParkingSpots__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__FreeParkingSpots * msg = (rmf_reservation_msgs__msg__FreeParkingSpots *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__FreeParkingSpots), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_reservation_msgs__msg__FreeParkingSpots));
  bool success = rmf_reservation_msgs__msg__FreeParkingSpots__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_reservation_msgs__msg__FreeParkingSpots__destroy(rmf_reservation_msgs__msg__FreeParkingSpots * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_reservation_msgs__msg__FreeParkingSpots__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_reservation_msgs__msg__FreeParkingSpots__Sequence__init(rmf_reservation_msgs__msg__FreeParkingSpots__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__FreeParkingSpots * data = NULL;

  if (size) {
    data = (rmf_reservation_msgs__msg__FreeParkingSpots *)allocator.zero_allocate(size, sizeof(rmf_reservation_msgs__msg__FreeParkingSpots), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_reservation_msgs__msg__FreeParkingSpots__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_reservation_msgs__msg__FreeParkingSpots__fini(&data[i - 1]);
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
rmf_reservation_msgs__msg__FreeParkingSpots__Sequence__fini(rmf_reservation_msgs__msg__FreeParkingSpots__Sequence * array)
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
      rmf_reservation_msgs__msg__FreeParkingSpots__fini(&array->data[i]);
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

rmf_reservation_msgs__msg__FreeParkingSpots__Sequence *
rmf_reservation_msgs__msg__FreeParkingSpots__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_reservation_msgs__msg__FreeParkingSpots__Sequence * array = (rmf_reservation_msgs__msg__FreeParkingSpots__Sequence *)allocator.allocate(sizeof(rmf_reservation_msgs__msg__FreeParkingSpots__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_reservation_msgs__msg__FreeParkingSpots__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_reservation_msgs__msg__FreeParkingSpots__Sequence__destroy(rmf_reservation_msgs__msg__FreeParkingSpots__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_reservation_msgs__msg__FreeParkingSpots__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_reservation_msgs__msg__FreeParkingSpots__Sequence__are_equal(const rmf_reservation_msgs__msg__FreeParkingSpots__Sequence * lhs, const rmf_reservation_msgs__msg__FreeParkingSpots__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_reservation_msgs__msg__FreeParkingSpots__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_reservation_msgs__msg__FreeParkingSpots__Sequence__copy(
  const rmf_reservation_msgs__msg__FreeParkingSpots__Sequence * input,
  rmf_reservation_msgs__msg__FreeParkingSpots__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_reservation_msgs__msg__FreeParkingSpots);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_reservation_msgs__msg__FreeParkingSpots * data =
      (rmf_reservation_msgs__msg__FreeParkingSpots *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_reservation_msgs__msg__FreeParkingSpots__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_reservation_msgs__msg__FreeParkingSpots__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_reservation_msgs__msg__FreeParkingSpots__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
