// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/DispatchState.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/dispatch_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__DispatchState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x3c, 0x56, 0x1b, 0xe7, 0x10, 0x5a, 0x4e,
      0xab, 0x3a, 0x04, 0xd5, 0xa8, 0x61, 0xf6, 0x93,
      0x03, 0x5d, 0xda, 0x43, 0x11, 0x6f, 0x49, 0x23,
      0xfa, 0x44, 0x27, 0xbc, 0xc6, 0x45, 0x45, 0x97,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_task_msgs/msg/detail/assignment__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_task_msgs__msg__Assignment__EXPECTED_HASH = {1, {
    0x71, 0xa6, 0x68, 0xba, 0xcb, 0xa7, 0x93, 0xe6,
    0x02, 0xe5, 0xc4, 0x62, 0x87, 0x48, 0x7d, 0xce,
    0x84, 0x06, 0x23, 0x4f, 0xc2, 0x06, 0x59, 0x04,
    0x47, 0x01, 0xb3, 0xd1, 0x5b, 0x18, 0xc8, 0x4f,
  }};
#endif

static char rmf_task_msgs__msg__DispatchState__TYPE_NAME[] = "rmf_task_msgs/msg/DispatchState";
static char rmf_task_msgs__msg__Assignment__TYPE_NAME[] = "rmf_task_msgs/msg/Assignment";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__DispatchState__FIELD_NAME__task_id[] = "task_id";
static char rmf_task_msgs__msg__DispatchState__FIELD_NAME__status[] = "status";
static char rmf_task_msgs__msg__DispatchState__FIELD_NAME__assignment[] = "assignment";
static char rmf_task_msgs__msg__DispatchState__FIELD_NAME__errors[] = "errors";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__DispatchState__FIELDS[] = {
  {
    {rmf_task_msgs__msg__DispatchState__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchState__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchState__FIELD_NAME__assignment, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__Assignment__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchState__FIELD_NAME__errors, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__msg__DispatchState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_task_msgs__msg__Assignment__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__DispatchState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__DispatchState__TYPE_NAME, 31, 31},
      {rmf_task_msgs__msg__DispatchState__FIELDS, 4, 4},
    },
    {rmf_task_msgs__msg__DispatchState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_task_msgs__msg__Assignment__EXPECTED_HASH, rmf_task_msgs__msg__Assignment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_task_msgs__msg__Assignment__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "uint8 STATUS_UNINITIALIZED = 0\n"
  "uint8 STATUS_QUEUED = 1\n"
  "uint8 STATUS_SELECTED = 2\n"
  "uint8 STATUS_DISPATCHED = 3\n"
  "uint8 STATUS_FAILED_TO_ASSIGN = 4\n"
  "uint8 STATUS_CANCELED_IN_FLIGHT = 5\n"
  "\n"
  "string task_id\n"
  "int8 status\n"
  "Assignment assignment\n"
  "string[] errors";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__DispatchState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__DispatchState__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 246, 246},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__DispatchState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__DispatchState__get_individual_type_description_source(NULL),
    sources[1] = *rmf_task_msgs__msg__Assignment__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
