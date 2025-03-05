// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:srv/LiftClearance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_fleet_msgs/srv/lift_clearance.hpp"


#ifndef RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__BUILDER_HPP_
#define RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/srv/detail/lift_clearance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_LiftClearance_Request_lift_name
{
public:
  explicit Init_LiftClearance_Request_lift_name(::rmf_fleet_msgs::srv::LiftClearance_Request & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::srv::LiftClearance_Request lift_name(::rmf_fleet_msgs::srv::LiftClearance_Request::_lift_name_type arg)
  {
    msg_.lift_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::srv::LiftClearance_Request msg_;
};

class Init_LiftClearance_Request_robot_name
{
public:
  Init_LiftClearance_Request_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftClearance_Request_lift_name robot_name(::rmf_fleet_msgs::srv::LiftClearance_Request::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_LiftClearance_Request_lift_name(msg_);
  }

private:
  ::rmf_fleet_msgs::srv::LiftClearance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::srv::LiftClearance_Request>()
{
  return rmf_fleet_msgs::srv::builder::Init_LiftClearance_Request_robot_name();
}

}  // namespace rmf_fleet_msgs


namespace rmf_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_LiftClearance_Response_decision
{
public:
  Init_LiftClearance_Response_decision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_fleet_msgs::srv::LiftClearance_Response decision(::rmf_fleet_msgs::srv::LiftClearance_Response::_decision_type arg)
  {
    msg_.decision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::srv::LiftClearance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::srv::LiftClearance_Response>()
{
  return rmf_fleet_msgs::srv::builder::Init_LiftClearance_Response_decision();
}

}  // namespace rmf_fleet_msgs


namespace rmf_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_LiftClearance_Event_response
{
public:
  explicit Init_LiftClearance_Event_response(::rmf_fleet_msgs::srv::LiftClearance_Event & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::srv::LiftClearance_Event response(::rmf_fleet_msgs::srv::LiftClearance_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::srv::LiftClearance_Event msg_;
};

class Init_LiftClearance_Event_request
{
public:
  explicit Init_LiftClearance_Event_request(::rmf_fleet_msgs::srv::LiftClearance_Event & msg)
  : msg_(msg)
  {}
  Init_LiftClearance_Event_response request(::rmf_fleet_msgs::srv::LiftClearance_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LiftClearance_Event_response(msg_);
  }

private:
  ::rmf_fleet_msgs::srv::LiftClearance_Event msg_;
};

class Init_LiftClearance_Event_info
{
public:
  Init_LiftClearance_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftClearance_Event_request info(::rmf_fleet_msgs::srv::LiftClearance_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LiftClearance_Event_request(msg_);
  }

private:
  ::rmf_fleet_msgs::srv::LiftClearance_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::srv::LiftClearance_Event>()
{
  return rmf_fleet_msgs::srv::builder::Init_LiftClearance_Event_info();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__BUILDER_HPP_
