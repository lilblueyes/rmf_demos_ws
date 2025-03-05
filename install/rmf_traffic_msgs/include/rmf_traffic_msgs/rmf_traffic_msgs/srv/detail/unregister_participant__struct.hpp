// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:srv/UnregisterParticipant.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/srv/unregister_participant.hpp"


#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Request __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnregisterParticipant_Request_
{
  using Type = UnregisterParticipant_Request_<ContainerAllocator>;

  explicit UnregisterParticipant_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant_id = 0ull;
    }
  }

  explicit UnregisterParticipant_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant_id = 0ull;
    }
  }

  // field types and members
  using _participant_id_type =
    uint64_t;
  _participant_id_type participant_id;

  // setters for named parameter idiom
  Type & set__participant_id(
    const uint64_t & _arg)
  {
    this->participant_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Request
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Request
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnregisterParticipant_Request_ & other) const
  {
    if (this->participant_id != other.participant_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnregisterParticipant_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnregisterParticipant_Request_

// alias to use template instance with default allocator
using UnregisterParticipant_Request =
  rmf_traffic_msgs::srv::UnregisterParticipant_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Response __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnregisterParticipant_Response_
{
  using Type = UnregisterParticipant_Response_<ContainerAllocator>;

  explicit UnregisterParticipant_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirmation = false;
      this->error = "";
    }
  }

  explicit UnregisterParticipant_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirmation = false;
      this->error = "";
    }
  }

  // field types and members
  using _confirmation_type =
    bool;
  _confirmation_type confirmation;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__confirmation(
    const bool & _arg)
  {
    this->confirmation = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Response
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Response
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnregisterParticipant_Response_ & other) const
  {
    if (this->confirmation != other.confirmation) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnregisterParticipant_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnregisterParticipant_Response_

// alias to use template instance with default allocator
using UnregisterParticipant_Response =
  rmf_traffic_msgs::srv::UnregisterParticipant_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Event __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Event __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnregisterParticipant_Event_
{
  using Type = UnregisterParticipant_Event_<ContainerAllocator>;

  explicit UnregisterParticipant_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit UnregisterParticipant_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::srv::UnregisterParticipant_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::srv::UnregisterParticipant_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Event
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__UnregisterParticipant_Event
    std::shared_ptr<rmf_traffic_msgs::srv::UnregisterParticipant_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnregisterParticipant_Event_ & other) const
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
  bool operator!=(const UnregisterParticipant_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnregisterParticipant_Event_

// alias to use template instance with default allocator
using UnregisterParticipant_Event =
  rmf_traffic_msgs::srv::UnregisterParticipant_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs

namespace rmf_traffic_msgs
{

namespace srv
{

struct UnregisterParticipant
{
  using Request = rmf_traffic_msgs::srv::UnregisterParticipant_Request;
  using Response = rmf_traffic_msgs::srv::UnregisterParticipant_Response;
  using Event = rmf_traffic_msgs::srv::UnregisterParticipant_Event;
};

}  // namespace srv

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__STRUCT_HPP_
