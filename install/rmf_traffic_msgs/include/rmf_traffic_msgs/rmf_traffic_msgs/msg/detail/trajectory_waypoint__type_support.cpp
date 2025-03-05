// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/TrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__functions.h"
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__struct.hpp"
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

void TrajectoryWaypoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::TrajectoryWaypoint(_init);
}

void TrajectoryWaypoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::TrajectoryWaypoint *>(message_memory);
  typed_message->~TrajectoryWaypoint();
}

size_t size_function__TrajectoryWaypoint__position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__TrajectoryWaypoint__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryWaypoint__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryWaypoint__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryWaypoint__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryWaypoint__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryWaypoint__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__TrajectoryWaypoint__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__TrajectoryWaypoint__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryWaypoint__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryWaypoint__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryWaypoint__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryWaypoint__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryWaypoint__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryWaypoint_message_member_array[3] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::TrajectoryWaypoint, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::TrajectoryWaypoint, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryWaypoint__position,  // size() function pointer
    get_const_function__TrajectoryWaypoint__position,  // get_const(index) function pointer
    get_function__TrajectoryWaypoint__position,  // get(index) function pointer
    fetch_function__TrajectoryWaypoint__position,  // fetch(index, &value) function pointer
    assign_function__TrajectoryWaypoint__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::TrajectoryWaypoint, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryWaypoint__velocity,  // size() function pointer
    get_const_function__TrajectoryWaypoint__velocity,  // get_const(index) function pointer
    get_function__TrajectoryWaypoint__velocity,  // get(index) function pointer
    fetch_function__TrajectoryWaypoint__velocity,  // fetch(index, &value) function pointer
    assign_function__TrajectoryWaypoint__velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryWaypoint_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "TrajectoryWaypoint",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs::msg::TrajectoryWaypoint),
  false,  // has_any_key_member_
  TrajectoryWaypoint_message_member_array,  // message members
  TrajectoryWaypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryWaypoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryWaypoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryWaypoint_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_hash,
  &rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_description,
  &rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::TrajectoryWaypoint>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectoryWaypoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, TrajectoryWaypoint)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectoryWaypoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
