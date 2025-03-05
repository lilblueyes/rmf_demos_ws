// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/ClaimRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/claim_request.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/claim_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_ClaimRequest_wait_points
{
public:
  explicit Init_ClaimRequest_wait_points(::rmf_reservation_msgs::msg::ClaimRequest & msg)
  : msg_(msg)
  {}
  ::rmf_reservation_msgs::msg::ClaimRequest wait_points(::rmf_reservation_msgs::msg::ClaimRequest::_wait_points_type arg)
  {
    msg_.wait_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::ClaimRequest msg_;
};

class Init_ClaimRequest_ticket
{
public:
  Init_ClaimRequest_ticket()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClaimRequest_wait_points ticket(::rmf_reservation_msgs::msg::ClaimRequest::_ticket_type arg)
  {
    msg_.ticket = std::move(arg);
    return Init_ClaimRequest_wait_points(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::ClaimRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::ClaimRequest>()
{
  return rmf_reservation_msgs::msg::builder::Init_ClaimRequest_ticket();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__BUILDER_HPP_
