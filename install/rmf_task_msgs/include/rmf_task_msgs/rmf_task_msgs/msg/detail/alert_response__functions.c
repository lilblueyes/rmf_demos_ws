// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/AlertResponse.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/alert_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `response`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__msg__AlertResponse__init(rmf_task_msgs__msg__AlertResponse * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    rmf_task_msgs__msg__AlertResponse__fini(msg);
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    rmf_task_msgs__msg__AlertResponse__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__AlertResponse__fini(rmf_task_msgs__msg__AlertResponse * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
rmf_task_msgs__msg__AlertResponse__are_equal(const rmf_task_msgs__msg__AlertResponse * lhs, const rmf_task_msgs__msg__AlertResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__AlertResponse__copy(
  const rmf_task_msgs__msg__AlertResponse * input,
  rmf_task_msgs__msg__AlertResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__AlertResponse *
rmf_task_msgs__msg__AlertResponse__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__AlertResponse * msg = (rmf_task_msgs__msg__AlertResponse *)allocator.allocate(sizeof(rmf_task_msgs__msg__AlertResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__AlertResponse));
  bool success = rmf_task_msgs__msg__AlertResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__AlertResponse__destroy(rmf_task_msgs__msg__AlertResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__AlertResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__AlertResponse__Sequence__init(rmf_task_msgs__msg__AlertResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__AlertResponse * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__AlertResponse *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__AlertResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__AlertResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__AlertResponse__fini(&data[i - 1]);
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
rmf_task_msgs__msg__AlertResponse__Sequence__fini(rmf_task_msgs__msg__AlertResponse__Sequence * array)
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
      rmf_task_msgs__msg__AlertResponse__fini(&array->data[i]);
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

rmf_task_msgs__msg__AlertResponse__Sequence *
rmf_task_msgs__msg__AlertResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__AlertResponse__Sequence * array = (rmf_task_msgs__msg__AlertResponse__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__AlertResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__AlertResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__AlertResponse__Sequence__destroy(rmf_task_msgs__msg__AlertResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__AlertResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__AlertResponse__Sequence__are_equal(const rmf_task_msgs__msg__AlertResponse__Sequence * lhs, const rmf_task_msgs__msg__AlertResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__AlertResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__AlertResponse__Sequence__copy(
  const rmf_task_msgs__msg__AlertResponse__Sequence * input,
  rmf_task_msgs__msg__AlertResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__AlertResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__AlertResponse * data =
      (rmf_task_msgs__msg__AlertResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__AlertResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__AlertResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__AlertResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
