// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:srv/LiftClearance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/srv/detail/lift_clearance__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/srv/detail/lift_clearance__functions.h"
#include "rmf_fleet_msgs/srv/detail/lift_clearance__struct.h"


// Include directives for member types
// Member `robot_name`
// Member `lift_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__srv__LiftClearance_Request__init(message_memory);
}

void rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_fini_function(void * message_memory)
{
  rmf_fleet_msgs__srv__LiftClearance_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_message_member_array[2] = {
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__srv__LiftClearance_Request, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lift_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__srv__LiftClearance_Request, lift_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_message_members = {
  "rmf_fleet_msgs__srv",  // message namespace
  "LiftClearance_Request",  // message name
  2,  // number of fields
  sizeof(rmf_fleet_msgs__srv__LiftClearance_Request),
  false,  // has_any_key_member_
  rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_message_member_array,  // message members
  rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_message_members,
  get_message_typesupport_handle_function,
  &rmf_fleet_msgs__srv__LiftClearance_Request__get_type_hash,
  &rmf_fleet_msgs__srv__LiftClearance_Request__get_type_description,
  &rmf_fleet_msgs__srv__LiftClearance_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Request)() {
  if (!rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__functions.h"
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__srv__LiftClearance_Response__init(message_memory);
}

void rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_fini_function(void * message_memory)
{
  rmf_fleet_msgs__srv__LiftClearance_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_message_member_array[1] = {
  {
    "decision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__srv__LiftClearance_Response, decision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_message_members = {
  "rmf_fleet_msgs__srv",  // message namespace
  "LiftClearance_Response",  // message name
  1,  // number of fields
  sizeof(rmf_fleet_msgs__srv__LiftClearance_Response),
  false,  // has_any_key_member_
  rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_message_member_array,  // message members
  rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_message_members,
  get_message_typesupport_handle_function,
  &rmf_fleet_msgs__srv__LiftClearance_Response__get_type_hash,
  &rmf_fleet_msgs__srv__LiftClearance_Response__get_type_description,
  &rmf_fleet_msgs__srv__LiftClearance_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Response)() {
  if (!rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__functions.h"
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "rmf_fleet_msgs/srv/lift_clearance.h"
// Member `request`
// Member `response`
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__srv__LiftClearance_Event__init(message_memory);
}

void rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_fini_function(void * message_memory)
{
  rmf_fleet_msgs__srv__LiftClearance_Event__fini(message_memory);
}

size_t rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__size_function__LiftClearance_Event__request(
  const void * untyped_member)
{
  const rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * member =
    (const rmf_fleet_msgs__srv__LiftClearance_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_const_function__LiftClearance_Event__request(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * member =
    (const rmf_fleet_msgs__srv__LiftClearance_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_function__LiftClearance_Event__request(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * member =
    (rmf_fleet_msgs__srv__LiftClearance_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__fetch_function__LiftClearance_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_fleet_msgs__srv__LiftClearance_Request * item =
    ((const rmf_fleet_msgs__srv__LiftClearance_Request *)
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_const_function__LiftClearance_Event__request(untyped_member, index));
  rmf_fleet_msgs__srv__LiftClearance_Request * value =
    (rmf_fleet_msgs__srv__LiftClearance_Request *)(untyped_value);
  *value = *item;
}

void rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__assign_function__LiftClearance_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_fleet_msgs__srv__LiftClearance_Request * item =
    ((rmf_fleet_msgs__srv__LiftClearance_Request *)
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_function__LiftClearance_Event__request(untyped_member, index));
  const rmf_fleet_msgs__srv__LiftClearance_Request * value =
    (const rmf_fleet_msgs__srv__LiftClearance_Request *)(untyped_value);
  *item = *value;
}

bool rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__resize_function__LiftClearance_Event__request(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * member =
    (rmf_fleet_msgs__srv__LiftClearance_Request__Sequence *)(untyped_member);
  rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__fini(member);
  return rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__init(member, size);
}

size_t rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__size_function__LiftClearance_Event__response(
  const void * untyped_member)
{
  const rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * member =
    (const rmf_fleet_msgs__srv__LiftClearance_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_const_function__LiftClearance_Event__response(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * member =
    (const rmf_fleet_msgs__srv__LiftClearance_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_function__LiftClearance_Event__response(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * member =
    (rmf_fleet_msgs__srv__LiftClearance_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__fetch_function__LiftClearance_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_fleet_msgs__srv__LiftClearance_Response * item =
    ((const rmf_fleet_msgs__srv__LiftClearance_Response *)
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_const_function__LiftClearance_Event__response(untyped_member, index));
  rmf_fleet_msgs__srv__LiftClearance_Response * value =
    (rmf_fleet_msgs__srv__LiftClearance_Response *)(untyped_value);
  *value = *item;
}

void rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__assign_function__LiftClearance_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_fleet_msgs__srv__LiftClearance_Response * item =
    ((rmf_fleet_msgs__srv__LiftClearance_Response *)
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_function__LiftClearance_Event__response(untyped_member, index));
  const rmf_fleet_msgs__srv__LiftClearance_Response * value =
    (const rmf_fleet_msgs__srv__LiftClearance_Response *)(untyped_value);
  *item = *value;
}

bool rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__resize_function__LiftClearance_Event__response(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * member =
    (rmf_fleet_msgs__srv__LiftClearance_Response__Sequence *)(untyped_member);
  rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__fini(member);
  return rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__srv__LiftClearance_Event, info),  // bytes offset in struct
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
    offsetof(rmf_fleet_msgs__srv__LiftClearance_Event, request),  // bytes offset in struct
    NULL,  // default value
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__size_function__LiftClearance_Event__request,  // size() function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_const_function__LiftClearance_Event__request,  // get_const(index) function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_function__LiftClearance_Event__request,  // get(index) function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__fetch_function__LiftClearance_Event__request,  // fetch(index, &value) function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__assign_function__LiftClearance_Event__request,  // assign(index, value) function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__resize_function__LiftClearance_Event__request  // resize(index) function pointer
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
    offsetof(rmf_fleet_msgs__srv__LiftClearance_Event, response),  // bytes offset in struct
    NULL,  // default value
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__size_function__LiftClearance_Event__response,  // size() function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_const_function__LiftClearance_Event__response,  // get_const(index) function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__get_function__LiftClearance_Event__response,  // get(index) function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__fetch_function__LiftClearance_Event__response,  // fetch(index, &value) function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__assign_function__LiftClearance_Event__response,  // assign(index, value) function pointer
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__resize_function__LiftClearance_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_members = {
  "rmf_fleet_msgs__srv",  // message namespace
  "LiftClearance_Event",  // message name
  3,  // number of fields
  sizeof(rmf_fleet_msgs__srv__LiftClearance_Event),
  false,  // has_any_key_member_
  rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_member_array,  // message members
  rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_members,
  get_message_typesupport_handle_function,
  &rmf_fleet_msgs__srv__LiftClearance_Event__get_type_hash,
  &rmf_fleet_msgs__srv__LiftClearance_Event__get_type_description,
  &rmf_fleet_msgs__srv__LiftClearance_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Event)() {
  rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Request)();
  rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Response)();
  if (!rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_fleet_msgs/srv/detail/lift_clearance__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_service_members = {
  "rmf_fleet_msgs__srv",  // service namespace
  "LiftClearance",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_Request_message_type_support_handle,
  NULL,  // response message
  // rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_Response_message_type_support_handle
  NULL  // event_message
  // rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_Response_message_type_support_handle
};


static rosidl_service_type_support_t rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_service_type_support_handle = {
  0,
  &rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_service_members,
  get_service_typesupport_handle_function,
  &rmf_fleet_msgs__srv__LiftClearance_Request__rosidl_typesupport_introspection_c__LiftClearance_Request_message_type_support_handle,
  &rmf_fleet_msgs__srv__LiftClearance_Response__rosidl_typesupport_introspection_c__LiftClearance_Response_message_type_support_handle,
  &rmf_fleet_msgs__srv__LiftClearance_Event__rosidl_typesupport_introspection_c__LiftClearance_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rmf_fleet_msgs,
    srv,
    LiftClearance
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rmf_fleet_msgs,
    srv,
    LiftClearance
  ),
  &rmf_fleet_msgs__srv__LiftClearance__get_type_hash,
  &rmf_fleet_msgs__srv__LiftClearance__get_type_description,
  &rmf_fleet_msgs__srv__LiftClearance__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance)(void) {
  if (!rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_service_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, srv, LiftClearance_Event)()->data;
  }

  return &rmf_fleet_msgs__srv__detail__lift_clearance__rosidl_typesupport_introspection_c__LiftClearance_service_type_support_handle;
}
