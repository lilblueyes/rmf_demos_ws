// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_traffic_msgs:msg/Participant.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/msg/participant.h"


#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__FUNCTIONS_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_traffic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_traffic_msgs/msg/detail/participant__struct.h"

/// Initialize msg/Participant message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_traffic_msgs__msg__Participant
 * )) before or use
 * rmf_traffic_msgs__msg__Participant__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participant__init(rmf_traffic_msgs__msg__Participant * msg);

/// Finalize msg/Participant message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__Participant__fini(rmf_traffic_msgs__msg__Participant * msg);

/// Create msg/Participant message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_traffic_msgs__msg__Participant__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
rmf_traffic_msgs__msg__Participant *
rmf_traffic_msgs__msg__Participant__create(void);

/// Destroy msg/Participant message.
/**
 * It calls
 * rmf_traffic_msgs__msg__Participant__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__Participant__destroy(rmf_traffic_msgs__msg__Participant * msg);

/// Check for msg/Participant message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participant__are_equal(const rmf_traffic_msgs__msg__Participant * lhs, const rmf_traffic_msgs__msg__Participant * rhs);

/// Copy a msg/Participant message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participant__copy(
  const rmf_traffic_msgs__msg__Participant * input,
  rmf_traffic_msgs__msg__Participant * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__Participant__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__Participant__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__Participant__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__Participant__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Participant messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_traffic_msgs__msg__Participant__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participant__Sequence__init(rmf_traffic_msgs__msg__Participant__Sequence * array, size_t size);

/// Finalize array of msg/Participant messages.
/**
 * It calls
 * rmf_traffic_msgs__msg__Participant__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__Participant__Sequence__fini(rmf_traffic_msgs__msg__Participant__Sequence * array);

/// Create array of msg/Participant messages.
/**
 * It allocates the memory for the array and calls
 * rmf_traffic_msgs__msg__Participant__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
rmf_traffic_msgs__msg__Participant__Sequence *
rmf_traffic_msgs__msg__Participant__Sequence__create(size_t size);

/// Destroy array of msg/Participant messages.
/**
 * It calls
 * rmf_traffic_msgs__msg__Participant__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__Participant__Sequence__destroy(rmf_traffic_msgs__msg__Participant__Sequence * array);

/// Check for msg/Participant message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participant__Sequence__are_equal(const rmf_traffic_msgs__msg__Participant__Sequence * lhs, const rmf_traffic_msgs__msg__Participant__Sequence * rhs);

/// Copy an array of msg/Participant messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participant__Sequence__copy(
  const rmf_traffic_msgs__msg__Participant__Sequence * input,
  rmf_traffic_msgs__msg__Participant__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__FUNCTIONS_H_
