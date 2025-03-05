// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_reservation_msgs:msg/Ticket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/ticket.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__TRAITS_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_reservation_msgs/msg/detail/ticket__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "rmf_reservation_msgs/msg/detail/request_header__traits.hpp"

namespace rmf_reservation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ticket & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ticket_id
  {
    out << "ticket_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ticket_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ticket & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: ticket_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ticket_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ticket_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ticket & msg, bool use_flow_style = false)
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
  const rmf_reservation_msgs::msg::Ticket & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_reservation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_reservation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_reservation_msgs::msg::Ticket & msg)
{
  return rmf_reservation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_reservation_msgs::msg::Ticket>()
{
  return "rmf_reservation_msgs::msg::Ticket";
}

template<>
inline const char * name<rmf_reservation_msgs::msg::Ticket>()
{
  return "rmf_reservation_msgs/msg/Ticket";
}

template<>
struct has_fixed_size<rmf_reservation_msgs::msg::Ticket>
  : std::integral_constant<bool, has_fixed_size<rmf_reservation_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<rmf_reservation_msgs::msg::Ticket>
  : std::integral_constant<bool, has_bounded_size<rmf_reservation_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<rmf_reservation_msgs::msg::Ticket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__TRAITS_HPP_
