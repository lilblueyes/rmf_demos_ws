// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Alert.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/alert__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `title`
// Member `subtitle`
// Member `message`
// Member `responses_available`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `alert_parameters`
#include "rmf_task_msgs/msg/detail/alert_parameter__functions.h"

bool
rmf_task_msgs__msg__Alert__init(rmf_task_msgs__msg__Alert * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    rmf_task_msgs__msg__Alert__fini(msg);
    return false;
  }
  // title
  if (!rosidl_runtime_c__String__init(&msg->title)) {
    rmf_task_msgs__msg__Alert__fini(msg);
    return false;
  }
  // subtitle
  if (!rosidl_runtime_c__String__init(&msg->subtitle)) {
    rmf_task_msgs__msg__Alert__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    rmf_task_msgs__msg__Alert__fini(msg);
    return false;
  }
  // display
  msg->display = true;
  // tier
  // responses_available
  if (!rosidl_runtime_c__String__Sequence__init(&msg->responses_available, 0)) {
    rmf_task_msgs__msg__Alert__fini(msg);
    return false;
  }
  // alert_parameters
  if (!rmf_task_msgs__msg__AlertParameter__Sequence__init(&msg->alert_parameters, 0)) {
    rmf_task_msgs__msg__Alert__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__Alert__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__Alert__fini(rmf_task_msgs__msg__Alert * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // title
  rosidl_runtime_c__String__fini(&msg->title);
  // subtitle
  rosidl_runtime_c__String__fini(&msg->subtitle);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // display
  // tier
  // responses_available
  rosidl_runtime_c__String__Sequence__fini(&msg->responses_available);
  // alert_parameters
  rmf_task_msgs__msg__AlertParameter__Sequence__fini(&msg->alert_parameters);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
}

bool
rmf_task_msgs__msg__Alert__are_equal(const rmf_task_msgs__msg__Alert * lhs, const rmf_task_msgs__msg__Alert * rhs)
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
  // title
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->title), &(rhs->title)))
  {
    return false;
  }
  // subtitle
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->subtitle), &(rhs->subtitle)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // display
  if (lhs->display != rhs->display) {
    return false;
  }
  // tier
  if (lhs->tier != rhs->tier) {
    return false;
  }
  // responses_available
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->responses_available), &(rhs->responses_available)))
  {
    return false;
  }
  // alert_parameters
  if (!rmf_task_msgs__msg__AlertParameter__Sequence__are_equal(
      &(lhs->alert_parameters), &(rhs->alert_parameters)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__Alert__copy(
  const rmf_task_msgs__msg__Alert * input,
  rmf_task_msgs__msg__Alert * output)
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
  // title
  if (!rosidl_runtime_c__String__copy(
      &(input->title), &(output->title)))
  {
    return false;
  }
  // subtitle
  if (!rosidl_runtime_c__String__copy(
      &(input->subtitle), &(output->subtitle)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // display
  output->display = input->display;
  // tier
  output->tier = input->tier;
  // responses_available
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->responses_available), &(output->responses_available)))
  {
    return false;
  }
  // alert_parameters
  if (!rmf_task_msgs__msg__AlertParameter__Sequence__copy(
      &(input->alert_parameters), &(output->alert_parameters)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__Alert *
rmf_task_msgs__msg__Alert__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Alert * msg = (rmf_task_msgs__msg__Alert *)allocator.allocate(sizeof(rmf_task_msgs__msg__Alert), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Alert));
  bool success = rmf_task_msgs__msg__Alert__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Alert__destroy(rmf_task_msgs__msg__Alert * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__Alert__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__Alert__Sequence__init(rmf_task_msgs__msg__Alert__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Alert * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__Alert *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__Alert), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Alert__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Alert__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Alert__Sequence__fini(rmf_task_msgs__msg__Alert__Sequence * array)
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
      rmf_task_msgs__msg__Alert__fini(&array->data[i]);
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

rmf_task_msgs__msg__Alert__Sequence *
rmf_task_msgs__msg__Alert__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Alert__Sequence * array = (rmf_task_msgs__msg__Alert__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__Alert__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Alert__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Alert__Sequence__destroy(rmf_task_msgs__msg__Alert__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__Alert__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__Alert__Sequence__are_equal(const rmf_task_msgs__msg__Alert__Sequence * lhs, const rmf_task_msgs__msg__Alert__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__Alert__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__Alert__Sequence__copy(
  const rmf_task_msgs__msg__Alert__Sequence * input,
  rmf_task_msgs__msg__Alert__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__Alert);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__Alert * data =
      (rmf_task_msgs__msg__Alert *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__Alert__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__Alert__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__Alert__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
