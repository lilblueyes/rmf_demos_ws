// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/BidNotice.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/bid_notice__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__BidNotice__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0xd5, 0x2a, 0x62, 0x4f, 0x42, 0xc0, 0xf1,
      0xbb, 0x89, 0xe4, 0x2f, 0x94, 0xf7, 0x7f, 0x1f,
      0x35, 0xb4, 0xbc, 0x0b, 0x75, 0xc5, 0x3a, 0x12,
      0xdf, 0x34, 0xb8, 0xdb, 0xaa, 0x5f, 0xd3, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/duration__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
#endif

static char rmf_task_msgs__msg__BidNotice__TYPE_NAME[] = "rmf_task_msgs/msg/BidNotice";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__BidNotice__FIELD_NAME__request[] = "request";
static char rmf_task_msgs__msg__BidNotice__FIELD_NAME__task_id[] = "task_id";
static char rmf_task_msgs__msg__BidNotice__FIELD_NAME__time_window[] = "time_window";
static char rmf_task_msgs__msg__BidNotice__FIELD_NAME__dry_run[] = "dry_run";
static char rmf_task_msgs__msg__BidNotice__DEFAULT_VALUE__dry_run[] = "False";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__BidNotice__FIELDS[] = {
  {
    {rmf_task_msgs__msg__BidNotice__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidNotice__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidNotice__FIELD_NAME__time_window, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidNotice__FIELD_NAME__dry_run, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {rmf_task_msgs__msg__BidNotice__DEFAULT_VALUE__dry_run, 5, 5},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__msg__BidNotice__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__BidNotice__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__BidNotice__TYPE_NAME, 27, 27},
      {rmf_task_msgs__msg__BidNotice__FIELDS, 4, 4},
    },
    {rmf_task_msgs__msg__BidNotice__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is published by the Task Dispatcher node to notify all\n"
  "# Fleet Adapters to participate in a bidding process for a new task.\n"
  "# Fleet Adapters may then submit a BidProposal message with their best proposal\n"
  "# to accommodate the new task.\n"
  "\n"
  "# Details of the task request\n"
  "string request\n"
  "\n"
  "# The ID for this request\n"
  "string task_id\n"
  "\n"
  "# Duration for which the bidding is open\n"
  "builtin_interfaces/Duration time_window\n"
  "\n"
  "# If true, the Fleet Adapters will still respond with a BidProposal but the\n"
  "# task cannot be dispatched to any fleet.\n"
  "bool dry_run false";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__BidNotice__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__BidNotice__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 558, 558},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__BidNotice__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__BidNotice__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
