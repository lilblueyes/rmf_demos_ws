// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_scheduler_msgs:srv/ListSchedules.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_scheduler_msgs/srv/detail/list_schedules__rosidl_typesupport_introspection_c.h"
#include "rmf_scheduler_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_scheduler_msgs/srv/detail/list_schedules__functions.h"
#include "rmf_scheduler_msgs/srv/detail/list_schedules__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_scheduler_msgs__srv__ListSchedules_Request__init(message_memory);
}

void rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_fini_function(void * message_memory)
{
  rmf_scheduler_msgs__srv__ListSchedules_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_message_member_array[1] = {
  {
    "created_after",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListSchedules_Request, created_after),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_message_members = {
  "rmf_scheduler_msgs__srv",  // message namespace
  "ListSchedules_Request",  // message name
  1,  // number of fields
  sizeof(rmf_scheduler_msgs__srv__ListSchedules_Request),
  false,  // has_any_key_member_
  rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_message_member_array,  // message members
  rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_message_type_support_handle = {
  0,
  &rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_message_members,
  get_message_typesupport_handle_function,
  &rmf_scheduler_msgs__srv__ListSchedules_Request__get_type_hash,
  &rmf_scheduler_msgs__srv__ListSchedules_Request__get_type_description,
  &rmf_scheduler_msgs__srv__ListSchedules_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Request)() {
  if (!rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_message_type_support_handle.typesupport_identifier) {
    rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedules__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_scheduler_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedules__functions.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedules__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `schedules`
#include "rmf_scheduler_msgs/msg/schedule.h"
// Member `schedules`
#include "rmf_scheduler_msgs/msg/detail/schedule__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_scheduler_msgs__srv__ListSchedules_Response__init(message_memory);
}

void rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_fini_function(void * message_memory)
{
  rmf_scheduler_msgs__srv__ListSchedules_Response__fini(message_memory);
}

size_t rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__size_function__ListSchedules_Response__schedules(
  const void * untyped_member)
{
  const rmf_scheduler_msgs__msg__Schedule__Sequence * member =
    (const rmf_scheduler_msgs__msg__Schedule__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__get_const_function__ListSchedules_Response__schedules(
  const void * untyped_member, size_t index)
{
  const rmf_scheduler_msgs__msg__Schedule__Sequence * member =
    (const rmf_scheduler_msgs__msg__Schedule__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__get_function__ListSchedules_Response__schedules(
  void * untyped_member, size_t index)
{
  rmf_scheduler_msgs__msg__Schedule__Sequence * member =
    (rmf_scheduler_msgs__msg__Schedule__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__fetch_function__ListSchedules_Response__schedules(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_scheduler_msgs__msg__Schedule * item =
    ((const rmf_scheduler_msgs__msg__Schedule *)
    rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__get_const_function__ListSchedules_Response__schedules(untyped_member, index));
  rmf_scheduler_msgs__msg__Schedule * value =
    (rmf_scheduler_msgs__msg__Schedule *)(untyped_value);
  *value = *item;
}

void rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__assign_function__ListSchedules_Response__schedules(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_scheduler_msgs__msg__Schedule * item =
    ((rmf_scheduler_msgs__msg__Schedule *)
    rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__get_function__ListSchedules_Response__schedules(untyped_member, index));
  const rmf_scheduler_msgs__msg__Schedule * value =
    (const rmf_scheduler_msgs__msg__Schedule *)(untyped_value);
  *item = *value;
}

bool rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__resize_function__ListSchedules_Response__schedules(
  void * untyped_member, size_t size)
{
  rmf_scheduler_msgs__msg__Schedule__Sequence * member =
    (rmf_scheduler_msgs__msg__Schedule__Sequence *)(untyped_member);
  rmf_scheduler_msgs__msg__Schedule__Sequence__fini(member);
  return rmf_scheduler_msgs__msg__Schedule__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListSchedules_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListSchedules_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "schedules",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListSchedules_Response, schedules),  // bytes offset in struct
    NULL,  // default value
    rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__size_function__ListSchedules_Response__schedules,  // size() function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__get_const_function__ListSchedules_Response__schedules,  // get_const(index) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__get_function__ListSchedules_Response__schedules,  // get(index) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__fetch_function__ListSchedules_Response__schedules,  // fetch(index, &value) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__assign_function__ListSchedules_Response__schedules,  // assign(index, value) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__resize_function__ListSchedules_Response__schedules  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_members = {
  "rmf_scheduler_msgs__srv",  // message namespace
  "ListSchedules_Response",  // message name
  3,  // number of fields
  sizeof(rmf_scheduler_msgs__srv__ListSchedules_Response),
  false,  // has_any_key_member_
  rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_member_array,  // message members
  rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_type_support_handle = {
  0,
  &rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_members,
  get_message_typesupport_handle_function,
  &rmf_scheduler_msgs__srv__ListSchedules_Response__get_type_hash,
  &rmf_scheduler_msgs__srv__ListSchedules_Response__get_type_description,
  &rmf_scheduler_msgs__srv__ListSchedules_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Response)() {
  rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, msg, Schedule)();
  if (!rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_type_support_handle.typesupport_identifier) {
    rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedules__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_scheduler_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedules__functions.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedules__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "rmf_scheduler_msgs/srv/list_schedules.h"
// Member `request`
// Member `response`
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedules__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_scheduler_msgs__srv__ListSchedules_Event__init(message_memory);
}

void rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_fini_function(void * message_memory)
{
  rmf_scheduler_msgs__srv__ListSchedules_Event__fini(message_memory);
}

size_t rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__size_function__ListSchedules_Event__request(
  const void * untyped_member)
{
  const rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence * member =
    (const rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_const_function__ListSchedules_Event__request(
  const void * untyped_member, size_t index)
{
  const rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence * member =
    (const rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_function__ListSchedules_Event__request(
  void * untyped_member, size_t index)
{
  rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence * member =
    (rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__fetch_function__ListSchedules_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_scheduler_msgs__srv__ListSchedules_Request * item =
    ((const rmf_scheduler_msgs__srv__ListSchedules_Request *)
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_const_function__ListSchedules_Event__request(untyped_member, index));
  rmf_scheduler_msgs__srv__ListSchedules_Request * value =
    (rmf_scheduler_msgs__srv__ListSchedules_Request *)(untyped_value);
  *value = *item;
}

void rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__assign_function__ListSchedules_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_scheduler_msgs__srv__ListSchedules_Request * item =
    ((rmf_scheduler_msgs__srv__ListSchedules_Request *)
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_function__ListSchedules_Event__request(untyped_member, index));
  const rmf_scheduler_msgs__srv__ListSchedules_Request * value =
    (const rmf_scheduler_msgs__srv__ListSchedules_Request *)(untyped_value);
  *item = *value;
}

bool rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__resize_function__ListSchedules_Event__request(
  void * untyped_member, size_t size)
{
  rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence * member =
    (rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence *)(untyped_member);
  rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence__fini(member);
  return rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence__init(member, size);
}

size_t rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__size_function__ListSchedules_Event__response(
  const void * untyped_member)
{
  const rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence * member =
    (const rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_const_function__ListSchedules_Event__response(
  const void * untyped_member, size_t index)
{
  const rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence * member =
    (const rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_function__ListSchedules_Event__response(
  void * untyped_member, size_t index)
{
  rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence * member =
    (rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__fetch_function__ListSchedules_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_scheduler_msgs__srv__ListSchedules_Response * item =
    ((const rmf_scheduler_msgs__srv__ListSchedules_Response *)
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_const_function__ListSchedules_Event__response(untyped_member, index));
  rmf_scheduler_msgs__srv__ListSchedules_Response * value =
    (rmf_scheduler_msgs__srv__ListSchedules_Response *)(untyped_value);
  *value = *item;
}

void rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__assign_function__ListSchedules_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_scheduler_msgs__srv__ListSchedules_Response * item =
    ((rmf_scheduler_msgs__srv__ListSchedules_Response *)
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_function__ListSchedules_Event__response(untyped_member, index));
  const rmf_scheduler_msgs__srv__ListSchedules_Response * value =
    (const rmf_scheduler_msgs__srv__ListSchedules_Response *)(untyped_value);
  *item = *value;
}

bool rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__resize_function__ListSchedules_Event__response(
  void * untyped_member, size_t size)
{
  rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence * member =
    (rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence *)(untyped_member);
  rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence__fini(member);
  return rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListSchedules_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListSchedules_Event, request),  // bytes offset in struct
    NULL,  // default value
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__size_function__ListSchedules_Event__request,  // size() function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_const_function__ListSchedules_Event__request,  // get_const(index) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_function__ListSchedules_Event__request,  // get(index) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__fetch_function__ListSchedules_Event__request,  // fetch(index, &value) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__assign_function__ListSchedules_Event__request,  // assign(index, value) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__resize_function__ListSchedules_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListSchedules_Event, response),  // bytes offset in struct
    NULL,  // default value
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__size_function__ListSchedules_Event__response,  // size() function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_const_function__ListSchedules_Event__response,  // get_const(index) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__get_function__ListSchedules_Event__response,  // get(index) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__fetch_function__ListSchedules_Event__response,  // fetch(index, &value) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__assign_function__ListSchedules_Event__response,  // assign(index, value) function pointer
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__resize_function__ListSchedules_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_members = {
  "rmf_scheduler_msgs__srv",  // message namespace
  "ListSchedules_Event",  // message name
  3,  // number of fields
  sizeof(rmf_scheduler_msgs__srv__ListSchedules_Event),
  false,  // has_any_key_member_
  rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_member_array,  // message members
  rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_type_support_handle = {
  0,
  &rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_members,
  get_message_typesupport_handle_function,
  &rmf_scheduler_msgs__srv__ListSchedules_Event__get_type_hash,
  &rmf_scheduler_msgs__srv__ListSchedules_Event__get_type_description,
  &rmf_scheduler_msgs__srv__ListSchedules_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Event)() {
  rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Request)();
  rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Response)();
  if (!rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_type_support_handle.typesupport_identifier) {
    rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_scheduler_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_schedules__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_service_members = {
  "rmf_scheduler_msgs__srv",  // service namespace
  "ListSchedules",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_Request_message_type_support_handle,
  NULL,  // response message
  // rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_Response_message_type_support_handle
  NULL  // event_message
  // rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_Response_message_type_support_handle
};


static rosidl_service_type_support_t rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_service_type_support_handle = {
  0,
  &rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_service_members,
  get_service_typesupport_handle_function,
  &rmf_scheduler_msgs__srv__ListSchedules_Request__rosidl_typesupport_introspection_c__ListSchedules_Request_message_type_support_handle,
  &rmf_scheduler_msgs__srv__ListSchedules_Response__rosidl_typesupport_introspection_c__ListSchedules_Response_message_type_support_handle,
  &rmf_scheduler_msgs__srv__ListSchedules_Event__rosidl_typesupport_introspection_c__ListSchedules_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rmf_scheduler_msgs,
    srv,
    ListSchedules
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rmf_scheduler_msgs,
    srv,
    ListSchedules
  ),
  &rmf_scheduler_msgs__srv__ListSchedules__get_type_hash,
  &rmf_scheduler_msgs__srv__ListSchedules__get_type_description,
  &rmf_scheduler_msgs__srv__ListSchedules__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_scheduler_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules)(void) {
  if (!rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_service_type_support_handle.typesupport_identifier) {
    rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListSchedules_Event)()->data;
  }

  return &rmf_scheduler_msgs__srv__detail__list_schedules__rosidl_typesupport_introspection_c__ListSchedules_service_type_support_handle;
}
