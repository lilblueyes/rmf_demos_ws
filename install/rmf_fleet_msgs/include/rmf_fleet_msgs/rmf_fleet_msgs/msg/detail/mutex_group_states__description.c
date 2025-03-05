// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/MutexGroupStates.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/mutex_group_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__MutexGroupStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0xe8, 0x30, 0xdc, 0x32, 0xfb, 0xcd, 0xed,
      0xfd, 0xb2, 0xc7, 0x5d, 0xf5, 0x05, 0x39, 0x7a,
      0x61, 0x85, 0x90, 0xde, 0xb4, 0xdf, 0x49, 0x5e,
      0x9e, 0xd9, 0xab, 0xbf, 0xe9, 0x8d, 0xce, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_fleet_msgs/msg/detail/mutex_group_assignment__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__MutexGroupAssignment__EXPECTED_HASH = {1, {
    0xbf, 0xdc, 0x65, 0x06, 0x6b, 0x56, 0xd2, 0xa3,
    0x22, 0xae, 0x0a, 0x27, 0x83, 0x7e, 0xe9, 0x70,
    0x1d, 0xc0, 0x19, 0x50, 0xd2, 0xc2, 0x0f, 0xa9,
    0xbb, 0x96, 0xab, 0x45, 0x79, 0xb7, 0x6e, 0x0d,
  }};
#endif

static char rmf_fleet_msgs__msg__MutexGroupStates__TYPE_NAME[] = "rmf_fleet_msgs/msg/MutexGroupStates";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_fleet_msgs__msg__MutexGroupAssignment__TYPE_NAME[] = "rmf_fleet_msgs/msg/MutexGroupAssignment";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__MutexGroupStates__FIELD_NAME__assignments[] = "assignments";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__MutexGroupStates__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__MutexGroupStates__FIELD_NAME__assignments, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_fleet_msgs__msg__MutexGroupAssignment__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__MutexGroupStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__MutexGroupAssignment__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__MutexGroupStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__MutexGroupStates__TYPE_NAME, 35, 35},
      {rmf_fleet_msgs__msg__MutexGroupStates__FIELDS, 1, 1},
    },
    {rmf_fleet_msgs__msg__MutexGroupStates__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__MutexGroupAssignment__EXPECTED_HASH, rmf_fleet_msgs__msg__MutexGroupAssignment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_fleet_msgs__msg__MutexGroupAssignment__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A map of all the current mutex group assignments\n"
  "MutexGroupAssignment[] assignments";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__MutexGroupStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__MutexGroupStates__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 86, 86},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__MutexGroupStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__MutexGroupStates__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_fleet_msgs__msg__MutexGroupAssignment__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
