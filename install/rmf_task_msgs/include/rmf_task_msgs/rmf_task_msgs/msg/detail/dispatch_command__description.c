// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/DispatchCommand.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/dispatch_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__DispatchCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0xe7, 0x31, 0x4f, 0x70, 0x56, 0x5a, 0xa7,
      0xfd, 0xbb, 0x03, 0x08, 0x2f, 0x54, 0x02, 0x01,
      0x41, 0xf7, 0x1f, 0x0a, 0x04, 0xba, 0xba, 0xa7,
      0xfb, 0xd7, 0x3c, 0x72, 0x94, 0x91, 0x28, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char rmf_task_msgs__msg__DispatchCommand__TYPE_NAME[] = "rmf_task_msgs/msg/DispatchCommand";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__task_id[] = "task_id";
static char rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__dispatch_id[] = "dispatch_id";
static char rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__timestamp[] = "timestamp";
static char rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__DispatchCommand__FIELDS[] = {
  {
    {rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__dispatch_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchCommand__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__msg__DispatchCommand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__DispatchCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__DispatchCommand__TYPE_NAME, 33, 33},
      {rmf_task_msgs__msg__DispatchCommand__FIELDS, 5, 5},
    },
    {rmf_task_msgs__msg__DispatchCommand__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is published by Task Dispatcher Node to either award or cancel a\n"
  "# task for a Fleet Adapter\n"
  "\n"
  "# The selected Fleet Adapter to award/cancel the task\n"
  "string fleet_name\n"
  "\n"
  "# The task_id of the task that\n"
  "string task_id\n"
  "\n"
  "# Unique ID of this request message\n"
  "uint64 dispatch_id\n"
  "\n"
  "# The time that this dispatch request was originally made. Dispatch requests may\n"
  "# expire with an error if they get no response after an extended period of time.\n"
  "builtin_interfaces/Time timestamp\n"
  "\n"
  "# Add or Cancel a task\n"
  "uint8 type\n"
  "uint8 TYPE_AWARD=1   # to award a task to a fleet\n"
  "uint8 TYPE_REMOVE=2  # to remove a task from a fleet";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__DispatchCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__DispatchCommand__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 618, 618},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__DispatchCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__DispatchCommand__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
