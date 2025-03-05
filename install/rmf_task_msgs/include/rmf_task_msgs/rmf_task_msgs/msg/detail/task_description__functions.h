// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/task_description.h"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__FUNCTIONS_H_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__FUNCTIONS_H_

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
#include "rmf_task_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_task_msgs/msg/detail/task_description__struct.h"

/// Initialize msg/TaskDescription message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_task_msgs__msg__TaskDescription
 * )) before or use
 * rmf_task_msgs__msg__TaskDescription__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__TaskDescription__init(rmf_task_msgs__msg__TaskDescription * msg);

/// Finalize msg/TaskDescription message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__TaskDescription__fini(rmf_task_msgs__msg__TaskDescription * msg);

/// Create msg/TaskDescription message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_task_msgs__msg__TaskDescription__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__msg__TaskDescription *
rmf_task_msgs__msg__TaskDescription__create(void);

/// Destroy msg/TaskDescription message.
/**
 * It calls
 * rmf_task_msgs__msg__TaskDescription__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__TaskDescription__destroy(rmf_task_msgs__msg__TaskDescription * msg);

/// Check for msg/TaskDescription message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__TaskDescription__are_equal(const rmf_task_msgs__msg__TaskDescription * lhs, const rmf_task_msgs__msg__TaskDescription * rhs);

/// Copy a msg/TaskDescription message.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__TaskDescription__copy(
  const rmf_task_msgs__msg__TaskDescription * input,
  rmf_task_msgs__msg__TaskDescription * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__TaskDescription__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__TaskDescription__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__TaskDescription__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__TaskDescription__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/TaskDescription messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_task_msgs__msg__TaskDescription__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__TaskDescription__Sequence__init(rmf_task_msgs__msg__TaskDescription__Sequence * array, size_t size);

/// Finalize array of msg/TaskDescription messages.
/**
 * It calls
 * rmf_task_msgs__msg__TaskDescription__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__TaskDescription__Sequence__fini(rmf_task_msgs__msg__TaskDescription__Sequence * array);

/// Create array of msg/TaskDescription messages.
/**
 * It allocates the memory for the array and calls
 * rmf_task_msgs__msg__TaskDescription__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__msg__TaskDescription__Sequence *
rmf_task_msgs__msg__TaskDescription__Sequence__create(size_t size);

/// Destroy array of msg/TaskDescription messages.
/**
 * It calls
 * rmf_task_msgs__msg__TaskDescription__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__TaskDescription__Sequence__destroy(rmf_task_msgs__msg__TaskDescription__Sequence * array);

/// Check for msg/TaskDescription message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__TaskDescription__Sequence__are_equal(const rmf_task_msgs__msg__TaskDescription__Sequence * lhs, const rmf_task_msgs__msg__TaskDescription__Sequence * rhs);

/// Copy an array of msg/TaskDescription messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__TaskDescription__Sequence__copy(
  const rmf_task_msgs__msg__TaskDescription__Sequence * input,
  rmf_task_msgs__msg__TaskDescription__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__FUNCTIONS_H_
