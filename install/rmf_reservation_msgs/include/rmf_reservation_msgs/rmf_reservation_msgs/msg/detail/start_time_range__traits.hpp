// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_reservation_msgs:msg/StartTimeRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/start_time_range.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__TRAITS_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_reservation_msgs/msg/detail/start_time_range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'earliest_start_time'
// Member 'latest_start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_reservation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StartTimeRange & msg,
  std::ostream & out)
{
  out << "{";
  // member: earliest_start_time
  {
    out << "earliest_start_time: ";
    to_flow_style_yaml(msg.earliest_start_time, out);
    out << ", ";
  }

  // member: has_earliest_start_time
  {
    out << "has_earliest_start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.has_earliest_start_time, out);
    out << ", ";
  }

  // member: latest_start_time
  {
    out << "latest_start_time: ";
    to_flow_style_yaml(msg.latest_start_time, out);
    out << ", ";
  }

  // member: has_latest_start_time
  {
    out << "has_latest_start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.has_latest_start_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartTimeRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: earliest_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "earliest_start_time:\n";
    to_block_style_yaml(msg.earliest_start_time, out, indentation + 2);
  }

  // member: has_earliest_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_earliest_start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.has_earliest_start_time, out);
    out << "\n";
  }

  // member: latest_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_start_time:\n";
    to_block_style_yaml(msg.latest_start_time, out, indentation + 2);
  }

  // member: has_latest_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_latest_start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.has_latest_start_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartTimeRange & msg, bool use_flow_style = false)
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
  const rmf_reservation_msgs::msg::StartTimeRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_reservation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_reservation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_reservation_msgs::msg::StartTimeRange & msg)
{
  return rmf_reservation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_reservation_msgs::msg::StartTimeRange>()
{
  return "rmf_reservation_msgs::msg::StartTimeRange";
}

template<>
inline const char * name<rmf_reservation_msgs::msg::StartTimeRange>()
{
  return "rmf_reservation_msgs/msg/StartTimeRange";
}

template<>
struct has_fixed_size<rmf_reservation_msgs::msg::StartTimeRange>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rmf_reservation_msgs::msg::StartTimeRange>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rmf_reservation_msgs::msg::StartTimeRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__TRAITS_HPP_
