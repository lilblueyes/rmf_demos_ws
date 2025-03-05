// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_reservation_msgs:msg/Ticket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/ticket.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__STRUCT_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "rmf_reservation_msgs/msg/detail/request_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_reservation_msgs__msg__Ticket __attribute__((deprecated))
#else
# define DEPRECATED__rmf_reservation_msgs__msg__Ticket __declspec(deprecated)
#endif

namespace rmf_reservation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ticket_
{
  using Type = Ticket_<ContainerAllocator>;

  explicit Ticket_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ticket_id = 0ull;
    }
  }

  explicit Ticket_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ticket_id = 0ull;
    }
  }

  // field types and members
  using _header_type =
    rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _ticket_id_type =
    uint64_t;
  _ticket_id_type ticket_id;

  // setters for named parameter idiom
  Type & set__header(
    const rmf_reservation_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ticket_id(
    const uint64_t & _arg)
  {
    this->ticket_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_reservation_msgs::msg::Ticket_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_reservation_msgs::msg::Ticket_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::Ticket_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::Ticket_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::Ticket_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::Ticket_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::Ticket_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::Ticket_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::Ticket_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::Ticket_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_reservation_msgs__msg__Ticket
    std::shared_ptr<rmf_reservation_msgs::msg::Ticket_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_reservation_msgs__msg__Ticket
    std::shared_ptr<rmf_reservation_msgs::msg::Ticket_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ticket_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ticket_id != other.ticket_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ticket_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ticket_

// alias to use template instance with default allocator
using Ticket =
  rmf_reservation_msgs::msg::Ticket_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__STRUCT_HPP_
