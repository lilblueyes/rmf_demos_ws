// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_reservation_msgs:msg/FreeParkingSpots.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/free_parking_spots.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__TRAITS_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_reservation_msgs/msg/detail/free_parking_spots__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_reservation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FreeParkingSpots & msg,
  std::ostream & out)
{
  out << "{";
  // member: spots
  {
    if (msg.spots.size() == 0) {
      out << "spots: []";
    } else {
      out << "spots: [";
      size_t pending_items = msg.spots.size();
      for (auto item : msg.spots) {
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
  const FreeParkingSpots & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: spots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.spots.size() == 0) {
      out << "spots: []\n";
    } else {
      out << "spots:\n";
      for (auto item : msg.spots) {
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

inline std::string to_yaml(const FreeParkingSpots & msg, bool use_flow_style = false)
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
  const rmf_reservation_msgs::msg::FreeParkingSpots & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_reservation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_reservation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_reservation_msgs::msg::FreeParkingSpots & msg)
{
  return rmf_reservation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_reservation_msgs::msg::FreeParkingSpots>()
{
  return "rmf_reservation_msgs::msg::FreeParkingSpots";
}

template<>
inline const char * name<rmf_reservation_msgs::msg::FreeParkingSpots>()
{
  return "rmf_reservation_msgs/msg/FreeParkingSpots";
}

template<>
struct has_fixed_size<rmf_reservation_msgs::msg::FreeParkingSpots>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_reservation_msgs::msg::FreeParkingSpots>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_reservation_msgs::msg::FreeParkingSpots>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__TRAITS_HPP_
