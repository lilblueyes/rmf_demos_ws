// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__struct.h"


// Include directives for member types
// Member `to_accommodate`
#include "rmf_traffic_msgs/msg/negotiation_key.h"
// Member `to_accommodate`
#include "rmf_traffic_msgs/msg/detail/negotiation_key__rosidl_typesupport_introspection_c.h"
// Member `itinerary`
#include "rmf_traffic_msgs/msg/route.h"
// Member `itinerary`
#include "rmf_traffic_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__NegotiationProposal__init(message_memory);
}

void rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__NegotiationProposal__fini(message_memory);
}

size_t rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__size_function__NegotiationProposal__to_accommodate(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__NegotiationKey__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationKey__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_const_function__NegotiationProposal__to_accommodate(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__NegotiationKey__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationKey__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_function__NegotiationProposal__to_accommodate(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__NegotiationKey__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationKey__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__fetch_function__NegotiationProposal__to_accommodate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__NegotiationKey * item =
    ((const rmf_traffic_msgs__msg__NegotiationKey *)
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_const_function__NegotiationProposal__to_accommodate(untyped_member, index));
  rmf_traffic_msgs__msg__NegotiationKey * value =
    (rmf_traffic_msgs__msg__NegotiationKey *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__assign_function__NegotiationProposal__to_accommodate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__NegotiationKey * item =
    ((rmf_traffic_msgs__msg__NegotiationKey *)
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_function__NegotiationProposal__to_accommodate(untyped_member, index));
  const rmf_traffic_msgs__msg__NegotiationKey * value =
    (const rmf_traffic_msgs__msg__NegotiationKey *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__resize_function__NegotiationProposal__to_accommodate(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__NegotiationKey__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationKey__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__NegotiationKey__Sequence__fini(member);
  return rmf_traffic_msgs__msg__NegotiationKey__Sequence__init(member, size);
}

size_t rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__size_function__NegotiationProposal__itinerary(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__Route__Sequence * member =
    (const rmf_traffic_msgs__msg__Route__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_const_function__NegotiationProposal__itinerary(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__Route__Sequence * member =
    (const rmf_traffic_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_function__NegotiationProposal__itinerary(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__Route__Sequence * member =
    (rmf_traffic_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__fetch_function__NegotiationProposal__itinerary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__Route * item =
    ((const rmf_traffic_msgs__msg__Route *)
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_const_function__NegotiationProposal__itinerary(untyped_member, index));
  rmf_traffic_msgs__msg__Route * value =
    (rmf_traffic_msgs__msg__Route *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__assign_function__NegotiationProposal__itinerary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__Route * item =
    ((rmf_traffic_msgs__msg__Route *)
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_function__NegotiationProposal__itinerary(untyped_member, index));
  const rmf_traffic_msgs__msg__Route * value =
    (const rmf_traffic_msgs__msg__Route *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__resize_function__NegotiationProposal__itinerary(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__Route__Sequence * member =
    (rmf_traffic_msgs__msg__Route__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__Route__Sequence__fini(member);
  return rmf_traffic_msgs__msg__Route__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_member_array[6] = {
  {
    "conflict_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationProposal, conflict_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "proposal_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationProposal, proposal_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "for_participant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationProposal, for_participant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "to_accommodate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationProposal, to_accommodate),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__size_function__NegotiationProposal__to_accommodate,  // size() function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_const_function__NegotiationProposal__to_accommodate,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_function__NegotiationProposal__to_accommodate,  // get(index) function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__fetch_function__NegotiationProposal__to_accommodate,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__assign_function__NegotiationProposal__to_accommodate,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__resize_function__NegotiationProposal__to_accommodate  // resize(index) function pointer
  },
  {
    "plan_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationProposal, plan_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "itinerary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationProposal, itinerary),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__size_function__NegotiationProposal__itinerary,  // size() function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_const_function__NegotiationProposal__itinerary,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__get_function__NegotiationProposal__itinerary,  // get(index) function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__fetch_function__NegotiationProposal__itinerary,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__assign_function__NegotiationProposal__itinerary,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__resize_function__NegotiationProposal__itinerary  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "NegotiationProposal",  // message name
  6,  // number of fields
  sizeof(rmf_traffic_msgs__msg__NegotiationProposal),
  false,  // has_any_key_member_
  rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_member_array,  // message members
  rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__msg__NegotiationProposal__get_type_hash,
  &rmf_traffic_msgs__msg__NegotiationProposal__get_type_description,
  &rmf_traffic_msgs__msg__NegotiationProposal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationProposal)() {
  rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationKey)();
  rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, Route)();
  if (!rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__NegotiationProposal__rosidl_typesupport_introspection_c__NegotiationProposal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
