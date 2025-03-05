// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistency.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ScheduleInconsistency__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x84, 0xc4, 0xe6, 0xbc, 0x9f, 0x84, 0xa1,
      0xd0, 0x1b, 0x43, 0x6c, 0x45, 0xb7, 0x1f, 0x99,
      0xfa, 0x2a, 0x8d, 0x9d, 0xc1, 0x57, 0xb3, 0x9b,
      0x78, 0x03, 0xbd, 0x80, 0x47, 0x3a, 0xdf, 0xb7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ScheduleInconsistencyRange__EXPECTED_HASH = {1, {
    0xdd, 0xc2, 0x50, 0x21, 0x0f, 0x2a, 0x4d, 0x58,
    0x91, 0x54, 0x7a, 0xa4, 0x9f, 0x95, 0x9b, 0xab,
    0x15, 0x0c, 0x28, 0xb4, 0xf1, 0xfa, 0x9c, 0xdd,
    0x24, 0x99, 0x09, 0x9a, 0xba, 0x17, 0x8a, 0x75,
  }};
#endif

static char rmf_traffic_msgs__msg__ScheduleInconsistency__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleInconsistency";
static char rmf_traffic_msgs__msg__ScheduleInconsistencyRange__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleInconsistencyRange";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ScheduleInconsistency__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__ScheduleInconsistency__FIELD_NAME__ranges[] = "ranges";
static char rmf_traffic_msgs__msg__ScheduleInconsistency__FIELD_NAME__last_known_itinerary[] = "last_known_itinerary";
static char rmf_traffic_msgs__msg__ScheduleInconsistency__FIELD_NAME__last_known_progress[] = "last_known_progress";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ScheduleInconsistency__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ScheduleInconsistency__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleInconsistency__FIELD_NAME__ranges, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__ScheduleInconsistencyRange__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleInconsistency__FIELD_NAME__last_known_itinerary, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleInconsistency__FIELD_NAME__last_known_progress, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__ScheduleInconsistency__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__ScheduleInconsistencyRange__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__ScheduleInconsistency__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ScheduleInconsistency__TYPE_NAME, 42, 42},
      {rmf_traffic_msgs__msg__ScheduleInconsistency__FIELDS, 4, 4},
    },
    {rmf_traffic_msgs__msg__ScheduleInconsistency__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleInconsistencyRange__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleInconsistencyRange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__ScheduleInconsistencyRange__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "uint64 participant\n"
  "\n"
  "ScheduleInconsistencyRange[] ranges\n"
  "\n"
  "uint64 last_known_itinerary\n"
  "\n"
  "uint64 last_known_progress";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ScheduleInconsistency__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ScheduleInconsistency__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 114, 114},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ScheduleInconsistency__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ScheduleInconsistency__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__ScheduleInconsistencyRange__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
