// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_charger_msgs:msg/ChargerCancel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_charger_msgs/msg/detail/charger_cancel__functions.h"
#include "rmf_charger_msgs/msg/detail/charger_cancel__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_charger_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChargerCancel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_charger_msgs::msg::ChargerCancel(_init);
}

void ChargerCancel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_charger_msgs::msg::ChargerCancel *>(message_memory);
  typed_message->~ChargerCancel();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChargerCancel_message_member_array[2] = {
  {
    "charger_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs::msg::ChargerCancel, charger_name),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs::msg::ChargerCancel, request_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChargerCancel_message_members = {
  "rmf_charger_msgs::msg",  // message namespace
  "ChargerCancel",  // message name
  2,  // number of fields
  sizeof(rmf_charger_msgs::msg::ChargerCancel),
  false,  // has_any_key_member_
  ChargerCancel_message_member_array,  // message members
  ChargerCancel_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargerCancel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChargerCancel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChargerCancel_message_members,
  get_message_typesupport_handle_function,
  &rmf_charger_msgs__msg__ChargerCancel__get_type_hash,
  &rmf_charger_msgs__msg__ChargerCancel__get_type_description,
  &rmf_charger_msgs__msg__ChargerCancel__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_charger_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_charger_msgs::msg::ChargerCancel>()
{
  return &::rmf_charger_msgs::msg::rosidl_typesupport_introspection_cpp::ChargerCancel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_charger_msgs, msg, ChargerCancel)() {
  return &::rmf_charger_msgs::msg::rosidl_typesupport_introspection_cpp::ChargerCancel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
