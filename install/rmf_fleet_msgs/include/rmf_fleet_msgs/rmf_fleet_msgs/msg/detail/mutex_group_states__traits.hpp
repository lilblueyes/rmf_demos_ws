// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_fleet_msgs/msg/mutex_group_states.hpp"


#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/mutex_group_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'assignments'
#include "rmf_fleet_msgs/msg/detail/mutex_group_assignment__traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MutexGroupStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: assignments
  {
    if (msg.assignments.size() == 0) {
      out << "assignments: []";
    } else {
      out << "assignments: [";
      size_t pending_items = msg.assignments.size();
      for (auto item : msg.assignments) {
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
  const MutexGroupStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: assignments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.assignments.size() == 0) {
      out << "assignments: []\n";
    } else {
      out << "assignments:\n";
      for (auto item : msg.assignments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MutexGroupStates & msg, bool use_flow_style = false)
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

}  // namespace rmf_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_fleet_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_fleet_msgs::msg::MutexGroupStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::MutexGroupStates & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::MutexGroupStates>()
{
  return "rmf_fleet_msgs::msg::MutexGroupStates";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::MutexGroupStates>()
{
  return "rmf_fleet_msgs/msg/MutexGroupStates";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::MutexGroupStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::MutexGroupStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::MutexGroupStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__TRAITS_HPP_
