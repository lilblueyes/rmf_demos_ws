// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_reservation_msgs:msg/ReleaseRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/release_request.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__RELEASE_REQUEST__STRUCT_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__RELEASE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ticket'
#include "rmf_reservation_msgs/msg/detail/ticket__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_reservation_msgs__msg__ReleaseRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_reservation_msgs__msg__ReleaseRequest __declspec(deprecated)
#endif

namespace rmf_reservation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReleaseRequest_
{
  using Type = ReleaseRequest_<ContainerAllocator>;

  explicit ReleaseRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ticket(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = "";
    }
  }

  explicit ReleaseRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ticket(_alloc, _init),
    location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = "";
    }
  }

  // field types and members
  using _ticket_type =
    rmf_reservation_msgs::msg::Ticket_<ContainerAllocator>;
  _ticket_type ticket;
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__ticket(
    const rmf_reservation_msgs::msg::Ticket_<ContainerAllocator> & _arg)
  {
    this->ticket = _arg;
    return *this;
  }
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_reservation_msgs__msg__ReleaseRequest
    std::shared_ptr<rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_reservation_msgs__msg__ReleaseRequest
    std::shared_ptr<rmf_reservation_msgs::msg::ReleaseRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReleaseRequest_ & other) const
  {
    if (this->ticket != other.ticket) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReleaseRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReleaseRequest_

// alias to use template instance with default allocator
using ReleaseRequest =
  rmf_reservation_msgs::msg::ReleaseRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__RELEASE_REQUEST__STRUCT_HPP_
