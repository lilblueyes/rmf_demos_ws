// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_door_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_door_msgs/msg/door_request.hpp"


#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__TRAITS_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_door_msgs/msg/detail/door_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'requested_mode'
#include "rmf_door_msgs/msg/detail/door_mode__traits.hpp"

namespace rmf_door_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DoorRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: request_time
  {
    out << "request_time: ";
    to_flow_style_yaml(msg.request_time, out);
    out << ", ";
  }

  // member: requester_id
  {
    out << "requester_id: ";
    rosidl_generator_traits::value_to_yaml(msg.requester_id, out);
    out << ", ";
  }

  // member: door_name
  {
    out << "door_name: ";
    rosidl_generator_traits::value_to_yaml(msg.door_name, out);
    out << ", ";
  }

  // member: requested_mode
  {
    out << "requested_mode: ";
    to_flow_style_yaml(msg.requested_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoorRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_time:\n";
    to_block_style_yaml(msg.request_time, out, indentation + 2);
  }

  // member: requester_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requester_id: ";
    rosidl_generator_traits::value_to_yaml(msg.requester_id, out);
    out << "\n";
  }

  // member: door_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_name: ";
    rosidl_generator_traits::value_to_yaml(msg.door_name, out);
    out << "\n";
  }

  // member: requested_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_mode:\n";
    to_block_style_yaml(msg.requested_mode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoorRequest & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rmf_door_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_door_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_door_msgs::msg::DoorRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_door_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_door_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_door_msgs::msg::DoorRequest & msg)
{
  return rmf_door_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_door_msgs::msg::DoorRequest>()
{
  return "rmf_door_msgs::msg::DoorRequest";
}

template<>
inline const char * name<rmf_door_msgs::msg::DoorRequest>()
{
  return "rmf_door_msgs/msg/DoorRequest";
}

template<>
struct has_fixed_size<rmf_door_msgs::msg::DoorRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_door_msgs::msg::DoorRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_door_msgs::msg::DoorRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__TRAITS_HPP_
