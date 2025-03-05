// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:srv/GetDispatchStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/srv/get_dispatch_states.h"


#ifndef RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__STRUCT_H_
#define RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetDispatchStates in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__GetDispatchStates_Request
{
  /// Input the generated task ID during submission
  /// if empty, provide all Submitted Tasks
  rosidl_runtime_c__String__Sequence task_ids;
} rmf_task_msgs__srv__GetDispatchStates_Request;

// Struct for a sequence of rmf_task_msgs__srv__GetDispatchStates_Request.
typedef struct rmf_task_msgs__srv__GetDispatchStates_Request__Sequence
{
  rmf_task_msgs__srv__GetDispatchStates_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__GetDispatchStates_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'states'
#include "rmf_task_msgs/msg/detail/dispatch_states__struct.h"

/// Struct defined in srv/GetDispatchStates in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__GetDispatchStates_Response
{
  bool success;
  rmf_task_msgs__msg__DispatchStates states;
} rmf_task_msgs__srv__GetDispatchStates_Response;

// Struct for a sequence of rmf_task_msgs__srv__GetDispatchStates_Response.
typedef struct rmf_task_msgs__srv__GetDispatchStates_Response__Sequence
{
  rmf_task_msgs__srv__GetDispatchStates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__GetDispatchStates_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rmf_task_msgs__srv__GetDispatchStates_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rmf_task_msgs__srv__GetDispatchStates_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetDispatchStates in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__GetDispatchStates_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rmf_task_msgs__srv__GetDispatchStates_Request__Sequence request;
  rmf_task_msgs__srv__GetDispatchStates_Response__Sequence response;
} rmf_task_msgs__srv__GetDispatchStates_Event;

// Struct for a sequence of rmf_task_msgs__srv__GetDispatchStates_Event.
typedef struct rmf_task_msgs__srv__GetDispatchStates_Event__Sequence
{
  rmf_task_msgs__srv__GetDispatchStates_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__GetDispatchStates_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__STRUCT_H_
