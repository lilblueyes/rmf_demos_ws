// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/shape__functions.h"
#include "rmf_traffic_msgs/msg/detail/shape__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_traffic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Shape_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::Shape(_init);
}

void Shape_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::Shape *>(message_memory);
  typed_message->~Shape();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Shape_message_member_array[2] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::Shape, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::Shape, index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Shape_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "Shape",  // message name
  2,  // number of fields
  sizeof(rmf_traffic_msgs::msg::Shape),
  false,  // has_any_key_member_
  Shape_message_member_array,  // message members
  Shape_init_function,  // function to initialize message memory (memory has to be allocated)
  Shape_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Shape_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Shape_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__msg__Shape__get_type_hash,
  &rmf_traffic_msgs__msg__Shape__get_type_description,
  &rmf_traffic_msgs__msg__Shape__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::Shape>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::Shape_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, Shape)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::Shape_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
