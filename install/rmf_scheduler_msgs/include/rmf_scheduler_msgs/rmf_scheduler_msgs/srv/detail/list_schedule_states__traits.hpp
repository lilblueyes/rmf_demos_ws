// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_scheduler_msgs:srv/ListScheduleStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_scheduler_msgs/srv/list_schedule_states.hpp"


#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULE_STATES__TRAITS_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULE_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_scheduler_msgs/srv/detail/list_schedule_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_scheduler_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListScheduleStates_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: modified_after
  {
    out << "modified_after: ";
    rosidl_generator_traits::value_to_yaml(msg.modified_after, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListScheduleStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: modified_after
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modified_after: ";
    rosidl_generator_traits::value_to_yaml(msg.modified_after, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListScheduleStates_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::srv::ListScheduleStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::srv::ListScheduleStates_Request & msg)
{
  return rmf_scheduler_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::ListScheduleStates_Request>()
{
  return "rmf_scheduler_msgs::srv::ListScheduleStates_Request";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::ListScheduleStates_Request>()
{
  return "rmf_scheduler_msgs/srv/ListScheduleStates_Request";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::ListScheduleStates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::ListScheduleStates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_scheduler_msgs::srv::ListScheduleStates_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'schedules'
#include "rmf_scheduler_msgs/msg/detail/schedule_state__traits.hpp"

namespace rmf_scheduler_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListScheduleStates_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: schedules
  {
    if (msg.schedules.size() == 0) {
      out << "schedules: []";
    } else {
      out << "schedules: [";
      size_t pending_items = msg.schedules.size();
      for (auto item : msg.schedules) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListScheduleStates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: schedules
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.schedules.size() == 0) {
      out << "schedules: []\n";
    } else {
      out << "schedules:\n";
      for (auto item : msg.schedules) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListScheduleStates_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::srv::ListScheduleStates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::srv::ListScheduleStates_Response & msg)
{
  return rmf_scheduler_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::ListScheduleStates_Response>()
{
  return "rmf_scheduler_msgs::srv::ListScheduleStates_Response";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::ListScheduleStates_Response>()
{
  return "rmf_scheduler_msgs/srv/ListScheduleStates_Response";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::ListScheduleStates_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::ListScheduleStates_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_scheduler_msgs::srv::ListScheduleStates_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rmf_scheduler_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListScheduleStates_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListScheduleStates_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListScheduleStates_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::srv::ListScheduleStates_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::srv::ListScheduleStates_Event & msg)
{
  return rmf_scheduler_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::ListScheduleStates_Event>()
{
  return "rmf_scheduler_msgs::srv::ListScheduleStates_Event";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::ListScheduleStates_Event>()
{
  return "rmf_scheduler_msgs/srv/ListScheduleStates_Event";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::ListScheduleStates_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::ListScheduleStates_Event>
  : std::integral_constant<bool, has_bounded_size<rmf_scheduler_msgs::srv::ListScheduleStates_Request>::value && has_bounded_size<rmf_scheduler_msgs::srv::ListScheduleStates_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rmf_scheduler_msgs::srv::ListScheduleStates_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::ListScheduleStates>()
{
  return "rmf_scheduler_msgs::srv::ListScheduleStates";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::ListScheduleStates>()
{
  return "rmf_scheduler_msgs/srv/ListScheduleStates";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::ListScheduleStates>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_scheduler_msgs::srv::ListScheduleStates_Request>::value &&
    has_fixed_size<rmf_scheduler_msgs::srv::ListScheduleStates_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::ListScheduleStates>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_scheduler_msgs::srv::ListScheduleStates_Request>::value &&
    has_bounded_size<rmf_scheduler_msgs::srv::ListScheduleStates_Response>::value
  >
{
};

template<>
struct is_service<rmf_scheduler_msgs::srv::ListScheduleStates>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_scheduler_msgs::srv::ListScheduleStates_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_scheduler_msgs::srv::ListScheduleStates_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULE_STATES__TRAITS_HPP_
