// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_scheduler_msgs:msg/ScheduleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_scheduler_msgs/msg/schedule_state.hpp"


#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__STRUCT_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_scheduler_msgs__msg__ScheduleState __attribute__((deprecated))
#else
# define DEPRECATED__rmf_scheduler_msgs__msg__ScheduleState __declspec(deprecated)
#endif

namespace rmf_scheduler_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleState_
{
  using Type = ScheduleState_<ContainerAllocator>;

  explicit ScheduleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->last_modified = 0ll;
      this->last_ran = 0ll;
      this->next_run = 0ll;
      this->status = 0;
    }
  }

  explicit ScheduleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->last_modified = 0ll;
      this->last_ran = 0ll;
      this->next_run = 0ll;
      this->status = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _last_modified_type =
    int64_t;
  _last_modified_type last_modified;
  using _last_ran_type =
    int64_t;
  _last_ran_type last_ran;
  using _next_run_type =
    int64_t;
  _next_run_type next_run;
  using _status_type =
    int8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__last_modified(
    const int64_t & _arg)
  {
    this->last_modified = _arg;
    return *this;
  }
  Type & set__last_ran(
    const int64_t & _arg)
  {
    this->last_ran = _arg;
    return *this;
  }
  Type & set__next_run(
    const int64_t & _arg)
  {
    this->next_run = _arg;
    return *this;
  }
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t CREATED =
    1;
  static constexpr int8_t STARTED =
    2;
  static constexpr int8_t FINISHED =
    3;
  static constexpr int8_t CANCELLED =
    4;
  static constexpr int8_t FAILED =
    -1;

  // pointer types
  using RawPtr =
    rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_scheduler_msgs__msg__ScheduleState
    std::shared_ptr<rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_scheduler_msgs__msg__ScheduleState
    std::shared_ptr<rmf_scheduler_msgs::msg::ScheduleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->last_modified != other.last_modified) {
      return false;
    }
    if (this->last_ran != other.last_ran) {
      return false;
    }
    if (this->next_run != other.next_run) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleState_

// alias to use template instance with default allocator
using ScheduleState =
  rmf_scheduler_msgs::msg::ScheduleState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ScheduleState_<ContainerAllocator>::CREATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ScheduleState_<ContainerAllocator>::STARTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ScheduleState_<ContainerAllocator>::FINISHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ScheduleState_<ContainerAllocator>::CANCELLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ScheduleState_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__STRUCT_HPP_
