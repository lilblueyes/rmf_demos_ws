// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_site_map_msgs:msg/SiteMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_site_map_msgs/msg/site_map.hpp"


#ifndef RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__TRAITS_HPP_
#define RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_site_map_msgs/msg/detail/site_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_site_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SiteMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: encoding
  {
    out << "encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.encoding, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const SiteMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.encoding, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const SiteMap & msg, bool use_flow_style = false)
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

}  // namespace rmf_site_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_site_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_site_map_msgs::msg::SiteMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_site_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_site_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_site_map_msgs::msg::SiteMap & msg)
{
  return rmf_site_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_site_map_msgs::msg::SiteMap>()
{
  return "rmf_site_map_msgs::msg::SiteMap";
}

template<>
inline const char * name<rmf_site_map_msgs::msg::SiteMap>()
{
  return "rmf_site_map_msgs/msg/SiteMap";
}

template<>
struct has_fixed_size<rmf_site_map_msgs::msg::SiteMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_site_map_msgs::msg::SiteMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_site_map_msgs::msg::SiteMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__TRAITS_HPP_
