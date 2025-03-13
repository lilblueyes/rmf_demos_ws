// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/task_description__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__TaskDescription__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x54, 0x7d, 0xdf, 0x7d, 0x9f, 0x52, 0x83,
      0x58, 0xdf, 0x25, 0x19, 0xf0, 0xe7, 0xa4, 0x1c,
      0x45, 0x94, 0x6f, 0xd9, 0x26, 0x19, 0x65, 0xb9,
      0xd7, 0x48, 0x16, 0xdf, 0x9e, 0xa7, 0xee, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_task_msgs/msg/detail/behavior_parameter__functions.h"
#include "rmf_task_msgs/msg/detail/station__functions.h"
#include "rmf_task_msgs/msg/detail/task_type__functions.h"
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"
#include "rmf_task_msgs/msg/detail/behavior__functions.h"
#include "rmf_task_msgs/msg/detail/loop__functions.h"
#include "rmf_task_msgs/msg/detail/priority__functions.h"
#include "rmf_task_msgs/msg/detail/delivery__functions.h"
#include "rmf_task_msgs/msg/detail/clean__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH = {1, {
    0xb2, 0x16, 0x4f, 0x63, 0x7d, 0x5c, 0x5f, 0x7d,
    0x24, 0xd1, 0xb3, 0x1f, 0xc6, 0xc2, 0x02, 0x1d,
    0xc0, 0x35, 0xb1, 0x41, 0xd7, 0x91, 0xf9, 0x11,
    0xf3, 0x5d, 0x71, 0xe9, 0xa2, 0x69, 0xcb, 0x70,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Behavior__EXPECTED_HASH = {1, {
    0xe5, 0x1d, 0xa1, 0x85, 0xa9, 0x8b, 0xb6, 0xaa,
    0x80, 0x00, 0xb7, 0x43, 0x15, 0xe7, 0x08, 0x22,
    0xa3, 0xe9, 0x30, 0x61, 0xde, 0xbc, 0x9d, 0xda,
    0xa8, 0x9e, 0x24, 0x82, 0xa5, 0xe2, 0x4e, 0x91,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH = {1, {
    0xb7, 0xc9, 0x29, 0xfa, 0xd1, 0xe9, 0x15, 0xaa,
    0x1f, 0x01, 0x81, 0xa2, 0xbe, 0x23, 0xed, 0x27,
    0xad, 0x17, 0xcb, 0x58, 0x0f, 0x82, 0xc7, 0xd6,
    0x2e, 0x75, 0x51, 0xb5, 0x70, 0x0a, 0x71, 0x65,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Clean__EXPECTED_HASH = {1, {
    0x78, 0xb6, 0xf9, 0x90, 0xbf, 0xcb, 0x5a, 0xd4,
    0x4c, 0xec, 0xf3, 0xe1, 0x5a, 0xcd, 0x7d, 0x62,
    0xd5, 0x07, 0xab, 0xca, 0xea, 0x5b, 0x22, 0xac,
    0x65, 0x65, 0x1b, 0xae, 0x16, 0x20, 0xc4, 0x41,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Delivery__EXPECTED_HASH = {1, {
    0xf6, 0x48, 0x10, 0xcd, 0x05, 0x55, 0xbb, 0x59,
    0xa1, 0x56, 0x5a, 0xb6, 0x82, 0x07, 0x28, 0x77,
    0x33, 0xd9, 0x06, 0xf5, 0x67, 0x8c, 0xf0, 0xe1,
    0xfd, 0x41, 0xbe, 0xc6, 0x43, 0x7a, 0xa8, 0xcd,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Loop__EXPECTED_HASH = {1, {
    0x49, 0x7f, 0xdc, 0x35, 0xb4, 0x89, 0x02, 0x3c,
    0x70, 0x48, 0xd4, 0x41, 0xb0, 0xa7, 0xbf, 0xbc,
    0x33, 0x51, 0x6b, 0xc4, 0x52, 0x63, 0xa4, 0x6c,
    0x99, 0x89, 0x71, 0x3c, 0x4b, 0x8b, 0xde, 0xf3,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Priority__EXPECTED_HASH = {1, {
    0xb9, 0x58, 0x31, 0xf1, 0xa2, 0x4a, 0x16, 0xd9,
    0xae, 0x63, 0x83, 0xbc, 0x1b, 0xf4, 0x46, 0xc7,
    0x02, 0xce, 0x20, 0x33, 0xe6, 0xaa, 0x00, 0x03,
    0x40, 0xc7, 0x1f, 0xd9, 0xc6, 0x2b, 0xc3, 0xac,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Station__EXPECTED_HASH = {1, {
    0x83, 0xa2, 0x3e, 0xd9, 0xc2, 0x76, 0x26, 0xe3,
    0x4f, 0x28, 0x80, 0x27, 0x06, 0xe0, 0xc2, 0xa0,
    0xad, 0x90, 0xf3, 0x66, 0xa8, 0xa4, 0x36, 0x76,
    0x75, 0xaf, 0xeb, 0x20, 0x55, 0xa7, 0x62, 0x2b,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__TaskType__EXPECTED_HASH = {1, {
    0x15, 0x35, 0x72, 0x34, 0xef, 0x2c, 0x30, 0xd2,
    0x36, 0x83, 0xd2, 0xc4, 0x1b, 0x41, 0x33, 0x89,
    0x06, 0xe1, 0xdc, 0xf7, 0xf0, 0x7b, 0xf0, 0x32,
    0xb9, 0x4e, 0xde, 0x27, 0xa1, 0x09, 0x0d, 0x95,
  }};
#endif

static char rmf_task_msgs__msg__TaskDescription__TYPE_NAME[] = "rmf_task_msgs/msg/TaskDescription";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME[] = "rmf_dispenser_msgs/msg/DispenserRequestItem";
static char rmf_task_msgs__msg__Behavior__TYPE_NAME[] = "rmf_task_msgs/msg/Behavior";
static char rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME[] = "rmf_task_msgs/msg/BehaviorParameter";
static char rmf_task_msgs__msg__Clean__TYPE_NAME[] = "rmf_task_msgs/msg/Clean";
static char rmf_task_msgs__msg__Delivery__TYPE_NAME[] = "rmf_task_msgs/msg/Delivery";
static char rmf_task_msgs__msg__Loop__TYPE_NAME[] = "rmf_task_msgs/msg/Loop";
static char rmf_task_msgs__msg__Priority__TYPE_NAME[] = "rmf_task_msgs/msg/Priority";
static char rmf_task_msgs__msg__Station__TYPE_NAME[] = "rmf_task_msgs/msg/Station";
static char rmf_task_msgs__msg__TaskType__TYPE_NAME[] = "rmf_task_msgs/msg/TaskType";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__TaskDescription__FIELD_NAME__start_time[] = "start_time";
static char rmf_task_msgs__msg__TaskDescription__FIELD_NAME__priority[] = "priority";
static char rmf_task_msgs__msg__TaskDescription__FIELD_NAME__task_type[] = "task_type";
static char rmf_task_msgs__msg__TaskDescription__FIELD_NAME__station[] = "station";
static char rmf_task_msgs__msg__TaskDescription__FIELD_NAME__loop[] = "loop";
static char rmf_task_msgs__msg__TaskDescription__FIELD_NAME__delivery[] = "delivery";
static char rmf_task_msgs__msg__TaskDescription__FIELD_NAME__clean[] = "clean";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__TaskDescription__FIELDS[] = {
  {
    {rmf_task_msgs__msg__TaskDescription__FIELD_NAME__start_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskDescription__FIELD_NAME__priority, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__Priority__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskDescription__FIELD_NAME__task_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__TaskType__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskDescription__FIELD_NAME__station, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__Station__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskDescription__FIELD_NAME__loop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__Loop__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskDescription__FIELD_NAME__delivery, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__Delivery__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskDescription__FIELD_NAME__clean, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__Clean__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__msg__TaskDescription__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Behavior__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Clean__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Loop__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Priority__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Station__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskType__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__TaskDescription__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__TaskDescription__TYPE_NAME, 33, 33},
      {rmf_task_msgs__msg__TaskDescription__FIELDS, 7, 7},
    },
    {rmf_task_msgs__msg__TaskDescription__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH, rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Behavior__EXPECTED_HASH, rmf_task_msgs__msg__Behavior__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__msg__Behavior__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH, rmf_task_msgs__msg__BehaviorParameter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_task_msgs__msg__BehaviorParameter__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Clean__EXPECTED_HASH, rmf_task_msgs__msg__Clean__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_task_msgs__msg__Clean__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Delivery__EXPECTED_HASH, rmf_task_msgs__msg__Delivery__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_task_msgs__msg__Delivery__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Loop__EXPECTED_HASH, rmf_task_msgs__msg__Loop__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_task_msgs__msg__Loop__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Priority__EXPECTED_HASH, rmf_task_msgs__msg__Priority__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_task_msgs__msg__Priority__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Station__EXPECTED_HASH, rmf_task_msgs__msg__Station__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rmf_task_msgs__msg__Station__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__TaskType__EXPECTED_HASH, rmf_task_msgs__msg__TaskType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rmf_task_msgs__msg__TaskType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Desired start time of a task\n"
  "builtin_interfaces/Time start_time\n"
  "\n"
  "# Priority of the task\n"
  "Priority priority\n"
  "\n"
  "# Task type\n"
  "TaskType task_type\n"
  "\n"
  "# The corresponding field for the above TaskType should be populated\n"
  "Station station\n"
  "Loop loop\n"
  "Delivery delivery\n"
  "Clean clean";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__TaskDescription__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__TaskDescription__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 266, 266},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__TaskDescription__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__TaskDescription__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_dispenser_msgs__msg__DispenserRequestItem__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__msg__Behavior__get_individual_type_description_source(NULL);
    sources[4] = *rmf_task_msgs__msg__BehaviorParameter__get_individual_type_description_source(NULL);
    sources[5] = *rmf_task_msgs__msg__Clean__get_individual_type_description_source(NULL);
    sources[6] = *rmf_task_msgs__msg__Delivery__get_individual_type_description_source(NULL);
    sources[7] = *rmf_task_msgs__msg__Loop__get_individual_type_description_source(NULL);
    sources[8] = *rmf_task_msgs__msg__Priority__get_individual_type_description_source(NULL);
    sources[9] = *rmf_task_msgs__msg__Station__get_individual_type_description_source(NULL);
    sources[10] = *rmf_task_msgs__msg__TaskType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
