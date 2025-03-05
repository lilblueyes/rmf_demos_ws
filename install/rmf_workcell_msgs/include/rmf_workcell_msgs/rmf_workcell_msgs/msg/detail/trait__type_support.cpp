// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_workcell_msgs:msg/Trait.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_workcell_msgs/msg/detail/trait__functions.h"
#include "rmf_workcell_msgs/msg/detail/trait__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_workcell_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Trait_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_workcell_msgs::msg::Trait(_init);
}

void Trait_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_workcell_msgs::msg::Trait *>(message_memory);
  typed_message->~Trait();
}

size_t size_function__Trait__value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Trait__value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Trait__value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Trait__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Trait__value(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Trait__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Trait__value(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Trait__value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Trait_message_member_array[2] = {
  {
    "key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::Trait, key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::Trait, value),  // bytes offset in struct
    nullptr,  // default value
    size_function__Trait__value,  // size() function pointer
    get_const_function__Trait__value,  // get_const(index) function pointer
    get_function__Trait__value,  // get(index) function pointer
    fetch_function__Trait__value,  // fetch(index, &value) function pointer
    assign_function__Trait__value,  // assign(index, value) function pointer
    resize_function__Trait__value  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Trait_message_members = {
  "rmf_workcell_msgs::msg",  // message namespace
  "Trait",  // message name
  2,  // number of fields
  sizeof(rmf_workcell_msgs::msg::Trait),
  false,  // has_any_key_member_
  Trait_message_member_array,  // message members
  Trait_init_function,  // function to initialize message memory (memory has to be allocated)
  Trait_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Trait_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Trait_message_members,
  get_message_typesupport_handle_function,
  &rmf_workcell_msgs__msg__Trait__get_type_hash,
  &rmf_workcell_msgs__msg__Trait__get_type_description,
  &rmf_workcell_msgs__msg__Trait__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_workcell_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_workcell_msgs::msg::Trait>()
{
  return &::rmf_workcell_msgs::msg::rosidl_typesupport_introspection_cpp::Trait_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_workcell_msgs, msg, Trait)() {
  return &::rmf_workcell_msgs::msg::rosidl_typesupport_introspection_cpp::Trait_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
