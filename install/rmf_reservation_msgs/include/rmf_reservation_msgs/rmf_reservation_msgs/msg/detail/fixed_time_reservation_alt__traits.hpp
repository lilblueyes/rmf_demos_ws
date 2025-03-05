// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_reservation_msgs:msg/FixedTimeReservationAlt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/fixed_time_reservation_alt.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FIXED_TIME_RESERVATION_ALT__TRAITS_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FIXED_TIME_RESERVATION_ALT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_reservation_msgs/msg/detail/fixed_time_reservation_alt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rmf_reservation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FixedTimeReservationAlt & msg,
  std::ostream & out)
{
  out << "{";
  // member: resource_name
  {
    out << "resource_name: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_name, out);
    out << ", ";
  }

  // member: cost
  {
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << ", ";
  }

  // member: start_time
  {
    out << "start_time: ";
    to_flow_style_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: has_end
  {
    out << "has_end: ";
    rosidl_generator_traits::value_to_yaml(msg.has_end, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FixedTimeReservationAlt & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resource_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource_name: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_name, out);
    out << "\n";
  }

  // member: cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << "\n";
  }

  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time:\n";
    to_block_style_yaml(msg.start_time, out, indentation + 2);
  }

  // member: has_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_end: ";
    rosidl_generator_traits::value_to_yaml(msg.has_end, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FixedTimeReservationAlt & msg, bool use_flow_style = false)
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
  const rmf_reservation_msgs::msg::FixedTimeReservationAlt & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_reservation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_reservation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_reservation_msgs::msg::FixedTimeReservationAlt & msg)
{
  return rmf_reservation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_reservation_msgs::msg::FixedTimeReservationAlt>()
{
  return "rmf_reservation_msgs::msg::FixedTimeReservationAlt";
}

template<>
inline const char * name<rmf_reservation_msgs::msg::FixedTimeReservationAlt>()
{
  return "rmf_reservation_msgs/msg/FixedTimeReservationAlt";
}

template<>
struct has_fixed_size<rmf_reservation_msgs::msg::FixedTimeReservationAlt>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_reservation_msgs::msg::FixedTimeReservationAlt>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_reservation_msgs::msg::FixedTimeReservationAlt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FIXED_TIME_RESERVATION_ALT__TRAITS_HPP_
