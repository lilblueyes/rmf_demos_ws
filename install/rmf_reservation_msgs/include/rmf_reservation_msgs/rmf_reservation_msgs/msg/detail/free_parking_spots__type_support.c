// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_reservation_msgs:msg/FreeParkingSpots.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_reservation_msgs/msg/detail/free_parking_spots__rosidl_typesupport_introspection_c.h"
#include "rmf_reservation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_reservation_msgs/msg/detail/free_parking_spots__functions.h"
#include "rmf_reservation_msgs/msg/detail/free_parking_spots__struct.h"


// Include directives for member types
// Member `spots`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_reservation_msgs__msg__FreeParkingSpots__init(message_memory);
}

void rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_fini_function(void * message_memory)
{
  rmf_reservation_msgs__msg__FreeParkingSpots__fini(message_memory);
}

size_t rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__size_function__FreeParkingSpots__spots(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__get_const_function__FreeParkingSpots__spots(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__get_function__FreeParkingSpots__spots(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__fetch_function__FreeParkingSpots__spots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__get_const_function__FreeParkingSpots__spots(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__assign_function__FreeParkingSpots__spots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__get_function__FreeParkingSpots__spots(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__resize_function__FreeParkingSpots__spots(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_message_member_array[1] = {
  {
    "spots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs__msg__FreeParkingSpots, spots),  // bytes offset in struct
    NULL,  // default value
    rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__size_function__FreeParkingSpots__spots,  // size() function pointer
    rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__get_const_function__FreeParkingSpots__spots,  // get_const(index) function pointer
    rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__get_function__FreeParkingSpots__spots,  // get(index) function pointer
    rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__fetch_function__FreeParkingSpots__spots,  // fetch(index, &value) function pointer
    rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__assign_function__FreeParkingSpots__spots,  // assign(index, value) function pointer
    rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__resize_function__FreeParkingSpots__spots  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_message_members = {
  "rmf_reservation_msgs__msg",  // message namespace
  "FreeParkingSpots",  // message name
  1,  // number of fields
  sizeof(rmf_reservation_msgs__msg__FreeParkingSpots),
  false,  // has_any_key_member_
  rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_message_member_array,  // message members
  rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_message_type_support_handle = {
  0,
  &rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_message_members,
  get_message_typesupport_handle_function,
  &rmf_reservation_msgs__msg__FreeParkingSpots__get_type_hash,
  &rmf_reservation_msgs__msg__FreeParkingSpots__get_type_description,
  &rmf_reservation_msgs__msg__FreeParkingSpots__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_reservation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_reservation_msgs, msg, FreeParkingSpots)() {
  if (!rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_message_type_support_handle.typesupport_identifier) {
    rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_reservation_msgs__msg__FreeParkingSpots__rosidl_typesupport_introspection_c__FreeParkingSpots_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
