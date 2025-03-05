// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:msg/Schedule.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/msg/detail/schedule__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__msg__Schedule__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x65, 0x6b, 0xb7, 0x23, 0x4e, 0x31, 0xde, 0xd0,
      0xb5, 0xcb, 0x60, 0xf9, 0x8e, 0xd1, 0xc0, 0x86,
      0x9b, 0x1a, 0xe7, 0x6f, 0xaf, 0xf3, 0xe4, 0x68,
      0x6f, 0x08, 0xc9, 0x78, 0x8e, 0x47, 0xb1, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_scheduler_msgs/msg/detail/payload__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH = {1, {
    0xc9, 0x73, 0x95, 0x52, 0xb9, 0x9a, 0xc5, 0xdc,
    0x0c, 0x69, 0xfb, 0x91, 0x96, 0xe9, 0xf8, 0xc0,
    0x27, 0x3a, 0x50, 0xb4, 0xdb, 0x65, 0x63, 0xf0,
    0xb4, 0x37, 0x47, 0xd1, 0x05, 0x6d, 0xc3, 0xd7,
  }};
#endif

static char rmf_scheduler_msgs__msg__Schedule__TYPE_NAME[] = "rmf_scheduler_msgs/msg/Schedule";
static char rmf_scheduler_msgs__msg__Payload__TYPE_NAME[] = "rmf_scheduler_msgs/msg/Payload";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__name[] = "name";
static char rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__created_at[] = "created_at";
static char rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__schedule[] = "schedule";
static char rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__start_at[] = "start_at";
static char rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__finish_at[] = "finish_at";
static char rmf_scheduler_msgs__msg__Schedule__DEFAULT_VALUE__finish_at[] = "9223372036854775807";
static char rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__group[] = "group";
static char rmf_scheduler_msgs__msg__Schedule__DEFAULT_VALUE__group[] = "default";
static char rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__payload[] = "payload";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__msg__Schedule__FIELDS[] = {
  {
    {rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__created_at, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__schedule, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__start_at, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__finish_at, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {rmf_scheduler_msgs__msg__Schedule__DEFAULT_VALUE__finish_at, 19, 19},
  },
  {
    {rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__group, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {rmf_scheduler_msgs__msg__Schedule__DEFAULT_VALUE__group, 7, 7},
  },
  {
    {rmf_scheduler_msgs__msg__Schedule__FIELD_NAME__payload, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__msg__Schedule__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__msg__Schedule__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__msg__Schedule__TYPE_NAME, 31, 31},
      {rmf_scheduler_msgs__msg__Schedule__FIELDS, 7, 7},
    },
    {rmf_scheduler_msgs__msg__Schedule__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH, rmf_scheduler_msgs__msg__Payload__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_scheduler_msgs__msg__Payload__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Name to identify the schedule, must be unique across all schedules.\n"
  "string name\n"
  "\n"
  "# unix timestamp in seconds\n"
  "int64 created_at\n"
  "\n"
  "# \\xe2\\x94\\x8c\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80seconds (0 - 59)\n"
  "# \\xe2\\x94\\x82 \\xe2\\x94\\x8c\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80 minute (0 - 59)\n"
  "# \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x8c\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80 hour (0 - 23)\n"
  "# \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x8c\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80 day of the month (1 - 31)\n"
  "# \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x8c\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80 month (1 - 12)\n"
  "# \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x8c\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80 day of the week (0 - 6) (Sunday to Saturday)\n"
  "# \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x8c\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80\\xe2\\x94\\x80 years (1970 - 2099) (optional)\n"
  "# \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82 \\xe2\\x94\\x82\n"
  "# * * * * * * *\n"
  "# \n"
  "# | Field | Required | Allowed value | Allowed special characters |\n"
  "# | --- | --- | --- | --- |\n"
  "# | seconds | yes | 0-59 | `*` `,` `-` |\n"
  "# | minutes | yes | 0-59 | `*` `,` `-` |\n"
  "# | hours | yes | 0-23 | `*` `,` `-` |\n"
  "# | days of month | 1-31 | `*` `,` `-` `?` `L` `W` |\n"
  "# | months | yes | 1-12 | `*` `,` `-` |\n"
  "# | days of week | yes | `*` `,` `-` `?` `L` `#` |\n"
  "# | years | no | 1970-2099 | `*` `,` `-` |\n"
  "# \n"
  "# The special characters have the following meaning:\n"
  "# \n"
  "# | Special character | Meaning | Description |\n"
  "# | --- | --- | --- |\n"
  "# | `*` | all values | selects all values within a field |\n"
  "# | `?` | no specific value | specify one field and leave the other unspecified |\n"
  "# | `-` | range | specify ranges |\n"
  "# | `,` | comma | specify additional values |\n"
  "# | `/` | slash | speficy increments |\n"
  "# | `L` | last | last day of the month or last day of the week |\n"
  "# | `W` | weekday | the weekday nearest to the given day |\n"
  "# | `#` | nth |  specify the Nth day of the month |\n"
  "# Examples: \n"
  "# \n"
  "# | CRON | Description |\n"
  "# | --- | --- |\n"
  "# | * * * * * * | Every second |\n"
  "# | */5 * * * * ? | Every 5 seconds |\n"
  "# | 0 */5 */2 * * ? | Every 5 minutes, every 2 hours |\n"
  "# | 0 */2 */2 ? */2 */2 | Every 2 minutes, every 2 hours, every 2 days of the week, every 2 months |\n"
  "# | 0 15 10 * * ? * | 10:15 AM every day |\n"
  "# | 0 0/5 14 * * ? | Every 5 minutes starting at 2 PM and ending at 2:55 PM, every day |\n"
  "# | 0 10,44 14 ? 3 WED | 2:10 PM and at 2:44 PM every Wednesday of March |\n"
  "# | 0 15 10 ? * MON-FRI | 10:15 AM every Monday, Tuesday, Wednesday, Thursday and Friday |\n"
  "# | 0 15 10 L * ? | 10:15 AM on the last day of every month |\n"
  "# | 0 0 12 1/5 * ? | 12 PM every 5 days every month, starting on the first day of the month |\n"
  "# | 0 11 11 11 11 ? | Every November 11th at 11:11 AM |\n"
  "# \n"
  "# Reference: https://github.com/mariusbancila/croncpp/blob/999f7685ab683b58872386c0aa019acf97c6570a/README.md\n"
  "string schedule\n"
  "\n"
  "# unix time in secs\n"
  "int64 start_at\n"
  "\n"
  "# unix time in secs\n"
  "int64 finish_at 9223372036854775807\n"
  "\n"
  "string group \"default\"\n"
  "\n"
  "Payload payload";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__msg__Schedule__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__msg__Schedule__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2515, 2515},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__msg__Schedule__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__msg__Schedule__get_individual_type_description_source(NULL),
    sources[1] = *rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
