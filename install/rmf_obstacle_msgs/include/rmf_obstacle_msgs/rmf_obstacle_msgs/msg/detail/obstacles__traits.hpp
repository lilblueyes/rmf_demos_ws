// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_obstacle_msgs:msg/Obstacles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_obstacle_msgs/msg/obstacles.hpp"


#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__TRAITS_HPP_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_obstacle_msgs/msg/detail/obstacles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'obstacles'
#include "rmf_obstacle_msgs/msg/detail/obstacle__traits.hpp"

namespace rmf_obstacle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacles & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: obstacles
  {
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []";
    } else {
      out << "obstacles: [";
      size_t pending_items = msg.obstacles.size();
      for (auto item : msg.obstacles) {
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
  const Obstacles & msg,
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

  // member: obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []\n";
    } else {
      out << "obstacles:\n";
      for (auto item : msg.obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacles & msg, bool use_flow_style = false)
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

}  // namespace rmf_obstacle_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_obstacle_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_obstacle_msgs::msg::Obstacles & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_obstacle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_obstacle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_obstacle_msgs::msg::Obstacles & msg)
{
  return rmf_obstacle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_obstacle_msgs::msg::Obstacles>()
{
  return "rmf_obstacle_msgs::msg::Obstacles";
}

template<>
inline const char * name<rmf_obstacle_msgs::msg::Obstacles>()
{
  return "rmf_obstacle_msgs/msg/Obstacles";
}

template<>
struct has_fixed_size<rmf_obstacle_msgs::msg::Obstacles>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_obstacle_msgs::msg::Obstacles>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_obstacle_msgs::msg::Obstacles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__TRAITS_HPP_
