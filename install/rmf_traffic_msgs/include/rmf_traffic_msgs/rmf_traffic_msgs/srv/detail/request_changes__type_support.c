// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:srv/RequestChanges.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/srv/detail/request_changes__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/srv/detail/request_changes__functions.h"
#include "rmf_traffic_msgs/srv/detail/request_changes__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__srv__RequestChanges_Request__init(message_memory);
}

void rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_fini_function(void * message_memory)
{
  rmf_traffic_msgs__srv__RequestChanges_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_message_member_array[3] = {
  {
    "query_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RequestChanges_Request, query_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RequestChanges_Request, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "full_update",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RequestChanges_Request, full_update),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_message_members = {
  "rmf_traffic_msgs__srv",  // message namespace
  "RequestChanges_Request",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs__srv__RequestChanges_Request),
  false,  // has_any_key_member_
  rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_message_member_array,  // message members
  rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__srv__RequestChanges_Request__get_type_hash,
  &rmf_traffic_msgs__srv__RequestChanges_Request__get_type_description,
  &rmf_traffic_msgs__srv__RequestChanges_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Request)() {
  if (!rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_traffic_msgs/srv/detail/request_changes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/request_changes__functions.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/request_changes__struct.h"


// Include directives for member types
// Member `node_id`
#include "rmf_traffic_msgs/msg/schedule_identity.h"
// Member `node_id`
#include "rmf_traffic_msgs/msg/detail/schedule_identity__rosidl_typesupport_introspection_c.h"
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__srv__RequestChanges_Response__init(message_memory);
}

void rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_fini_function(void * message_memory)
{
  rmf_traffic_msgs__srv__RequestChanges_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_member_array[3] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RequestChanges_Response, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RequestChanges_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RequestChanges_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_members = {
  "rmf_traffic_msgs__srv",  // message namespace
  "RequestChanges_Response",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs__srv__RequestChanges_Response),
  false,  // has_any_key_member_
  rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_member_array,  // message members
  rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__srv__RequestChanges_Response__get_type_hash,
  &rmf_traffic_msgs__srv__RequestChanges_Response__get_type_description,
  &rmf_traffic_msgs__srv__RequestChanges_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Response)() {
  rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleIdentity)();
  if (!rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_traffic_msgs/srv/detail/request_changes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/request_changes__functions.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/request_changes__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "rmf_traffic_msgs/srv/request_changes.h"
// Member `request`
// Member `response`
// already included above
// #include "rmf_traffic_msgs/srv/detail/request_changes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__srv__RequestChanges_Event__init(message_memory);
}

void rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_fini_function(void * message_memory)
{
  rmf_traffic_msgs__srv__RequestChanges_Event__fini(message_memory);
}

size_t rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__size_function__RequestChanges_Event__request(
  const void * untyped_member)
{
  const rmf_traffic_msgs__srv__RequestChanges_Request__Sequence * member =
    (const rmf_traffic_msgs__srv__RequestChanges_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_const_function__RequestChanges_Event__request(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__srv__RequestChanges_Request__Sequence * member =
    (const rmf_traffic_msgs__srv__RequestChanges_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_function__RequestChanges_Event__request(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__srv__RequestChanges_Request__Sequence * member =
    (rmf_traffic_msgs__srv__RequestChanges_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__fetch_function__RequestChanges_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__srv__RequestChanges_Request * item =
    ((const rmf_traffic_msgs__srv__RequestChanges_Request *)
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_const_function__RequestChanges_Event__request(untyped_member, index));
  rmf_traffic_msgs__srv__RequestChanges_Request * value =
    (rmf_traffic_msgs__srv__RequestChanges_Request *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__assign_function__RequestChanges_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__srv__RequestChanges_Request * item =
    ((rmf_traffic_msgs__srv__RequestChanges_Request *)
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_function__RequestChanges_Event__request(untyped_member, index));
  const rmf_traffic_msgs__srv__RequestChanges_Request * value =
    (const rmf_traffic_msgs__srv__RequestChanges_Request *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__resize_function__RequestChanges_Event__request(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__srv__RequestChanges_Request__Sequence * member =
    (rmf_traffic_msgs__srv__RequestChanges_Request__Sequence *)(untyped_member);
  rmf_traffic_msgs__srv__RequestChanges_Request__Sequence__fini(member);
  return rmf_traffic_msgs__srv__RequestChanges_Request__Sequence__init(member, size);
}

size_t rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__size_function__RequestChanges_Event__response(
  const void * untyped_member)
{
  const rmf_traffic_msgs__srv__RequestChanges_Response__Sequence * member =
    (const rmf_traffic_msgs__srv__RequestChanges_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_const_function__RequestChanges_Event__response(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__srv__RequestChanges_Response__Sequence * member =
    (const rmf_traffic_msgs__srv__RequestChanges_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_function__RequestChanges_Event__response(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__srv__RequestChanges_Response__Sequence * member =
    (rmf_traffic_msgs__srv__RequestChanges_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__fetch_function__RequestChanges_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__srv__RequestChanges_Response * item =
    ((const rmf_traffic_msgs__srv__RequestChanges_Response *)
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_const_function__RequestChanges_Event__response(untyped_member, index));
  rmf_traffic_msgs__srv__RequestChanges_Response * value =
    (rmf_traffic_msgs__srv__RequestChanges_Response *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__assign_function__RequestChanges_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__srv__RequestChanges_Response * item =
    ((rmf_traffic_msgs__srv__RequestChanges_Response *)
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_function__RequestChanges_Event__response(untyped_member, index));
  const rmf_traffic_msgs__srv__RequestChanges_Response * value =
    (const rmf_traffic_msgs__srv__RequestChanges_Response *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__resize_function__RequestChanges_Event__response(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__srv__RequestChanges_Response__Sequence * member =
    (rmf_traffic_msgs__srv__RequestChanges_Response__Sequence *)(untyped_member);
  rmf_traffic_msgs__srv__RequestChanges_Response__Sequence__fini(member);
  return rmf_traffic_msgs__srv__RequestChanges_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__RequestChanges_Event, info),  // bytes offset in struct
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
    offsetof(rmf_traffic_msgs__srv__RequestChanges_Event, request),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__size_function__RequestChanges_Event__request,  // size() function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_const_function__RequestChanges_Event__request,  // get_const(index) function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_function__RequestChanges_Event__request,  // get(index) function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__fetch_function__RequestChanges_Event__request,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__assign_function__RequestChanges_Event__request,  // assign(index, value) function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__resize_function__RequestChanges_Event__request  // resize(index) function pointer
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
    offsetof(rmf_traffic_msgs__srv__RequestChanges_Event, response),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__size_function__RequestChanges_Event__response,  // size() function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_const_function__RequestChanges_Event__response,  // get_const(index) function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__get_function__RequestChanges_Event__response,  // get(index) function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__fetch_function__RequestChanges_Event__response,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__assign_function__RequestChanges_Event__response,  // assign(index, value) function pointer
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__resize_function__RequestChanges_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_members = {
  "rmf_traffic_msgs__srv",  // message namespace
  "RequestChanges_Event",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs__srv__RequestChanges_Event),
  false,  // has_any_key_member_
  rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_member_array,  // message members
  rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__srv__RequestChanges_Event__get_type_hash,
  &rmf_traffic_msgs__srv__RequestChanges_Event__get_type_description,
  &rmf_traffic_msgs__srv__RequestChanges_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Event)() {
  rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Request)();
  rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Response)();
  if (!rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/request_changes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_service_members = {
  "rmf_traffic_msgs__srv",  // service namespace
  "RequestChanges",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_Request_message_type_support_handle,
  NULL,  // response message
  // rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_Response_message_type_support_handle
  NULL  // event_message
  // rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_Response_message_type_support_handle
};


static rosidl_service_type_support_t rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_service_type_support_handle = {
  0,
  &rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_service_members,
  get_service_typesupport_handle_function,
  &rmf_traffic_msgs__srv__RequestChanges_Request__rosidl_typesupport_introspection_c__RequestChanges_Request_message_type_support_handle,
  &rmf_traffic_msgs__srv__RequestChanges_Response__rosidl_typesupport_introspection_c__RequestChanges_Response_message_type_support_handle,
  &rmf_traffic_msgs__srv__RequestChanges_Event__rosidl_typesupport_introspection_c__RequestChanges_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rmf_traffic_msgs,
    srv,
    RequestChanges
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rmf_traffic_msgs,
    srv,
    RequestChanges
  ),
  &rmf_traffic_msgs__srv__RequestChanges__get_type_hash,
  &rmf_traffic_msgs__srv__RequestChanges__get_type_description,
  &rmf_traffic_msgs__srv__RequestChanges__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges)(void) {
  if (!rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_service_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, RequestChanges_Event)()->data;
  }

  return &rmf_traffic_msgs__srv__detail__request_changes__rosidl_typesupport_introspection_c__RequestChanges_service_type_support_handle;
}
