// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_reservation_msgs:msg/Ticket.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_reservation_msgs/msg/detail/ticket__rosidl_typesupport_introspection_c.h"
#include "rmf_reservation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_reservation_msgs/msg/detail/ticket__functions.h"
#include "rmf_reservation_msgs/msg/detail/ticket__struct.h"


// Include directives for member types
// Member `header`
#include "rmf_reservation_msgs/msg/request_header.h"
// Member `header`
#include "rmf_reservation_msgs/msg/detail/request_header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_reservation_msgs__msg__Ticket__init(message_memory);
}

void rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_fini_function(void * message_memory)
{
  rmf_reservation_msgs__msg__Ticket__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs__msg__Ticket, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ticket_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs__msg__Ticket, ticket_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_message_members = {
  "rmf_reservation_msgs__msg",  // message namespace
  "Ticket",  // message name
  2,  // number of fields
  sizeof(rmf_reservation_msgs__msg__Ticket),
  false,  // has_any_key_member_
  rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_message_member_array,  // message members
  rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_message_type_support_handle = {
  0,
  &rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_message_members,
  get_message_typesupport_handle_function,
  &rmf_reservation_msgs__msg__Ticket__get_type_hash,
  &rmf_reservation_msgs__msg__Ticket__get_type_description,
  &rmf_reservation_msgs__msg__Ticket__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_reservation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_reservation_msgs, msg, Ticket)() {
  rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_reservation_msgs, msg, RequestHeader)();
  if (!rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_message_type_support_handle.typesupport_identifier) {
    rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_reservation_msgs__msg__Ticket__rosidl_typesupport_introspection_c__Ticket_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
