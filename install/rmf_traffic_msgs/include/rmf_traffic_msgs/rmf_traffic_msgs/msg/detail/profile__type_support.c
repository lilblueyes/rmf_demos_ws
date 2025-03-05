// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/Profile.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/profile__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/profile__functions.h"
#include "rmf_traffic_msgs/msg/detail/profile__struct.h"


// Include directives for member types
// Member `footprint`
// Member `vicinity`
#include "rmf_traffic_msgs/msg/convex_shape.h"
// Member `footprint`
// Member `vicinity`
#include "rmf_traffic_msgs/msg/detail/convex_shape__rosidl_typesupport_introspection_c.h"
// Member `shape_context`
#include "rmf_traffic_msgs/msg/convex_shape_context.h"
// Member `shape_context`
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__Profile__init(message_memory);
}

void rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__Profile__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_member_array[3] = {
  {
    "footprint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Profile, footprint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vicinity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Profile, vicinity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape_context",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Profile, shape_context),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "Profile",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs__msg__Profile),
  false,  // has_any_key_member_
  rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_member_array,  // message members
  rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__msg__Profile__get_type_hash,
  &rmf_traffic_msgs__msg__Profile__get_type_description,
  &rmf_traffic_msgs__msg__Profile__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, Profile)() {
  rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ConvexShape)();
  rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ConvexShape)();
  rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ConvexShapeContext)();
  if (!rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__Profile__rosidl_typesupport_introspection_c__Profile_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
