// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_reservation_msgs:msg/ReleaseRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/release_request.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__RELEASE_REQUEST__TRAITS_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__RELEASE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_reservation_msgs/msg/detail/release_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ticket'
#include "rmf_reservation_msgs/msg/detail/ticket__traits.hpp"

namespace rmf_reservation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReleaseRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: ticket
  {
    out << "ticket: ";
    to_flow_style_yaml(msg.ticket, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReleaseRequest & msg,
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

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReleaseRequest & msg, bool use_flow_style = false)
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
  const rmf_reservation_msgs::msg::ReleaseRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_reservation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_reservation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_reservation_msgs::msg::ReleaseRequest & msg)
{
  return rmf_reservation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_reservation_msgs::msg::ReleaseRequest>()
{
  return "rmf_reservation_msgs::msg::ReleaseRequest";
}

template<>
inline const char * name<rmf_reservation_msgs::msg::ReleaseRequest>()
{
  return "rmf_reservation_msgs/msg/ReleaseRequest";
}

template<>
struct has_fixed_size<rmf_reservation_msgs::msg::ReleaseRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_reservation_msgs::msg::ReleaseRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_reservation_msgs::msg::ReleaseRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__RELEASE_REQUEST__TRAITS_HPP_
