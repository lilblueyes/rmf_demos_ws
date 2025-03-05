// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_task_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_task_msgs/msg/detail/alert__functions.h"
#include "rmf_task_msgs/msg/detail/alert__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_task_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Alert_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_task_msgs::msg::Alert(_init);
}

void Alert_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_task_msgs::msg::Alert *>(message_memory);
  typed_message->~Alert();
}

size_t size_function__Alert__responses_available(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Alert__responses_available(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Alert__responses_available(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Alert__responses_available(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Alert__responses_available(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Alert__responses_available(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Alert__responses_available(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Alert__responses_available(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Alert__alert_parameters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_task_msgs::msg::AlertParameter> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Alert__alert_parameters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_task_msgs::msg::AlertParameter> *>(untyped_member);
  return &member[index];
}

void * get_function__Alert__alert_parameters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_task_msgs::msg::AlertParameter> *>(untyped_member);
  return &member[index];
}

void fetch_function__Alert__alert_parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_task_msgs::msg::AlertParameter *>(
    get_const_function__Alert__alert_parameters(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_task_msgs::msg::AlertParameter *>(untyped_value);
  value = item;
}

void assign_function__Alert__alert_parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_task_msgs::msg::AlertParameter *>(
    get_function__Alert__alert_parameters(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_task_msgs::msg::AlertParameter *>(untyped_value);
  item = value;
}

void resize_function__Alert__alert_parameters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_task_msgs::msg::AlertParameter> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Alert_message_member_array[9] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Alert, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "title",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Alert, title),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "subtitle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Alert, subtitle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Alert, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "display",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Alert, display),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tier",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Alert, tier),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "responses_available",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Alert, responses_available),  // bytes offset in struct
    nullptr,  // default value
    size_function__Alert__responses_available,  // size() function pointer
    get_const_function__Alert__responses_available,  // get_const(index) function pointer
    get_function__Alert__responses_available,  // get(index) function pointer
    fetch_function__Alert__responses_available,  // fetch(index, &value) function pointer
    assign_function__Alert__responses_available,  // assign(index, value) function pointer
    resize_function__Alert__responses_available  // resize(index) function pointer
  },
  {
    "alert_parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_task_msgs::msg::AlertParameter>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Alert, alert_parameters),  // bytes offset in struct
    nullptr,  // default value
    size_function__Alert__alert_parameters,  // size() function pointer
    get_const_function__Alert__alert_parameters,  // get_const(index) function pointer
    get_function__Alert__alert_parameters,  // get(index) function pointer
    fetch_function__Alert__alert_parameters,  // fetch(index, &value) function pointer
    assign_function__Alert__alert_parameters,  // assign(index, value) function pointer
    resize_function__Alert__alert_parameters  // resize(index) function pointer
  },
  {
    "task_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Alert, task_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Alert_message_members = {
  "rmf_task_msgs::msg",  // message namespace
  "Alert",  // message name
  9,  // number of fields
  sizeof(rmf_task_msgs::msg::Alert),
  false,  // has_any_key_member_
  Alert_message_member_array,  // message members
  Alert_init_function,  // function to initialize message memory (memory has to be allocated)
  Alert_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Alert_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Alert_message_members,
  get_message_typesupport_handle_function,
  &rmf_task_msgs__msg__Alert__get_type_hash,
  &rmf_task_msgs__msg__Alert__get_type_description,
  &rmf_task_msgs__msg__Alert__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_task_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_task_msgs::msg::Alert>()
{
  return &::rmf_task_msgs::msg::rosidl_typesupport_introspection_cpp::Alert_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_task_msgs, msg, Alert)() {
  return &::rmf_task_msgs::msg::rosidl_typesupport_introspection_cpp::Alert_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
