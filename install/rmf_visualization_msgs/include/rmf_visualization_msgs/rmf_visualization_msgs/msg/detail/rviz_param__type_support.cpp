// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_visualization_msgs:msg/RvizParam.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_visualization_msgs/msg/detail/rviz_param__functions.h"
#include "rmf_visualization_msgs/msg/detail/rviz_param__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_visualization_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RvizParam_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_visualization_msgs::msg::RvizParam(_init);
}

void RvizParam_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_visualization_msgs::msg::RvizParam *>(message_memory);
  typed_message->~RvizParam();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RvizParam_message_member_array[3] = {
  {
    "map_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_visualization_msgs::msg::RvizParam, map_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "query_duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_visualization_msgs::msg::RvizParam, query_duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_visualization_msgs::msg::RvizParam, start_duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RvizParam_message_members = {
  "rmf_visualization_msgs::msg",  // message namespace
  "RvizParam",  // message name
  3,  // number of fields
  sizeof(rmf_visualization_msgs::msg::RvizParam),
  false,  // has_any_key_member_
  RvizParam_message_member_array,  // message members
  RvizParam_init_function,  // function to initialize message memory (memory has to be allocated)
  RvizParam_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RvizParam_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RvizParam_message_members,
  get_message_typesupport_handle_function,
  &rmf_visualization_msgs__msg__RvizParam__get_type_hash,
  &rmf_visualization_msgs__msg__RvizParam__get_type_description,
  &rmf_visualization_msgs__msg__RvizParam__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_visualization_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_visualization_msgs::msg::RvizParam>()
{
  return &::rmf_visualization_msgs::msg::rosidl_typesupport_introspection_cpp::RvizParam_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_visualization_msgs, msg, RvizParam)() {
  return &::rmf_visualization_msgs::msg::rosidl_typesupport_introspection_cpp::RvizParam_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
