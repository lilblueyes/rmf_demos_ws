// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:srv/GetDispatchStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/srv/get_dispatch_states.hpp"


#ifndef RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__BUILDER_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/srv/detail/get_dispatch_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDispatchStates_Request_task_ids
{
public:
  Init_GetDispatchStates_Request_task_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_task_msgs::srv::GetDispatchStates_Request task_ids(::rmf_task_msgs::srv::GetDispatchStates_Request::_task_ids_type arg)
  {
    msg_.task_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetDispatchStates_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::GetDispatchStates_Request>()
{
  return rmf_task_msgs::srv::builder::Init_GetDispatchStates_Request_task_ids();
}

}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDispatchStates_Response_states
{
public:
  explicit Init_GetDispatchStates_Response_states(::rmf_task_msgs::srv::GetDispatchStates_Response & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::GetDispatchStates_Response states(::rmf_task_msgs::srv::GetDispatchStates_Response::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetDispatchStates_Response msg_;
};

class Init_GetDispatchStates_Response_success
{
public:
  Init_GetDispatchStates_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDispatchStates_Response_states success(::rmf_task_msgs::srv::GetDispatchStates_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetDispatchStates_Response_states(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetDispatchStates_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::GetDispatchStates_Response>()
{
  return rmf_task_msgs::srv::builder::Init_GetDispatchStates_Response_success();
}

}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDispatchStates_Event_response
{
public:
  explicit Init_GetDispatchStates_Event_response(::rmf_task_msgs::srv::GetDispatchStates_Event & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::GetDispatchStates_Event response(::rmf_task_msgs::srv::GetDispatchStates_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetDispatchStates_Event msg_;
};

class Init_GetDispatchStates_Event_request
{
public:
  explicit Init_GetDispatchStates_Event_request(::rmf_task_msgs::srv::GetDispatchStates_Event & msg)
  : msg_(msg)
  {}
  Init_GetDispatchStates_Event_response request(::rmf_task_msgs::srv::GetDispatchStates_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetDispatchStates_Event_response(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetDispatchStates_Event msg_;
};

class Init_GetDispatchStates_Event_info
{
public:
  Init_GetDispatchStates_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDispatchStates_Event_request info(::rmf_task_msgs::srv::GetDispatchStates_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetDispatchStates_Event_request(msg_);
  }

private:
  ::rmf_task_msgs::srv::GetDispatchStates_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::GetDispatchStates_Event>()
{
  return rmf_task_msgs::srv::builder::Init_GetDispatchStates_Event_info();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__BUILDER_HPP_
