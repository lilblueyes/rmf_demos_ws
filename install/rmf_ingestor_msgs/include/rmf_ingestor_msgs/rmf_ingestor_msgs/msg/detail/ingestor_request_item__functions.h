// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_ingestor_msgs/msg/ingestor_request_item.h"


#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__FUNCTIONS_H_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__FUNCTIONS_H_

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
#include "rmf_ingestor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.h"

/// Initialize msg/IngestorRequestItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_ingestor_msgs__msg__IngestorRequestItem
 * )) before or use
 * rmf_ingestor_msgs__msg__IngestorRequestItem__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
bool
rmf_ingestor_msgs__msg__IngestorRequestItem__init(rmf_ingestor_msgs__msg__IngestorRequestItem * msg);

/// Finalize msg/IngestorRequestItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
void
rmf_ingestor_msgs__msg__IngestorRequestItem__fini(rmf_ingestor_msgs__msg__IngestorRequestItem * msg);

/// Create msg/IngestorRequestItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
rmf_ingestor_msgs__msg__IngestorRequestItem *
rmf_ingestor_msgs__msg__IngestorRequestItem__create(void);

/// Destroy msg/IngestorRequestItem message.
/**
 * It calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
void
rmf_ingestor_msgs__msg__IngestorRequestItem__destroy(rmf_ingestor_msgs__msg__IngestorRequestItem * msg);

/// Check for msg/IngestorRequestItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
bool
rmf_ingestor_msgs__msg__IngestorRequestItem__are_equal(const rmf_ingestor_msgs__msg__IngestorRequestItem * lhs, const rmf_ingestor_msgs__msg__IngestorRequestItem * rhs);

/// Copy a msg/IngestorRequestItem message.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
bool
rmf_ingestor_msgs__msg__IngestorRequestItem__copy(
  const rmf_ingestor_msgs__msg__IngestorRequestItem * input,
  rmf_ingestor_msgs__msg__IngestorRequestItem * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
const rosidl_type_hash_t *
rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
const rosidl_runtime_c__type_description__TypeSource *
rmf_ingestor_msgs__msg__IngestorRequestItem__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/IngestorRequestItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
bool
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array, size_t size);

/// Finalize array of msg/IngestorRequestItem messages.
/**
 * It calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
void
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array);

/// Create array of msg/IngestorRequestItem messages.
/**
 * It allocates the memory for the array and calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__create(size_t size);

/// Destroy array of msg/IngestorRequestItem messages.
/**
 * It calls
 * rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
void
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__destroy(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array);

/// Check for msg/IngestorRequestItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
bool
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__are_equal(const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * lhs, const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * rhs);

/// Copy an array of msg/IngestorRequestItem messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
bool
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__copy(
  const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * input,
  rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__FUNCTIONS_H_
