// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_scheduler_msgs:srv/ListSchedules.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_scheduler_msgs/srv/list_schedules.hpp"


#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULES__STRUCT_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Request __declspec(deprecated)
#endif

namespace rmf_scheduler_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListSchedules_Request_
{
  using Type = ListSchedules_Request_<ContainerAllocator>;

  explicit ListSchedules_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->created_after = 0ll;
    }
  }

  explicit ListSchedules_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->created_after = 0ll;
    }
  }

  // field types and members
  using _created_after_type =
    int64_t;
  _created_after_type created_after;

  // setters for named parameter idiom
  Type & set__created_after(
    const int64_t & _arg)
  {
    this->created_after = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Request
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Request
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListSchedules_Request_ & other) const
  {
    if (this->created_after != other.created_after) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListSchedules_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListSchedules_Request_

// alias to use template instance with default allocator
using ListSchedules_Request =
  rmf_scheduler_msgs::srv::ListSchedules_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_scheduler_msgs


// Include directives for member types
// Member 'schedules'
#include "rmf_scheduler_msgs/msg/detail/schedule__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Response __declspec(deprecated)
#endif

namespace rmf_scheduler_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListSchedules_Response_
{
  using Type = ListSchedules_Response_<ContainerAllocator>;

  explicit ListSchedules_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ListSchedules_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _schedules_type =
    std::vector<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>>>;
  _schedules_type schedules;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__schedules(
    const std::vector<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>>> & _arg)
  {
    this->schedules = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Response
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Response
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListSchedules_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->schedules != other.schedules) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListSchedules_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListSchedules_Response_

// alias to use template instance with default allocator
using ListSchedules_Response =
  rmf_scheduler_msgs::srv::ListSchedules_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_scheduler_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Event __attribute__((deprecated))
#else
# define DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Event __declspec(deprecated)
#endif

namespace rmf_scheduler_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListSchedules_Event_
{
  using Type = ListSchedules_Event_<ContainerAllocator>;

  explicit ListSchedules_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ListSchedules_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_scheduler_msgs::srv::ListSchedules_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_scheduler_msgs::srv::ListSchedules_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Event
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_scheduler_msgs__srv__ListSchedules_Event
    std::shared_ptr<rmf_scheduler_msgs::srv::ListSchedules_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListSchedules_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListSchedules_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListSchedules_Event_

// alias to use template instance with default allocator
using ListSchedules_Event =
  rmf_scheduler_msgs::srv::ListSchedules_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rmf_scheduler_msgs
{

namespace srv
{

struct ListSchedules
{
  using Request = rmf_scheduler_msgs::srv::ListSchedules_Request;
  using Response = rmf_scheduler_msgs::srv::ListSchedules_Response;
  using Event = rmf_scheduler_msgs::srv::ListSchedules_Event;
};

}  // namespace srv

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULES__STRUCT_HPP_
