// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/alert__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__Alert__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0xa5, 0x02, 0x9e, 0xdc, 0xd1, 0x0f, 0x45,
      0x82, 0x62, 0x54, 0x29, 0x61, 0xe3, 0xff, 0x75,
      0xe9, 0xe2, 0x0d, 0x2d, 0x02, 0x8f, 0x0d, 0x52,
      0x35, 0xab, 0x67, 0x2a, 0xf3, 0x9e, 0xbf, 0xbb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_task_msgs/msg/detail/alert_parameter__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_task_msgs__msg__AlertParameter__EXPECTED_HASH = {1, {
    0xe9, 0xa4, 0x25, 0xe5, 0xc0, 0x26, 0x57, 0x27,
    0x4d, 0x36, 0xce, 0xeb, 0xa4, 0xf9, 0x13, 0x2e,
    0x02, 0xc3, 0x09, 0xe7, 0x79, 0x6c, 0x4f, 0x81,
    0x97, 0x32, 0xcc, 0x8f, 0x5f, 0x42, 0x69, 0xf3,
  }};
#endif

static char rmf_task_msgs__msg__Alert__TYPE_NAME[] = "rmf_task_msgs/msg/Alert";
static char rmf_task_msgs__msg__AlertParameter__TYPE_NAME[] = "rmf_task_msgs/msg/AlertParameter";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__Alert__FIELD_NAME__id[] = "id";
static char rmf_task_msgs__msg__Alert__FIELD_NAME__title[] = "title";
static char rmf_task_msgs__msg__Alert__FIELD_NAME__subtitle[] = "subtitle";
static char rmf_task_msgs__msg__Alert__FIELD_NAME__message[] = "message";
static char rmf_task_msgs__msg__Alert__FIELD_NAME__display[] = "display";
static char rmf_task_msgs__msg__Alert__DEFAULT_VALUE__display[] = "True";
static char rmf_task_msgs__msg__Alert__FIELD_NAME__tier[] = "tier";
static char rmf_task_msgs__msg__Alert__FIELD_NAME__responses_available[] = "responses_available";
static char rmf_task_msgs__msg__Alert__FIELD_NAME__alert_parameters[] = "alert_parameters";
static char rmf_task_msgs__msg__Alert__FIELD_NAME__task_id[] = "task_id";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__Alert__FIELDS[] = {
  {
    {rmf_task_msgs__msg__Alert__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Alert__FIELD_NAME__title, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Alert__FIELD_NAME__subtitle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Alert__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Alert__FIELD_NAME__display, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {rmf_task_msgs__msg__Alert__DEFAULT_VALUE__display, 4, 4},
  },
  {
    {rmf_task_msgs__msg__Alert__FIELD_NAME__tier, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Alert__FIELD_NAME__responses_available, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Alert__FIELD_NAME__alert_parameters, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_task_msgs__msg__AlertParameter__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Alert__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__msg__Alert__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_task_msgs__msg__AlertParameter__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__Alert__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__Alert__TYPE_NAME, 23, 23},
      {rmf_task_msgs__msg__Alert__FIELDS, 9, 9},
    },
    {rmf_task_msgs__msg__Alert__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_task_msgs__msg__AlertParameter__EXPECTED_HASH, rmf_task_msgs__msg__AlertParameter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_task_msgs__msg__AlertParameter__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The unique ID which responses can reply to\n"
  "string id\n"
  "\n"
  "# Title, subtitle and message to be displayed on any frontend\n"
  "string title\n"
  "string subtitle\n"
  "string message\n"
  "\n"
  "# Whether this alert should be displayed on any frontend, default\n"
  "# as true\n"
  "bool display true\n"
  "\n"
  "# The severity tier of this alert\n"
  "uint8 tier\n"
  "uint8 TIER_INFO=0\n"
  "uint8 TIER_WARNING=1\n"
  "uint8 TIER_ERROR=2\n"
  "\n"
  "# Responses available for this alert. If no responses are expected\n"
  "# this field can be left empty\n"
  "string[] responses_available\n"
  "\n"
  "# Parameters that may be useful for custom interactions\n"
  "AlertParameter[] alert_parameters\n"
  "\n"
  "# The task ID that is involved in this alert. If no task is involved\n"
  "# this string can be left empty\n"
  "string task_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__Alert__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__Alert__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 697, 697},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__Alert__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__Alert__get_individual_type_description_source(NULL),
    sources[1] = *rmf_task_msgs__msg__AlertParameter__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
