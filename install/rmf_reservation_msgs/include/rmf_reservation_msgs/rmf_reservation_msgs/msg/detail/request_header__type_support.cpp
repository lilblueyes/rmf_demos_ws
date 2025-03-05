// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_reservation_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_reservation_msgs/msg/detail/request_header__functions.h"
#include "rmf_reservation_msgs/msg/detail/request_header__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_reservation_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RequestHeader_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_reservation_msgs::msg::RequestHeader(_init);
}

void RequestHeader_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_reservation_msgs::msg::RequestHeader *>(message_memory);
  typed_message->~RequestHeader();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RequestHeader_message_member_array[3] = {
  {
    "robot_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs::msg::RequestHeader, robot_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fleet_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs::msg::RequestHeader, fleet_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs::msg::RequestHeader, request_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RequestHeader_message_members = {
  "rmf_reservation_msgs::msg",  // message namespace
  "RequestHeader",  // message name
  3,  // number of fields
  sizeof(rmf_reservation_msgs::msg::RequestHeader),
  false,  // has_any_key_member_
  RequestHeader_message_member_array,  // message members
  RequestHeader_init_function,  // function to initialize message memory (memory has to be allocated)
  RequestHeader_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RequestHeader_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RequestHeader_message_members,
  get_message_typesupport_handle_function,
  &rmf_reservation_msgs__msg__RequestHeader__get_type_hash,
  &rmf_reservation_msgs__msg__RequestHeader__get_type_description,
  &rmf_reservation_msgs__msg__RequestHeader__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_reservation_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_reservation_msgs::msg::RequestHeader>()
{
  return &::rmf_reservation_msgs::msg::rosidl_typesupport_introspection_cpp::RequestHeader_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_reservation_msgs, msg, RequestHeader)() {
  return &::rmf_reservation_msgs::msg::rosidl_typesupport_introspection_cpp::RequestHeader_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
