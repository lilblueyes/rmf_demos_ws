// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_dispenser_msgs/msg/dispenser_result.hpp"


#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_RESULT__STRUCT_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_dispenser_msgs__msg__DispenserResult __attribute__((deprecated))
#else
# define DEPRECATED__rmf_dispenser_msgs__msg__DispenserResult __declspec(deprecated)
#endif

namespace rmf_dispenser_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DispenserResult_
{
  using Type = DispenserResult_<ContainerAllocator>;

  explicit DispenserResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_guid = "";
      this->source_guid = "";
      this->status = 0;
    }
  }

  explicit DispenserResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_alloc, _init),
    request_guid(_alloc),
    source_guid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_guid = "";
      this->source_guid = "";
      this->status = 0;
    }
  }

  // field types and members
  using _time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_type time;
  using _request_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_guid_type request_guid;
  using _source_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_guid_type source_guid;
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__request_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_guid = _arg;
    return *this;
  }
  Type & set__source_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source_guid = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACKNOWLEDGED =
    0u;
  static constexpr uint8_t SUCCESS =
    1u;
  static constexpr uint8_t FAILED =
    2u;

  // pointer types
  using RawPtr =
    rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_dispenser_msgs__msg__DispenserResult
    std::shared_ptr<rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_dispenser_msgs__msg__DispenserResult
    std::shared_ptr<rmf_dispenser_msgs::msg::DispenserResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DispenserResult_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->request_guid != other.request_guid) {
      return false;
    }
    if (this->source_guid != other.source_guid) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DispenserResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DispenserResult_

// alias to use template instance with default allocator
using DispenserResult =
  rmf_dispenser_msgs::msg::DispenserResult_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DispenserResult_<ContainerAllocator>::ACKNOWLEDGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DispenserResult_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DispenserResult_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_dispenser_msgs

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_RESULT__STRUCT_HPP_
