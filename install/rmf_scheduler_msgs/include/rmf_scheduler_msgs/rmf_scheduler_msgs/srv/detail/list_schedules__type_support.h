// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from rmf_scheduler_msgs:srv/ListSchedules.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_scheduler_msgs/srv/list_schedules.h"


#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULES__TYPE_SUPPORT_H_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULES__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "rmf_scheduler_msgs/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rmf_scheduler_msgs,
  srv,
  ListSchedules_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rmf_scheduler_msgs,
  srv,
  ListSchedules_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rmf_scheduler_msgs,
  srv,
  ListSchedules_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rmf_scheduler_msgs,
  srv,
  ListSchedules
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rmf_scheduler_msgs,
  srv,
  ListSchedules
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rmf_scheduler_msgs,
  srv,
  ListSchedules
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULES__TYPE_SUPPORT_H_
