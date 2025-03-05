// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_reservation_msgs:msg/ReservationAllocation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_reservation_msgs/msg/detail/reservation_allocation__rosidl_typesupport_introspection_c.h"
#include "rmf_reservation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_reservation_msgs/msg/detail/reservation_allocation__functions.h"
#include "rmf_reservation_msgs/msg/detail/reservation_allocation__struct.h"


// Include directives for member types
// Member `ticket`
#include "rmf_reservation_msgs/msg/ticket.h"
// Member `ticket`
#include "rmf_reservation_msgs/msg/detail/ticket__rosidl_typesupport_introspection_c.h"
// Member `resource`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_reservation_msgs__msg__ReservationAllocation__init(message_memory);
}

void rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_fini_function(void * message_memory)
{
  rmf_reservation_msgs__msg__ReservationAllocation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_message_member_array[4] = {
  {
    "ticket",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs__msg__ReservationAllocation, ticket),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "instruction_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs__msg__ReservationAllocation, instruction_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "chosen_alternative",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs__msg__ReservationAllocation, chosen_alternative),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resource",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs__msg__ReservationAllocation, resource),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_message_members = {
  "rmf_reservation_msgs__msg",  // message namespace
  "ReservationAllocation",  // message name
  4,  // number of fields
  sizeof(rmf_reservation_msgs__msg__ReservationAllocation),
  false,  // has_any_key_member_
  rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_message_member_array,  // message members
  rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_message_type_support_handle = {
  0,
  &rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_message_members,
  get_message_typesupport_handle_function,
  &rmf_reservation_msgs__msg__ReservationAllocation__get_type_hash,
  &rmf_reservation_msgs__msg__ReservationAllocation__get_type_description,
  &rmf_reservation_msgs__msg__ReservationAllocation__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_reservation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_reservation_msgs, msg, ReservationAllocation)() {
  rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_reservation_msgs, msg, Ticket)();
  if (!rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_message_type_support_handle.typesupport_identifier) {
    rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_reservation_msgs__msg__ReservationAllocation__rosidl_typesupport_introspection_c__ReservationAllocation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
