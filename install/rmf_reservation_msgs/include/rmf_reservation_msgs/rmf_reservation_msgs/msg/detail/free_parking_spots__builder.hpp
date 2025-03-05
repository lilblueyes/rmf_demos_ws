// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/FreeParkingSpots.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/free_parking_spots.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/free_parking_spots__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_FreeParkingSpots_spots
{
public:
  Init_FreeParkingSpots_spots()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_reservation_msgs::msg::FreeParkingSpots spots(::rmf_reservation_msgs::msg::FreeParkingSpots::_spots_type arg)
  {
    msg_.spots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FreeParkingSpots msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::FreeParkingSpots>()
{
  return rmf_reservation_msgs::msg::builder::Init_FreeParkingSpots_spots();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__BUILDER_HPP_
