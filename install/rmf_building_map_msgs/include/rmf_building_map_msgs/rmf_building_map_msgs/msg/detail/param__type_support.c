// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_building_map_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_building_map_msgs/msg/detail/param__rosidl_typesupport_introspection_c.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_building_map_msgs/msg/detail/param__functions.h"
#include "rmf_building_map_msgs/msg/detail/param__struct.h"


// Include directives for member types
// Member `name`
// Member `value_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__msg__Param__init(message_memory);
}

void rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_fini_function(void * message_memory)
{
  rmf_building_map_msgs__msg__Param__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_member_array[6] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Param, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Param, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value_int",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Param, value_int),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value_float",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Param, value_float),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Param, value_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value_bool",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Param, value_bool),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_members = {
  "rmf_building_map_msgs__msg",  // message namespace
  "Param",  // message name
  6,  // number of fields
  sizeof(rmf_building_map_msgs__msg__Param),
  false,  // has_any_key_member_
  rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_member_array,  // message members
  rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_type_support_handle = {
  0,
  &rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_members,
  get_message_typesupport_handle_function,
  &rmf_building_map_msgs__msg__Param__get_type_hash,
  &rmf_building_map_msgs__msg__Param__get_type_description,
  &rmf_building_map_msgs__msg__Param__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Param)() {
  if (!rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_type_support_handle.typesupport_identifier) {
    rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_building_map_msgs__msg__Param__rosidl_typesupport_introspection_c__Param_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
