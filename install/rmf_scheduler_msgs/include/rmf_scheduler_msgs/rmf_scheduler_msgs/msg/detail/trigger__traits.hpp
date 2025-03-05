// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_scheduler_msgs:msg/Trigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_scheduler_msgs/msg/trigger.hpp"


#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER__TRAITS_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_scheduler_msgs/msg/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'payload'
#include "rmf_scheduler_msgs/msg/detail/payload__traits.hpp"

namespace rmf_scheduler_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trigger & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: created_at
  {
    out << "created_at: ";
    rosidl_generator_traits::value_to_yaml(msg.created_at, out);
    out << ", ";
  }

  // member: at
  {
    out << "at: ";
    rosidl_generator_traits::value_to_yaml(msg.at, out);
    out << ", ";
  }

  // member: group
  {
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << ", ";
  }

  // member: payload
  {
    out << "payload: ";
    to_flow_style_yaml(msg.payload, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Trigger & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: created_at
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "created_at: ";
    rosidl_generator_traits::value_to_yaml(msg.created_at, out);
    out << "\n";
  }

  // member: at
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "at: ";
    rosidl_generator_traits::value_to_yaml(msg.at, out);
    out << "\n";
  }

  // member: group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload:\n";
    to_block_style_yaml(msg.payload, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Trigger & msg, bool use_flow_style = false)
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

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::msg::Trigger & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::msg::Trigger & msg)
{
  return rmf_scheduler_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::msg::Trigger>()
{
  return "rmf_scheduler_msgs::msg::Trigger";
}

template<>
inline const char * name<rmf_scheduler_msgs::msg::Trigger>()
{
  return "rmf_scheduler_msgs/msg/Trigger";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::msg::Trigger>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::msg::Trigger>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_scheduler_msgs::msg::Trigger>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER__TRAITS_HPP_
