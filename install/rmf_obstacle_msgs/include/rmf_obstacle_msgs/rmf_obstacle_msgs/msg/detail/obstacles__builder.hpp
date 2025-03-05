// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_obstacle_msgs:msg/Obstacles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_obstacle_msgs/msg/obstacles.hpp"


#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__BUILDER_HPP_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_obstacle_msgs/msg/detail/obstacles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_obstacle_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacles_obstacles
{
public:
  explicit Init_Obstacles_obstacles(::rmf_obstacle_msgs::msg::Obstacles & msg)
  : msg_(msg)
  {}
  ::rmf_obstacle_msgs::msg::Obstacles obstacles(::rmf_obstacle_msgs::msg::Obstacles::_obstacles_type arg)
  {
    msg_.obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacles msg_;
};

class Init_Obstacles_header
{
public:
  Init_Obstacles_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacles_obstacles header(::rmf_obstacle_msgs::msg::Obstacles::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Obstacles_obstacles(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_obstacle_msgs::msg::Obstacles>()
{
  return rmf_obstacle_msgs::msg::builder::Init_Obstacles_header();
}

}  // namespace rmf_obstacle_msgs

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__BUILDER_HPP_
