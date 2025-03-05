// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/ReservationAllocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/reservation_allocation.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/reservation_allocation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_ReservationAllocation_resource
{
public:
  explicit Init_ReservationAllocation_resource(::rmf_reservation_msgs::msg::ReservationAllocation & msg)
  : msg_(msg)
  {}
  ::rmf_reservation_msgs::msg::ReservationAllocation resource(::rmf_reservation_msgs::msg::ReservationAllocation::_resource_type arg)
  {
    msg_.resource = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::ReservationAllocation msg_;
};

class Init_ReservationAllocation_chosen_alternative
{
public:
  explicit Init_ReservationAllocation_chosen_alternative(::rmf_reservation_msgs::msg::ReservationAllocation & msg)
  : msg_(msg)
  {}
  Init_ReservationAllocation_resource chosen_alternative(::rmf_reservation_msgs::msg::ReservationAllocation::_chosen_alternative_type arg)
  {
    msg_.chosen_alternative = std::move(arg);
    return Init_ReservationAllocation_resource(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::ReservationAllocation msg_;
};

class Init_ReservationAllocation_instruction_type
{
public:
  explicit Init_ReservationAllocation_instruction_type(::rmf_reservation_msgs::msg::ReservationAllocation & msg)
  : msg_(msg)
  {}
  Init_ReservationAllocation_chosen_alternative instruction_type(::rmf_reservation_msgs::msg::ReservationAllocation::_instruction_type_type arg)
  {
    msg_.instruction_type = std::move(arg);
    return Init_ReservationAllocation_chosen_alternative(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::ReservationAllocation msg_;
};

class Init_ReservationAllocation_ticket
{
public:
  Init_ReservationAllocation_ticket()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReservationAllocation_instruction_type ticket(::rmf_reservation_msgs::msg::ReservationAllocation::_ticket_type arg)
  {
    msg_.ticket = std::move(arg);
    return Init_ReservationAllocation_instruction_type(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::ReservationAllocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::ReservationAllocation>()
{
  return rmf_reservation_msgs::msg::builder::Init_ReservationAllocation_ticket();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__BUILDER_HPP_
