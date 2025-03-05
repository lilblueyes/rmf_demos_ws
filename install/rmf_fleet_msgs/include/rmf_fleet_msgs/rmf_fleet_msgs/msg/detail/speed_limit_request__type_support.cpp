// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_fleet_msgs:msg/SpeedLimitRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_fleet_msgs/msg/detail/speed_limit_request__functions.h"
#include "rmf_fleet_msgs/msg/detail/speed_limit_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_fleet_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SpeedLimitRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_fleet_msgs::msg::SpeedLimitRequest(_init);
}

void SpeedLimitRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_fleet_msgs::msg::SpeedLimitRequest *>(message_memory);
  typed_message->~SpeedLimitRequest();
}

size_t size_function__SpeedLimitRequest__speed_limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_fleet_msgs::msg::SpeedLimitedLane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpeedLimitRequest__speed_limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_fleet_msgs::msg::SpeedLimitedLane> *>(untyped_member);
  return &member[index];
}

void * get_function__SpeedLimitRequest__speed_limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_fleet_msgs::msg::SpeedLimitedLane> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpeedLimitRequest__speed_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_fleet_msgs::msg::SpeedLimitedLane *>(
    get_const_function__SpeedLimitRequest__speed_limits(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_fleet_msgs::msg::SpeedLimitedLane *>(untyped_value);
  value = item;
}

void assign_function__SpeedLimitRequest__speed_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_fleet_msgs::msg::SpeedLimitedLane *>(
    get_function__SpeedLimitRequest__speed_limits(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_fleet_msgs::msg::SpeedLimitedLane *>(untyped_value);
  item = value;
}

void resize_function__SpeedLimitRequest__speed_limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_fleet_msgs::msg::SpeedLimitedLane> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpeedLimitRequest__remove_limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpeedLimitRequest__remove_limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SpeedLimitRequest__remove_limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpeedLimitRequest__remove_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__SpeedLimitRequest__remove_limits(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__SpeedLimitRequest__remove_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__SpeedLimitRequest__remove_limits(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__SpeedLimitRequest__remove_limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpeedLimitRequest_message_member_array[3] = {
  {
    "fleet_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs::msg::SpeedLimitRequest, fleet_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_fleet_msgs::msg::SpeedLimitedLane>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs::msg::SpeedLimitRequest, speed_limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpeedLimitRequest__speed_limits,  // size() function pointer
    get_const_function__SpeedLimitRequest__speed_limits,  // get_const(index) function pointer
    get_function__SpeedLimitRequest__speed_limits,  // get(index) function pointer
    fetch_function__SpeedLimitRequest__speed_limits,  // fetch(index, &value) function pointer
    assign_function__SpeedLimitRequest__speed_limits,  // assign(index, value) function pointer
    resize_function__SpeedLimitRequest__speed_limits  // resize(index) function pointer
  },
  {
    "remove_limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs::msg::SpeedLimitRequest, remove_limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpeedLimitRequest__remove_limits,  // size() function pointer
    get_const_function__SpeedLimitRequest__remove_limits,  // get_const(index) function pointer
    get_function__SpeedLimitRequest__remove_limits,  // get(index) function pointer
    fetch_function__SpeedLimitRequest__remove_limits,  // fetch(index, &value) function pointer
    assign_function__SpeedLimitRequest__remove_limits,  // assign(index, value) function pointer
    resize_function__SpeedLimitRequest__remove_limits  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpeedLimitRequest_message_members = {
  "rmf_fleet_msgs::msg",  // message namespace
  "SpeedLimitRequest",  // message name
  3,  // number of fields
  sizeof(rmf_fleet_msgs::msg::SpeedLimitRequest),
  false,  // has_any_key_member_
  SpeedLimitRequest_message_member_array,  // message members
  SpeedLimitRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  SpeedLimitRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpeedLimitRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpeedLimitRequest_message_members,
  get_message_typesupport_handle_function,
  &rmf_fleet_msgs__msg__SpeedLimitRequest__get_type_hash,
  &rmf_fleet_msgs__msg__SpeedLimitRequest__get_type_description,
  &rmf_fleet_msgs__msg__SpeedLimitRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_fleet_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_fleet_msgs::msg::SpeedLimitRequest>()
{
  return &::rmf_fleet_msgs::msg::rosidl_typesupport_introspection_cpp::SpeedLimitRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_fleet_msgs, msg, SpeedLimitRequest)() {
  return &::rmf_fleet_msgs::msg::rosidl_typesupport_introspection_cpp::SpeedLimitRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
