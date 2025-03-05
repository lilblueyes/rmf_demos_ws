// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/FlexibleTimeRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/flexible_time_request.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_REQUEST__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/flexible_time_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_FlexibleTimeRequest_alternatives
{
public:
  explicit Init_FlexibleTimeRequest_alternatives(::rmf_reservation_msgs::msg::FlexibleTimeRequest & msg)
  : msg_(msg)
  {}
  ::rmf_reservation_msgs::msg::FlexibleTimeRequest alternatives(::rmf_reservation_msgs::msg::FlexibleTimeRequest::_alternatives_type arg)
  {
    msg_.alternatives = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FlexibleTimeRequest msg_;
};

class Init_FlexibleTimeRequest_header
{
public:
  Init_FlexibleTimeRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlexibleTimeRequest_alternatives header(::rmf_reservation_msgs::msg::FlexibleTimeRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FlexibleTimeRequest_alternatives(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FlexibleTimeRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::FlexibleTimeRequest>()
{
  return rmf_reservation_msgs::msg::builder::Init_FlexibleTimeRequest_header();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_REQUEST__BUILDER_HPP_
