// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:srv/GetDispatchStates.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/srv/detail/get_dispatch_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `task_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__srv__GetDispatchStates_Request__init(rmf_task_msgs__srv__GetDispatchStates_Request * msg)
{
  if (!msg) {
    return false;
  }
  // task_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->task_ids, 0)) {
    rmf_task_msgs__srv__GetDispatchStates_Request__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__srv__GetDispatchStates_Request__fini(rmf_task_msgs__srv__GetDispatchStates_Request * msg)
{
  if (!msg) {
    return;
  }
  // task_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->task_ids);
}

bool
rmf_task_msgs__srv__GetDispatchStates_Request__are_equal(const rmf_task_msgs__srv__GetDispatchStates_Request * lhs, const rmf_task_msgs__srv__GetDispatchStates_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->task_ids), &(rhs->task_ids)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__srv__GetDispatchStates_Request__copy(
  const rmf_task_msgs__srv__GetDispatchStates_Request * input,
  rmf_task_msgs__srv__GetDispatchStates_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // task_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->task_ids), &(output->task_ids)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__srv__GetDispatchStates_Request *
rmf_task_msgs__srv__GetDispatchStates_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__srv__GetDispatchStates_Request * msg = (rmf_task_msgs__srv__GetDispatchStates_Request *)allocator.allocate(sizeof(rmf_task_msgs__srv__GetDispatchStates_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__srv__GetDispatchStates_Request));
  bool success = rmf_task_msgs__srv__GetDispatchStates_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__srv__GetDispatchStates_Request__destroy(rmf_task_msgs__srv__GetDispatchStates_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__srv__GetDispatchStates_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__init(rmf_task_msgs__srv__GetDispatchStates_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__srv__GetDispatchStates_Request * data = NULL;

  if (size) {
    data = (rmf_task_msgs__srv__GetDispatchStates_Request *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__srv__GetDispatchStates_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__srv__GetDispatchStates_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__srv__GetDispatchStates_Request__fini(&data[i - 1]);
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
rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__fini(rmf_task_msgs__srv__GetDispatchStates_Request__Sequence * array)
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
      rmf_task_msgs__srv__GetDispatchStates_Request__fini(&array->data[i]);
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

rmf_task_msgs__srv__GetDispatchStates_Request__Sequence *
rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__srv__GetDispatchStates_Request__Sequence * array = (rmf_task_msgs__srv__GetDispatchStates_Request__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__srv__GetDispatchStates_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__destroy(rmf_task_msgs__srv__GetDispatchStates_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__are_equal(const rmf_task_msgs__srv__GetDispatchStates_Request__Sequence * lhs, const rmf_task_msgs__srv__GetDispatchStates_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__srv__GetDispatchStates_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__copy(
  const rmf_task_msgs__srv__GetDispatchStates_Request__Sequence * input,
  rmf_task_msgs__srv__GetDispatchStates_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__srv__GetDispatchStates_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__srv__GetDispatchStates_Request * data =
      (rmf_task_msgs__srv__GetDispatchStates_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__srv__GetDispatchStates_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__srv__GetDispatchStates_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__srv__GetDispatchStates_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `states`
#include "rmf_task_msgs/msg/detail/dispatch_states__functions.h"

bool
rmf_task_msgs__srv__GetDispatchStates_Response__init(rmf_task_msgs__srv__GetDispatchStates_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // states
  if (!rmf_task_msgs__msg__DispatchStates__init(&msg->states)) {
    rmf_task_msgs__srv__GetDispatchStates_Response__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__srv__GetDispatchStates_Response__fini(rmf_task_msgs__srv__GetDispatchStates_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // states
  rmf_task_msgs__msg__DispatchStates__fini(&msg->states);
}

bool
rmf_task_msgs__srv__GetDispatchStates_Response__are_equal(const rmf_task_msgs__srv__GetDispatchStates_Response * lhs, const rmf_task_msgs__srv__GetDispatchStates_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // states
  if (!rmf_task_msgs__msg__DispatchStates__are_equal(
      &(lhs->states), &(rhs->states)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__srv__GetDispatchStates_Response__copy(
  const rmf_task_msgs__srv__GetDispatchStates_Response * input,
  rmf_task_msgs__srv__GetDispatchStates_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // states
  if (!rmf_task_msgs__msg__DispatchStates__copy(
      &(input->states), &(output->states)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__srv__GetDispatchStates_Response *
rmf_task_msgs__srv__GetDispatchStates_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__srv__GetDispatchStates_Response * msg = (rmf_task_msgs__srv__GetDispatchStates_Response *)allocator.allocate(sizeof(rmf_task_msgs__srv__GetDispatchStates_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__srv__GetDispatchStates_Response));
  bool success = rmf_task_msgs__srv__GetDispatchStates_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__srv__GetDispatchStates_Response__destroy(rmf_task_msgs__srv__GetDispatchStates_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__srv__GetDispatchStates_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__init(rmf_task_msgs__srv__GetDispatchStates_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__srv__GetDispatchStates_Response * data = NULL;

  if (size) {
    data = (rmf_task_msgs__srv__GetDispatchStates_Response *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__srv__GetDispatchStates_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__srv__GetDispatchStates_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__srv__GetDispatchStates_Response__fini(&data[i - 1]);
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
rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__fini(rmf_task_msgs__srv__GetDispatchStates_Response__Sequence * array)
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
      rmf_task_msgs__srv__GetDispatchStates_Response__fini(&array->data[i]);
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

rmf_task_msgs__srv__GetDispatchStates_Response__Sequence *
rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__srv__GetDispatchStates_Response__Sequence * array = (rmf_task_msgs__srv__GetDispatchStates_Response__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__srv__GetDispatchStates_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__destroy(rmf_task_msgs__srv__GetDispatchStates_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__are_equal(const rmf_task_msgs__srv__GetDispatchStates_Response__Sequence * lhs, const rmf_task_msgs__srv__GetDispatchStates_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__srv__GetDispatchStates_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__copy(
  const rmf_task_msgs__srv__GetDispatchStates_Response__Sequence * input,
  rmf_task_msgs__srv__GetDispatchStates_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__srv__GetDispatchStates_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__srv__GetDispatchStates_Response * data =
      (rmf_task_msgs__srv__GetDispatchStates_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__srv__GetDispatchStates_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__srv__GetDispatchStates_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__srv__GetDispatchStates_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "rmf_task_msgs/srv/detail/get_dispatch_states__functions.h"

bool
rmf_task_msgs__srv__GetDispatchStates_Event__init(rmf_task_msgs__srv__GetDispatchStates_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    rmf_task_msgs__srv__GetDispatchStates_Event__fini(msg);
    return false;
  }
  // request
  if (!rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__init(&msg->request, 0)) {
    rmf_task_msgs__srv__GetDispatchStates_Event__fini(msg);
    return false;
  }
  // response
  if (!rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__init(&msg->response, 0)) {
    rmf_task_msgs__srv__GetDispatchStates_Event__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__srv__GetDispatchStates_Event__fini(rmf_task_msgs__srv__GetDispatchStates_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__fini(&msg->request);
  // response
  rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__fini(&msg->response);
}

bool
rmf_task_msgs__srv__GetDispatchStates_Event__are_equal(const rmf_task_msgs__srv__GetDispatchStates_Event * lhs, const rmf_task_msgs__srv__GetDispatchStates_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__srv__GetDispatchStates_Event__copy(
  const rmf_task_msgs__srv__GetDispatchStates_Event * input,
  rmf_task_msgs__srv__GetDispatchStates_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__srv__GetDispatchStates_Event *
rmf_task_msgs__srv__GetDispatchStates_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__srv__GetDispatchStates_Event * msg = (rmf_task_msgs__srv__GetDispatchStates_Event *)allocator.allocate(sizeof(rmf_task_msgs__srv__GetDispatchStates_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__srv__GetDispatchStates_Event));
  bool success = rmf_task_msgs__srv__GetDispatchStates_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__srv__GetDispatchStates_Event__destroy(rmf_task_msgs__srv__GetDispatchStates_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__srv__GetDispatchStates_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__srv__GetDispatchStates_Event__Sequence__init(rmf_task_msgs__srv__GetDispatchStates_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__srv__GetDispatchStates_Event * data = NULL;

  if (size) {
    data = (rmf_task_msgs__srv__GetDispatchStates_Event *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__srv__GetDispatchStates_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__srv__GetDispatchStates_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__srv__GetDispatchStates_Event__fini(&data[i - 1]);
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
rmf_task_msgs__srv__GetDispatchStates_Event__Sequence__fini(rmf_task_msgs__srv__GetDispatchStates_Event__Sequence * array)
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
      rmf_task_msgs__srv__GetDispatchStates_Event__fini(&array->data[i]);
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

rmf_task_msgs__srv__GetDispatchStates_Event__Sequence *
rmf_task_msgs__srv__GetDispatchStates_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__srv__GetDispatchStates_Event__Sequence * array = (rmf_task_msgs__srv__GetDispatchStates_Event__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__srv__GetDispatchStates_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__srv__GetDispatchStates_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__srv__GetDispatchStates_Event__Sequence__destroy(rmf_task_msgs__srv__GetDispatchStates_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__srv__GetDispatchStates_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__srv__GetDispatchStates_Event__Sequence__are_equal(const rmf_task_msgs__srv__GetDispatchStates_Event__Sequence * lhs, const rmf_task_msgs__srv__GetDispatchStates_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__srv__GetDispatchStates_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__srv__GetDispatchStates_Event__Sequence__copy(
  const rmf_task_msgs__srv__GetDispatchStates_Event__Sequence * input,
  rmf_task_msgs__srv__GetDispatchStates_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__srv__GetDispatchStates_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__srv__GetDispatchStates_Event * data =
      (rmf_task_msgs__srv__GetDispatchStates_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__srv__GetDispatchStates_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__srv__GetDispatchStates_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__srv__GetDispatchStates_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
