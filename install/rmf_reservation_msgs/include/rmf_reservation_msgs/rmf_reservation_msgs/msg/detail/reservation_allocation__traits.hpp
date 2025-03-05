// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_reservation_msgs:msg/ReservationAllocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/reservation_allocation.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__TRAITS_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_reservation_msgs/msg/detail/reservation_allocation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ticket'
#include "rmf_reservation_msgs/msg/detail/ticket__traits.hpp"

namespace rmf_reservation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReservationAllocation & msg,
  std::ostream & out)
{
  out << "{";
  // member: ticket
  {
    out << "ticket: ";
    to_flow_style_yaml(msg.ticket, out);
    out << ", ";
  }

  // member: instruction_type
  {
    out << "instruction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction_type, out);
    out << ", ";
  }

  // member: chosen_alternative
  {
    out << "chosen_alternative: ";
    rosidl_generator_traits::value_to_yaml(msg.chosen_alternative, out);
    out << ", ";
  }

  // member: resource
  {
    out << "resource: ";
    rosidl_generator_traits::value_to_yaml(msg.resource, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReservationAllocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ticket
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ticket:\n";
    to_block_style_yaml(msg.ticket, out, indentation + 2);
  }

  // member: instruction_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instruction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction_type, out);
    out << "\n";
  }

  // member: chosen_alternative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chosen_alternative: ";
    rosidl_generator_traits::value_to_yaml(msg.chosen_alternative, out);
    out << "\n";
  }

  // member: resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource: ";
    rosidl_generator_traits::value_to_yaml(msg.resource, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReservationAllocation & msg, bool use_flow_style = false)
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
  const rmf_reservation_msgs::msg::ReservationAllocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_reservation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_reservation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_reservation_msgs::msg::ReservationAllocation & msg)
{
  return rmf_reservation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_reservation_msgs::msg::ReservationAllocation>()
{
  return "rmf_reservation_msgs::msg::ReservationAllocation";
}

template<>
inline const char * name<rmf_reservation_msgs::msg::ReservationAllocation>()
{
  return "rmf_reservation_msgs/msg/ReservationAllocation";
}

template<>
struct has_fixed_size<rmf_reservation_msgs::msg::ReservationAllocation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_reservation_msgs::msg::ReservationAllocation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_reservation_msgs::msg::ReservationAllocation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__TRAITS_HPP_
