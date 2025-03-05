// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_dispenser_msgs/msg/dispenser_request_item.h"


#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__FUNCTIONS_H_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__FUNCTIONS_H_

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
#include "rmf_dispenser_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__struct.h"

/// Initialize msg/DispenserRequestItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_dispenser_msgs__msg__DispenserRequestItem
 * )) before or use
 * rmf_dispenser_msgs__msg__DispenserRequestItem__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
bool
rmf_dispenser_msgs__msg__DispenserRequestItem__init(rmf_dispenser_msgs__msg__DispenserRequestItem * msg);

/// Finalize msg/DispenserRequestItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
void
rmf_dispenser_msgs__msg__DispenserRequestItem__fini(rmf_dispenser_msgs__msg__DispenserRequestItem * msg);

/// Create msg/DispenserRequestItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
rmf_dispenser_msgs__msg__DispenserRequestItem *
rmf_dispenser_msgs__msg__DispenserRequestItem__create(void);

/// Destroy msg/DispenserRequestItem message.
/**
 * It calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
void
rmf_dispenser_msgs__msg__DispenserRequestItem__destroy(rmf_dispenser_msgs__msg__DispenserRequestItem * msg);

/// Check for msg/DispenserRequestItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
bool
rmf_dispenser_msgs__msg__DispenserRequestItem__are_equal(const rmf_dispenser_msgs__msg__DispenserRequestItem * lhs, const rmf_dispenser_msgs__msg__DispenserRequestItem * rhs);

/// Copy a msg/DispenserRequestItem message.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
bool
rmf_dispenser_msgs__msg__DispenserRequestItem__copy(
  const rmf_dispenser_msgs__msg__DispenserRequestItem * input,
  rmf_dispenser_msgs__msg__DispenserRequestItem * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
const rosidl_type_hash_t *
rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
const rosidl_runtime_c__type_description__TypeSource *
rmf_dispenser_msgs__msg__DispenserRequestItem__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/DispenserRequestItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
bool
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array, size_t size);

/// Finalize array of msg/DispenserRequestItem messages.
/**
 * It calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
void
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array);

/// Create array of msg/DispenserRequestItem messages.
/**
 * It allocates the memory for the array and calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__create(size_t size);

/// Destroy array of msg/DispenserRequestItem messages.
/**
 * It calls
 * rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
void
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__destroy(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array);

/// Check for msg/DispenserRequestItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
bool
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__are_equal(const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * lhs, const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * rhs);

/// Copy an array of msg/DispenserRequestItem messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
bool
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__copy(
  const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * input,
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__FUNCTIONS_H_
