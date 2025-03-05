// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_reservation_msgs:msg/ClaimRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/claim_request.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__TRAITS_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_reservation_msgs/msg/detail/claim_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ticket'
#include "rmf_reservation_msgs/msg/detail/ticket__traits.hpp"

namespace rmf_reservation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClaimRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: ticket
  {
    out << "ticket: ";
    to_flow_style_yaml(msg.ticket, out);
    out << ", ";
  }

  // member: wait_points
  {
    if (msg.wait_points.size() == 0) {
      out << "wait_points: []";
    } else {
      out << "wait_points: [";
      size_t pending_items = msg.wait_points.size();
      for (auto item : msg.wait_points) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClaimRequest & msg,
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

  // member: wait_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wait_points.size() == 0) {
      out << "wait_points: []\n";
    } else {
      out << "wait_points:\n";
      for (auto item : msg.wait_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClaimRequest & msg, bool use_flow_style = false)
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
  const rmf_reservation_msgs::msg::ClaimRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_reservation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_reservation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_reservation_msgs::msg::ClaimRequest & msg)
{
  return rmf_reservation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_reservation_msgs::msg::ClaimRequest>()
{
  return "rmf_reservation_msgs::msg::ClaimRequest";
}

template<>
inline const char * name<rmf_reservation_msgs::msg::ClaimRequest>()
{
  return "rmf_reservation_msgs/msg/ClaimRequest";
}

template<>
struct has_fixed_size<rmf_reservation_msgs::msg::ClaimRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_reservation_msgs::msg::ClaimRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_reservation_msgs::msg::ClaimRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__TRAITS_HPP_
