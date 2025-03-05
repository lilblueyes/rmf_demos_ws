// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/SchedulePatch.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/schedule_patch__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__SchedulePatch__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7c, 0xe1, 0xfe, 0x81, 0x88, 0x6f, 0x0d, 0xac,
      0xcc, 0x37, 0x33, 0xe8, 0x80, 0xd3, 0x63, 0x7f,
      0x31, 0xf9, 0x12, 0x88, 0x95, 0xd4, 0xae, 0x73,
      0x56, 0xb7, 0xf4, 0x91, 0xaa, 0x65, 0x09, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__functions.h"
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__functions.h"
#include "rmf_traffic_msgs/msg/detail/route__functions.h"
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__functions.h"
#include "rmf_traffic_msgs/msg/detail/trajectory__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Route__EXPECTED_HASH = {1, {
    0xcd, 0x3e, 0xfc, 0xae, 0x70, 0x5a, 0x5c, 0x77,
    0xbd, 0xa4, 0xea, 0x93, 0xd8, 0xdc, 0x9c, 0xe7,
    0x24, 0x2e, 0xa0, 0xdf, 0x49, 0x9a, 0xdb, 0xce,
    0xa2, 0x0c, 0x9d, 0x5b, 0x11, 0x02, 0xa4, 0x2b,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ScheduleChangeAdd__EXPECTED_HASH = {1, {
    0x2b, 0x72, 0xcb, 0xd6, 0x38, 0xad, 0x2c, 0xb0,
    0xdb, 0x36, 0x90, 0x6b, 0x13, 0x7d, 0xe2, 0x09,
    0xec, 0x29, 0x3c, 0xb1, 0xdb, 0xa3, 0x58, 0x6d,
    0xaa, 0x89, 0x48, 0x85, 0xd8, 0x3f, 0xb3, 0x7f,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ScheduleChangeAddItem__EXPECTED_HASH = {1, {
    0xa9, 0x09, 0x05, 0xd5, 0xa2, 0xb5, 0x6e, 0x30,
    0x2c, 0xbd, 0x68, 0xc4, 0xc2, 0x70, 0x8d, 0xb8,
    0x0a, 0x11, 0xdf, 0xff, 0x9d, 0x23, 0x86, 0x21,
    0xfd, 0xc4, 0xd6, 0x56, 0x9d, 0xcc, 0xcb, 0xc2,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ScheduleChangeCull__EXPECTED_HASH = {1, {
    0x25, 0x34, 0xc5, 0xee, 0x27, 0x82, 0x06, 0x12,
    0x7c, 0x26, 0x62, 0x13, 0xc8, 0x8c, 0xe8, 0xfd,
    0x54, 0xdc, 0x69, 0xfb, 0x9e, 0xbf, 0x11, 0xf7,
    0x47, 0xa4, 0xe2, 0xa9, 0xda, 0x0d, 0x6f, 0x19,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ScheduleChangeDelay__EXPECTED_HASH = {1, {
    0xe9, 0xaf, 0xb0, 0x41, 0x2d, 0xd8, 0x5b, 0xb9,
    0xb5, 0x9d, 0xba, 0x03, 0xd8, 0x78, 0x8a, 0xa8,
    0x5b, 0x26, 0x8f, 0x24, 0xa1, 0x75, 0x4a, 0xd9,
    0x50, 0xd3, 0xf8, 0x20, 0x5e, 0x9f, 0x78, 0x9c,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ScheduleChangeProgress__EXPECTED_HASH = {1, {
    0xe9, 0xe8, 0x04, 0x4b, 0x83, 0xf5, 0x63, 0x29,
    0xb6, 0x83, 0x5d, 0x43, 0xee, 0x9f, 0x37, 0xc2,
    0x21, 0xc3, 0x66, 0x93, 0x2a, 0x4f, 0x24, 0xd8,
    0x7f, 0x79, 0x36, 0xce, 0xe5, 0x3e, 0x69, 0xb5,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ScheduleParticipantPatch__EXPECTED_HASH = {1, {
    0x93, 0x3f, 0xba, 0x21, 0xfb, 0xb9, 0xa2, 0x9b,
    0xce, 0x7d, 0xcb, 0x9b, 0x2c, 0x9c, 0x35, 0xc9,
    0xe4, 0x18, 0x9f, 0x34, 0x3d, 0xbc, 0x26, 0x82,
    0xe0, 0x54, 0x05, 0xb8, 0x20, 0x1d, 0x42, 0x98,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__TrafficDependency__EXPECTED_HASH = {1, {
    0x56, 0x65, 0x53, 0x58, 0x3f, 0xcd, 0x8c, 0x95,
    0xc9, 0x97, 0x4e, 0xa7, 0xb1, 0x39, 0x7e, 0xa9,
    0x19, 0x81, 0xbc, 0x85, 0x2d, 0x7b, 0xf6, 0x1c,
    0xa6, 0x68, 0x21, 0xed, 0xa0, 0xa6, 0x0e, 0xcb,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Trajectory__EXPECTED_HASH = {1, {
    0xbc, 0xef, 0x09, 0xfe, 0x0b, 0x60, 0x19, 0xe8,
    0xee, 0xc0, 0x93, 0xe6, 0x24, 0x7d, 0xed, 0x2e,
    0xd9, 0x4d, 0x3d, 0x16, 0x69, 0xfc, 0x92, 0x70,
    0xe8, 0x3d, 0x7d, 0x1c, 0xef, 0x13, 0x3e, 0xa1,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__TrajectoryWaypoint__EXPECTED_HASH = {1, {
    0xf5, 0x1b, 0x5b, 0x51, 0x6f, 0xa0, 0xb4, 0x13,
    0xb2, 0x1f, 0xc5, 0xa3, 0x2b, 0xd9, 0x13, 0xc9,
    0x5d, 0xcb, 0x3b, 0x9a, 0x97, 0x83, 0x5a, 0x9b,
    0x82, 0xb7, 0xea, 0x98, 0x6e, 0x1a, 0x19, 0xe2,
  }};
#endif

static char rmf_traffic_msgs__msg__SchedulePatch__TYPE_NAME[] = "rmf_traffic_msgs/msg/SchedulePatch";
static char rmf_traffic_msgs__msg__Route__TYPE_NAME[] = "rmf_traffic_msgs/msg/Route";
static char rmf_traffic_msgs__msg__ScheduleChangeAdd__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleChangeAdd";
static char rmf_traffic_msgs__msg__ScheduleChangeAddItem__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleChangeAddItem";
static char rmf_traffic_msgs__msg__ScheduleChangeCull__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleChangeCull";
static char rmf_traffic_msgs__msg__ScheduleChangeDelay__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleChangeDelay";
static char rmf_traffic_msgs__msg__ScheduleChangeProgress__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleChangeProgress";
static char rmf_traffic_msgs__msg__ScheduleParticipantPatch__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleParticipantPatch";
static char rmf_traffic_msgs__msg__TrafficDependency__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrafficDependency";
static char rmf_traffic_msgs__msg__Trajectory__TYPE_NAME[] = "rmf_traffic_msgs/msg/Trajectory";
static char rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrajectoryWaypoint";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__participants[] = "participants";
static char rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__cull[] = "cull";
static char rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__has_base_version[] = "has_base_version";
static char rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__base_version[] = "base_version";
static char rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__latest_version[] = "latest_version";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__SchedulePatch__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__participants, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__ScheduleParticipantPatch__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__cull, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__ScheduleChangeCull__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__has_base_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__base_version, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__SchedulePatch__FIELD_NAME__latest_version, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__SchedulePatch__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__Route__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleChangeAdd__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleChangeAddItem__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleChangeCull__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleChangeDelay__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleChangeProgress__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleParticipantPatch__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__TrafficDependency__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Trajectory__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__SchedulePatch__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__SchedulePatch__TYPE_NAME, 34, 34},
      {rmf_traffic_msgs__msg__SchedulePatch__FIELDS, 5, 5},
    },
    {rmf_traffic_msgs__msg__SchedulePatch__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Route__EXPECTED_HASH, rmf_traffic_msgs__msg__Route__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__Route__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleChangeAdd__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleChangeAdd__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__ScheduleChangeAdd__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleChangeAddItem__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleChangeAddItem__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__ScheduleChangeAddItem__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleChangeCull__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleChangeCull__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__ScheduleChangeCull__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleChangeDelay__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleChangeDelay__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__msg__ScheduleChangeDelay__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleChangeProgress__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleChangeProgress__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_traffic_msgs__msg__ScheduleChangeProgress__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleParticipantPatch__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleParticipantPatch__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_traffic_msgs__msg__ScheduleParticipantPatch__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__TrafficDependency__EXPECTED_HASH, rmf_traffic_msgs__msg__TrafficDependency__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_traffic_msgs__msg__TrafficDependency__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Trajectory__EXPECTED_HASH, rmf_traffic_msgs__msg__Trajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rmf_traffic_msgs__msg__Trajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__TrajectoryWaypoint__EXPECTED_HASH, rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The changes to the schedule, grouped into the different participants\n"
  "ScheduleParticipantPatch[] participants\n"
  "\n"
  "# TODO(MXG): The database will only ever report 1 cull per update. Consider\n"
  "# making this a single field instead of a dynamic array.\n"
  "ScheduleChangeCull[] cull\n"
  "\n"
  "bool has_base_version\n"
  "uint64 base_version\n"
  "uint64 latest_version";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__SchedulePatch__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__SchedulePatch__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 337, 337},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__SchedulePatch__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__SchedulePatch__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__Route__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__ScheduleChangeAdd__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__ScheduleChangeAddItem__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__ScheduleChangeCull__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__msg__ScheduleChangeDelay__get_individual_type_description_source(NULL);
    sources[6] = *rmf_traffic_msgs__msg__ScheduleChangeProgress__get_individual_type_description_source(NULL);
    sources[7] = *rmf_traffic_msgs__msg__ScheduleParticipantPatch__get_individual_type_description_source(NULL);
    sources[8] = *rmf_traffic_msgs__msg__TrafficDependency__get_individual_type_description_source(NULL);
    sources[9] = *rmf_traffic_msgs__msg__Trajectory__get_individual_type_description_source(NULL);
    sources[10] = *rmf_traffic_msgs__msg__TrajectoryWaypoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
