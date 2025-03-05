// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_fleet_msgs:msg/SpeedLimitedLane.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__functions.h"
#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__struct.hpp"
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

void SpeedLimitedLane_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_fleet_msgs::msg::SpeedLimitedLane(_init);
}

void SpeedLimitedLane_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_fleet_msgs::msg::SpeedLimitedLane *>(message_memory);
  typed_message->~SpeedLimitedLane();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpeedLimitedLane_message_member_array[2] = {
  {
    "lane_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs::msg::SpeedLimitedLane, lane_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs::msg::SpeedLimitedLane, speed_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpeedLimitedLane_message_members = {
  "rmf_fleet_msgs::msg",  // message namespace
  "SpeedLimitedLane",  // message name
  2,  // number of fields
  sizeof(rmf_fleet_msgs::msg::SpeedLimitedLane),
  false,  // has_any_key_member_
  SpeedLimitedLane_message_member_array,  // message members
  SpeedLimitedLane_init_function,  // function to initialize message memory (memory has to be allocated)
  SpeedLimitedLane_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpeedLimitedLane_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpeedLimitedLane_message_members,
  get_message_typesupport_handle_function,
  &rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_hash,
  &rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_description,
  &rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_fleet_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_fleet_msgs::msg::SpeedLimitedLane>()
{
  return &::rmf_fleet_msgs::msg::rosidl_typesupport_introspection_cpp::SpeedLimitedLane_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_fleet_msgs, msg, SpeedLimitedLane)() {
  return &::rmf_fleet_msgs::msg::rosidl_typesupport_introspection_cpp::SpeedLimitedLane_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
