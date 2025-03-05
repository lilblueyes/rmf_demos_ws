// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_reservation_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/request_header.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__TRAITS_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_reservation_msgs/msg/detail/request_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_reservation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RequestHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: fleet_name
  {
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RequestHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: fleet_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << "\n";
  }

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RequestHeader & msg, bool use_flow_style = false)
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

}  // namespace rmf_reservation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_reservation_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_reservation_msgs::msg::RequestHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_reservation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_reservation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_reservation_msgs::msg::RequestHeader & msg)
{
  return rmf_reservation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_reservation_msgs::msg::RequestHeader>()
{
  return "rmf_reservation_msgs::msg::RequestHeader";
}

template<>
inline const char * name<rmf_reservation_msgs::msg::RequestHeader>()
{
  return "rmf_reservation_msgs/msg/RequestHeader";
}

template<>
struct has_fixed_size<rmf_reservation_msgs::msg::RequestHeader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_reservation_msgs::msg::RequestHeader>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_reservation_msgs::msg::RequestHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__TRAITS_HPP_
