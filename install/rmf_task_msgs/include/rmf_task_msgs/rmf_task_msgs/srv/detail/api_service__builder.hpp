// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:srv/ApiService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/srv/api_service.hpp"


#ifndef RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__BUILDER_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/srv/detail/api_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_ApiService_Request_json_msg
{
public:
  Init_ApiService_Request_json_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_task_msgs::srv::ApiService_Request json_msg(::rmf_task_msgs::srv::ApiService_Request::_json_msg_type arg)
  {
    msg_.json_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::ApiService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::ApiService_Request>()
{
  return rmf_task_msgs::srv::builder::Init_ApiService_Request_json_msg();
}

}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_ApiService_Response_json_msg
{
public:
  Init_ApiService_Response_json_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_task_msgs::srv::ApiService_Response json_msg(::rmf_task_msgs::srv::ApiService_Response::_json_msg_type arg)
  {
    msg_.json_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::ApiService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::ApiService_Response>()
{
  return rmf_task_msgs::srv::builder::Init_ApiService_Response_json_msg();
}

}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_ApiService_Event_response
{
public:
  explicit Init_ApiService_Event_response(::rmf_task_msgs::srv::ApiService_Event & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::ApiService_Event response(::rmf_task_msgs::srv::ApiService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::ApiService_Event msg_;
};

class Init_ApiService_Event_request
{
public:
  explicit Init_ApiService_Event_request(::rmf_task_msgs::srv::ApiService_Event & msg)
  : msg_(msg)
  {}
  Init_ApiService_Event_response request(::rmf_task_msgs::srv::ApiService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ApiService_Event_response(msg_);
  }

private:
  ::rmf_task_msgs::srv::ApiService_Event msg_;
};

class Init_ApiService_Event_info
{
public:
  Init_ApiService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApiService_Event_request info(::rmf_task_msgs::srv::ApiService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ApiService_Event_request(msg_);
  }

private:
  ::rmf_task_msgs::srv::ApiService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::ApiService_Event>()
{
  return rmf_task_msgs::srv::builder::Init_ApiService_Event_info();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__BUILDER_HPP_
