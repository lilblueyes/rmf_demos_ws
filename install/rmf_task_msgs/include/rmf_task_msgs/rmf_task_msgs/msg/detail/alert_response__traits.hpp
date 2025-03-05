// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/AlertResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert_response.hpp"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/alert_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AlertResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlertResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlertResponse & msg, bool use_flow_style = false)
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

}  // namespace rmf_task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_task_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_task_msgs::msg::AlertResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::AlertResponse & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::AlertResponse>()
{
  return "rmf_task_msgs::msg::AlertResponse";
}

template<>
inline const char * name<rmf_task_msgs::msg::AlertResponse>()
{
  return "rmf_task_msgs/msg/AlertResponse";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::AlertResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::AlertResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::AlertResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__TRAITS_HPP_
