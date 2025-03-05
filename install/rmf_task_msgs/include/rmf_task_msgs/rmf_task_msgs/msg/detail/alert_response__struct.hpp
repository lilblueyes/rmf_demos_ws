// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/AlertResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert_response.hpp"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__AlertResponse __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__AlertResponse __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AlertResponse_
{
  using Type = AlertResponse_<ContainerAllocator>;

  explicit AlertResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->response = "";
    }
  }

  explicit AlertResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->response = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::AlertResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::AlertResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::AlertResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::AlertResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::AlertResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::AlertResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::AlertResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::AlertResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::AlertResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::AlertResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__AlertResponse
    std::shared_ptr<rmf_task_msgs::msg::AlertResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__AlertResponse
    std::shared_ptr<rmf_task_msgs::msg::AlertResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlertResponse_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlertResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlertResponse_

// alias to use template instance with default allocator
using AlertResponse =
  rmf_task_msgs::msg::AlertResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__STRUCT_HPP_
