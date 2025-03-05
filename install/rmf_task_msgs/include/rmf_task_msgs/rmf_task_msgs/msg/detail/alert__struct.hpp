// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert.hpp"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'alert_parameters'
#include "rmf_task_msgs/msg/detail/alert_parameter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__Alert __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__Alert __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Alert_
{
  using Type = Alert_<ContainerAllocator>;

  explicit Alert_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->display = true;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = "";
      this->title = "";
      this->subtitle = "";
      this->message = "";
      this->display = false;
      this->tier = 0;
      this->task_id = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->title = "";
      this->subtitle = "";
      this->message = "";
      this->tier = 0;
      this->task_id = "";
    }
  }

  explicit Alert_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    title(_alloc),
    subtitle(_alloc),
    message(_alloc),
    task_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->display = true;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = "";
      this->title = "";
      this->subtitle = "";
      this->message = "";
      this->display = false;
      this->tier = 0;
      this->task_id = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->title = "";
      this->subtitle = "";
      this->message = "";
      this->tier = 0;
      this->task_id = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _title_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _title_type title;
  using _subtitle_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _subtitle_type subtitle;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _display_type =
    bool;
  _display_type display;
  using _tier_type =
    uint8_t;
  _tier_type tier;
  using _responses_available_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _responses_available_type responses_available;
  using _alert_parameters_type =
    std::vector<rmf_task_msgs::msg::AlertParameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::AlertParameter_<ContainerAllocator>>>;
  _alert_parameters_type alert_parameters;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__title(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->title = _arg;
    return *this;
  }
  Type & set__subtitle(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->subtitle = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__display(
    const bool & _arg)
  {
    this->display = _arg;
    return *this;
  }
  Type & set__tier(
    const uint8_t & _arg)
  {
    this->tier = _arg;
    return *this;
  }
  Type & set__responses_available(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->responses_available = _arg;
    return *this;
  }
  Type & set__alert_parameters(
    const std::vector<rmf_task_msgs::msg::AlertParameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::AlertParameter_<ContainerAllocator>>> & _arg)
  {
    this->alert_parameters = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TIER_INFO =
    0u;
  static constexpr uint8_t TIER_WARNING =
    1u;
  static constexpr uint8_t TIER_ERROR =
    2u;

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::Alert_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::Alert_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Alert_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Alert_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Alert_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Alert_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Alert_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Alert_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Alert_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Alert_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__Alert
    std::shared_ptr<rmf_task_msgs::msg::Alert_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__Alert
    std::shared_ptr<rmf_task_msgs::msg::Alert_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Alert_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->title != other.title) {
      return false;
    }
    if (this->subtitle != other.subtitle) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->display != other.display) {
      return false;
    }
    if (this->tier != other.tier) {
      return false;
    }
    if (this->responses_available != other.responses_available) {
      return false;
    }
    if (this->alert_parameters != other.alert_parameters) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Alert_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Alert_

// alias to use template instance with default allocator
using Alert =
  rmf_task_msgs::msg::Alert_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Alert_<ContainerAllocator>::TIER_INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Alert_<ContainerAllocator>::TIER_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Alert_<ContainerAllocator>::TIER_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT__STRUCT_HPP_
