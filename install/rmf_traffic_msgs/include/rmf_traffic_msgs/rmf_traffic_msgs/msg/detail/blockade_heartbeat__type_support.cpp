// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/BlockadeHeartbeat.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/blockade_heartbeat__functions.h"
#include "rmf_traffic_msgs/msg/detail/blockade_heartbeat__struct.hpp"
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

void BlockadeHeartbeat_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::BlockadeHeartbeat(_init);
}

void BlockadeHeartbeat_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::BlockadeHeartbeat *>(message_memory);
  typed_message->~BlockadeHeartbeat();
}

size_t size_function__BlockadeHeartbeat__statuses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::BlockadeStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BlockadeHeartbeat__statuses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::BlockadeStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__BlockadeHeartbeat__statuses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::BlockadeStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__BlockadeHeartbeat__statuses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::BlockadeStatus *>(
    get_const_function__BlockadeHeartbeat__statuses(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::BlockadeStatus *>(untyped_value);
  value = item;
}

void assign_function__BlockadeHeartbeat__statuses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::BlockadeStatus *>(
    get_function__BlockadeHeartbeat__statuses(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::BlockadeStatus *>(untyped_value);
  item = value;
}

void resize_function__BlockadeHeartbeat__statuses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::BlockadeStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BlockadeHeartbeat_message_member_array[2] = {
  {
    "statuses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::BlockadeStatus>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::BlockadeHeartbeat, statuses),  // bytes offset in struct
    nullptr,  // default value
    size_function__BlockadeHeartbeat__statuses,  // size() function pointer
    get_const_function__BlockadeHeartbeat__statuses,  // get_const(index) function pointer
    get_function__BlockadeHeartbeat__statuses,  // get(index) function pointer
    fetch_function__BlockadeHeartbeat__statuses,  // fetch(index, &value) function pointer
    assign_function__BlockadeHeartbeat__statuses,  // assign(index, value) function pointer
    resize_function__BlockadeHeartbeat__statuses  // resize(index) function pointer
  },
  {
    "has_gridlock",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::BlockadeHeartbeat, has_gridlock),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BlockadeHeartbeat_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "BlockadeHeartbeat",  // message name
  2,  // number of fields
  sizeof(rmf_traffic_msgs::msg::BlockadeHeartbeat),
  false,  // has_any_key_member_
  BlockadeHeartbeat_message_member_array,  // message members
  BlockadeHeartbeat_init_function,  // function to initialize message memory (memory has to be allocated)
  BlockadeHeartbeat_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BlockadeHeartbeat_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BlockadeHeartbeat_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__msg__BlockadeHeartbeat__get_type_hash,
  &rmf_traffic_msgs__msg__BlockadeHeartbeat__get_type_description,
  &rmf_traffic_msgs__msg__BlockadeHeartbeat__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::BlockadeHeartbeat>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::BlockadeHeartbeat_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, BlockadeHeartbeat)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::BlockadeHeartbeat_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
