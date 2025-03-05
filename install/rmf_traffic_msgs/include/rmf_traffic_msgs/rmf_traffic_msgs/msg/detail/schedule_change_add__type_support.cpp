// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAdd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__struct.hpp"
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

void ScheduleChangeAdd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::ScheduleChangeAdd(_init);
}

void ScheduleChangeAdd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::ScheduleChangeAdd *>(message_memory);
  typed_message->~ScheduleChangeAdd();
}

size_t size_function__ScheduleChangeAdd__items(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::ScheduleChangeAddItem> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ScheduleChangeAdd__items(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::ScheduleChangeAddItem> *>(untyped_member);
  return &member[index];
}

void * get_function__ScheduleChangeAdd__items(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::ScheduleChangeAddItem> *>(untyped_member);
  return &member[index];
}

void fetch_function__ScheduleChangeAdd__items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::ScheduleChangeAddItem *>(
    get_const_function__ScheduleChangeAdd__items(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::ScheduleChangeAddItem *>(untyped_value);
  value = item;
}

void assign_function__ScheduleChangeAdd__items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::ScheduleChangeAddItem *>(
    get_function__ScheduleChangeAdd__items(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::ScheduleChangeAddItem *>(untyped_value);
  item = value;
}

void resize_function__ScheduleChangeAdd__items(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::ScheduleChangeAddItem> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ScheduleChangeAdd_message_member_array[2] = {
  {
    "plan_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleChangeAdd, plan_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "items",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleChangeAddItem>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleChangeAdd, items),  // bytes offset in struct
    nullptr,  // default value
    size_function__ScheduleChangeAdd__items,  // size() function pointer
    get_const_function__ScheduleChangeAdd__items,  // get_const(index) function pointer
    get_function__ScheduleChangeAdd__items,  // get(index) function pointer
    fetch_function__ScheduleChangeAdd__items,  // fetch(index, &value) function pointer
    assign_function__ScheduleChangeAdd__items,  // assign(index, value) function pointer
    resize_function__ScheduleChangeAdd__items  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ScheduleChangeAdd_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "ScheduleChangeAdd",  // message name
  2,  // number of fields
  sizeof(rmf_traffic_msgs::msg::ScheduleChangeAdd),
  false,  // has_any_key_member_
  ScheduleChangeAdd_message_member_array,  // message members
  ScheduleChangeAdd_init_function,  // function to initialize message memory (memory has to be allocated)
  ScheduleChangeAdd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ScheduleChangeAdd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ScheduleChangeAdd_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__msg__ScheduleChangeAdd__get_type_hash,
  &rmf_traffic_msgs__msg__ScheduleChangeAdd__get_type_description,
  &rmf_traffic_msgs__msg__ScheduleChangeAdd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleChangeAdd>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleChangeAdd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, ScheduleChangeAdd)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleChangeAdd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
