// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_reservation_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/request_header.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_reservation_msgs__msg__RequestHeader __attribute__((deprecated))
#else
# define DEPRECATED__rmf_reservation_msgs__msg__RequestHeader __declspec(deprecated)
#endif

namespace rmf_reservation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RequestHeader_
{
  using Type = RequestHeader_<ContainerAllocator>;

  explicit RequestHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->fleet_name = "";
      this->request_id = 0ull;
    }
  }

  explicit RequestHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_name(_alloc),
    fleet_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->fleet_name = "";
      this->request_id = 0ull;
    }
  }

  // field types and members
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _request_id_type =
    uint64_t;
  _request_id_type request_id;

  // setters for named parameter idiom
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__fleet_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fleet_name = _arg;
    return *this;
  }
  Type & set__request_id(
    const uint64_t & _arg)
  {
    this->request_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_reservation_msgs__msg__RequestHeader
    std::shared_ptr<rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_reservation_msgs__msg__RequestHeader
    std::shared_ptr<rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestHeader_ & other) const
  {
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestHeader_

// alias to use template instance with default allocator
using RequestHeader =
  rmf_reservation_msgs::msg::RequestHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_HPP_
