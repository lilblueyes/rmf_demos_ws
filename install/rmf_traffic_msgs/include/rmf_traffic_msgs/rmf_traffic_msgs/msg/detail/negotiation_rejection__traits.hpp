// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationRejection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/msg/negotiation_rejection.hpp"


#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'table'
#include "rmf_traffic_msgs/msg/detail/negotiation_key__traits.hpp"
// Member 'alternatives'
#include "rmf_traffic_msgs/msg/detail/itinerary__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NegotiationRejection & msg,
  std::ostream & out)
{
  out << "{";
  // member: conflict_version
  {
    out << "conflict_version: ";
    rosidl_generator_traits::value_to_yaml(msg.conflict_version, out);
    out << ", ";
  }

  // member: table
  {
    if (msg.table.size() == 0) {
      out << "table: []";
    } else {
      out << "table: [";
      size_t pending_items = msg.table.size();
      for (auto item : msg.table) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rejected_by
  {
    out << "rejected_by: ";
    rosidl_generator_traits::value_to_yaml(msg.rejected_by, out);
    out << ", ";
  }

  // member: alternatives
  {
    if (msg.alternatives.size() == 0) {
      out << "alternatives: []";
    } else {
      out << "alternatives: [";
      size_t pending_items = msg.alternatives.size();
      for (auto item : msg.alternatives) {
        to_flow_style_yaml(item, out);
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
  const NegotiationRejection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: conflict_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conflict_version: ";
    rosidl_generator_traits::value_to_yaml(msg.conflict_version, out);
    out << "\n";
  }

  // member: table
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.table.size() == 0) {
      out << "table: []\n";
    } else {
      out << "table:\n";
      for (auto item : msg.table) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: rejected_by
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rejected_by: ";
    rosidl_generator_traits::value_to_yaml(msg.rejected_by, out);
    out << "\n";
  }

  // member: alternatives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alternatives.size() == 0) {
      out << "alternatives: []\n";
    } else {
      out << "alternatives:\n";
      for (auto item : msg.alternatives) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NegotiationRejection & msg, bool use_flow_style = false)
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

}  // namespace rmf_traffic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_traffic_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_traffic_msgs::msg::NegotiationRejection & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::NegotiationRejection & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::NegotiationRejection>()
{
  return "rmf_traffic_msgs::msg::NegotiationRejection";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::NegotiationRejection>()
{
  return "rmf_traffic_msgs/msg/NegotiationRejection";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::NegotiationRejection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::NegotiationRejection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::NegotiationRejection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__TRAITS_HPP_
