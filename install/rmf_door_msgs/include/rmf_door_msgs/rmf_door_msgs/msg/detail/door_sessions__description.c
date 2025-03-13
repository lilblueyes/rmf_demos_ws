// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice

#include "rmf_door_msgs/msg/detail/door_sessions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_door_msgs
const rosidl_type_hash_t *
rmf_door_msgs__msg__DoorSessions__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x62, 0xe2, 0x20, 0x3f, 0xd2, 0x33, 0x5d, 0xb5,
      0xb1, 0xbf, 0x51, 0xa9, 0x4e, 0x0c, 0xdb, 0xd4,
      0xe0, 0x8f, 0x85, 0x98, 0x96, 0x35, 0x17, 0x9d,
      0x4f, 0x69, 0xd9, 0xd7, 0x59, 0x63, 0xcd, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_door_msgs/msg/detail/session__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_door_msgs__msg__Session__EXPECTED_HASH = {1, {
    0x27, 0x6f, 0xee, 0x3c, 0xa5, 0x12, 0x2c, 0xdc,
    0xa0, 0x8d, 0x00, 0xb8, 0x6e, 0x2f, 0x27, 0x00,
    0x9f, 0x59, 0x38, 0xbb, 0xa1, 0x9d, 0x90, 0xa6,
    0x5a, 0x1f, 0xcb, 0x99, 0xf4, 0xec, 0x99, 0x4d,
  }};
#endif

static char rmf_door_msgs__msg__DoorSessions__TYPE_NAME[] = "rmf_door_msgs/msg/DoorSessions";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_door_msgs__msg__Session__TYPE_NAME[] = "rmf_door_msgs/msg/Session";

// Define type names, field names, and default values
static char rmf_door_msgs__msg__DoorSessions__FIELD_NAME__door_name[] = "door_name";
static char rmf_door_msgs__msg__DoorSessions__FIELD_NAME__sessions[] = "sessions";

static rosidl_runtime_c__type_description__Field rmf_door_msgs__msg__DoorSessions__FIELDS[] = {
  {
    {rmf_door_msgs__msg__DoorSessions__FIELD_NAME__door_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_door_msgs__msg__DoorSessions__FIELD_NAME__sessions, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_door_msgs__msg__Session__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_door_msgs__msg__DoorSessions__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_door_msgs__msg__Session__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_door_msgs__msg__DoorSessions__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_door_msgs__msg__DoorSessions__TYPE_NAME, 30, 30},
      {rmf_door_msgs__msg__DoorSessions__FIELDS, 2, 2},
    },
    {rmf_door_msgs__msg__DoorSessions__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_door_msgs__msg__Session__EXPECTED_HASH, rmf_door_msgs__msg__Session__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_door_msgs__msg__Session__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "string door_name\n"
  "Session[] sessions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_door_msgs__msg__DoorSessions__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_door_msgs__msg__DoorSessions__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_door_msgs__msg__DoorSessions__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_door_msgs__msg__DoorSessions__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_door_msgs__msg__Session__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
