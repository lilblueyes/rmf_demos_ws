// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:srv/ApiService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/srv/api_service.h"


#ifndef RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__STRUCT_H_
#define RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'json_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApiService in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__ApiService_Request
{
  /// The JSON message that represents the request
  rosidl_runtime_c__String json_msg;
} rmf_task_msgs__srv__ApiService_Request;

// Struct for a sequence of rmf_task_msgs__srv__ApiService_Request.
typedef struct rmf_task_msgs__srv__ApiService_Request__Sequence
{
  rmf_task_msgs__srv__ApiService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__ApiService_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'json_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApiService in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__ApiService_Response
{
  /// The JSON message that represents the response
  rosidl_runtime_c__String json_msg;
} rmf_task_msgs__srv__ApiService_Response;

// Struct for a sequence of rmf_task_msgs__srv__ApiService_Response.
typedef struct rmf_task_msgs__srv__ApiService_Response__Sequence
{
  rmf_task_msgs__srv__ApiService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__ApiService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rmf_task_msgs__srv__ApiService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rmf_task_msgs__srv__ApiService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ApiService in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__ApiService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rmf_task_msgs__srv__ApiService_Request__Sequence request;
  rmf_task_msgs__srv__ApiService_Response__Sequence response;
} rmf_task_msgs__srv__ApiService_Event;

// Struct for a sequence of rmf_task_msgs__srv__ApiService_Event.
typedef struct rmf_task_msgs__srv__ApiService_Event__Sequence
{
  rmf_task_msgs__srv__ApiService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__ApiService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__STRUCT_H_
