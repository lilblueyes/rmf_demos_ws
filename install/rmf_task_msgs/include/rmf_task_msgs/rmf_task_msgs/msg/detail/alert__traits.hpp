// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert.hpp"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/alert__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'alert_parameters'
#include "rmf_task_msgs/msg/detail/alert_parameter__traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Alert & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: title
  {
    out << "title: ";
    rosidl_generator_traits::value_to_yaml(msg.title, out);
    out << ", ";
  }

  // member: subtitle
  {
    out << "subtitle: ";
    rosidl_generator_traits::value_to_yaml(msg.subtitle, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: display
  {
    out << "display: ";
    rosidl_generator_traits::value_to_yaml(msg.display, out);
    out << ", ";
  }

  // member: tier
  {
    out << "tier: ";
    rosidl_generator_traits::value_to_yaml(msg.tier, out);
    out << ", ";
  }

  // member: responses_available
  {
    if (msg.responses_available.size() == 0) {
      out << "responses_available: []";
    } else {
      out << "responses_available: [";
      size_t pending_items = msg.responses_available.size();
      for (auto item : msg.responses_available) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: alert_parameters
  {
    if (msg.alert_parameters.size() == 0) {
      out << "alert_parameters: []";
    } else {
      out << "alert_parameters: [";
      size_t pending_items = msg.alert_parameters.size();
      for (auto item : msg.alert_parameters) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Alert & msg,
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

  // member: title
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "title: ";
    rosidl_generator_traits::value_to_yaml(msg.title, out);
    out << "\n";
  }

  // member: subtitle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subtitle: ";
    rosidl_generator_traits::value_to_yaml(msg.subtitle, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: display
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "display: ";
    rosidl_generator_traits::value_to_yaml(msg.display, out);
    out << "\n";
  }

  // member: tier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tier: ";
    rosidl_generator_traits::value_to_yaml(msg.tier, out);
    out << "\n";
  }

  // member: responses_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.responses_available.size() == 0) {
      out << "responses_available: []\n";
    } else {
      out << "responses_available:\n";
      for (auto item : msg.responses_available) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: alert_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alert_parameters.size() == 0) {
      out << "alert_parameters: []\n";
    } else {
      out << "alert_parameters:\n";
      for (auto item : msg.alert_parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Alert & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::msg::Alert & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::Alert & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::Alert>()
{
  return "rmf_task_msgs::msg::Alert";
}

template<>
inline const char * name<rmf_task_msgs::msg::Alert>()
{
  return "rmf_task_msgs/msg/Alert";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::Alert>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::Alert>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::Alert>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT__TRAITS_HPP_
