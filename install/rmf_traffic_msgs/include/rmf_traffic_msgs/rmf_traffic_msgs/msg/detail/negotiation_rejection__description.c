// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationRejection.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationRejection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0xfc, 0x07, 0xfb, 0x37, 0x31, 0x08, 0xdc,
      0x2e, 0x2c, 0x38, 0x90, 0xf2, 0xf8, 0x3d, 0x5a,
      0x8e, 0x12, 0xb2, 0x3b, 0x9c, 0x96, 0x3a, 0x07,
      0x94, 0x19, 0xc3, 0x2a, 0x5a, 0xa5, 0x11, 0xeb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"
#include "rmf_traffic_msgs/msg/detail/route__functions.h"
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__functions.h"
#include "rmf_traffic_msgs/msg/detail/itinerary__functions.h"
#include "rmf_traffic_msgs/msg/detail/trajectory__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Itinerary__EXPECTED_HASH = {1, {
    0x33, 0x46, 0x57, 0xc1, 0xb2, 0x9f, 0x35, 0x5d,
    0xfc, 0x49, 0xe5, 0xe3, 0xf4, 0x76, 0x0e, 0x32,
    0x8e, 0xaa, 0xf0, 0x5b, 0xca, 0xaa, 0xe3, 0x2e,
    0x54, 0xea, 0xcd, 0xe7, 0x41, 0x49, 0x39, 0x96,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationKey__EXPECTED_HASH = {1, {
    0xd1, 0x5f, 0xff, 0x4c, 0x80, 0xf9, 0x24, 0xf3,
    0x4e, 0x6c, 0xe8, 0x32, 0x37, 0x7c, 0x29, 0xca,
    0xcd, 0xfe, 0xeb, 0x22, 0x7f, 0xd2, 0x3b, 0x3d,
    0xa5, 0x9a, 0x79, 0xa0, 0xe1, 0x25, 0x64, 0x8d,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Route__EXPECTED_HASH = {1, {
    0xcd, 0x3e, 0xfc, 0xae, 0x70, 0x5a, 0x5c, 0x77,
    0xbd, 0xa4, 0xea, 0x93, 0xd8, 0xdc, 0x9c, 0xe7,
    0x24, 0x2e, 0xa0, 0xdf, 0x49, 0x9a, 0xdb, 0xce,
    0xa2, 0x0c, 0x9d, 0x5b, 0x11, 0x02, 0xa4, 0x2b,
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

static char rmf_traffic_msgs__msg__NegotiationRejection__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationRejection";
static char rmf_traffic_msgs__msg__Itinerary__TYPE_NAME[] = "rmf_traffic_msgs/msg/Itinerary";
static char rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationKey";
static char rmf_traffic_msgs__msg__Route__TYPE_NAME[] = "rmf_traffic_msgs/msg/Route";
static char rmf_traffic_msgs__msg__TrafficDependency__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrafficDependency";
static char rmf_traffic_msgs__msg__Trajectory__TYPE_NAME[] = "rmf_traffic_msgs/msg/Trajectory";
static char rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrajectoryWaypoint";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationRejection__FIELD_NAME__conflict_version[] = "conflict_version";
static char rmf_traffic_msgs__msg__NegotiationRejection__FIELD_NAME__table[] = "table";
static char rmf_traffic_msgs__msg__NegotiationRejection__FIELD_NAME__rejected_by[] = "rejected_by";
static char rmf_traffic_msgs__msg__NegotiationRejection__FIELD_NAME__alternatives[] = "alternatives";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationRejection__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationRejection__FIELD_NAME__conflict_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationRejection__FIELD_NAME__table, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationRejection__FIELD_NAME__rejected_by, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationRejection__FIELD_NAME__alternatives, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__Itinerary__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__NegotiationRejection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__Itinerary__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Route__TYPE_NAME, 26, 26},
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
rmf_traffic_msgs__msg__NegotiationRejection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationRejection__TYPE_NAME, 41, 41},
      {rmf_traffic_msgs__msg__NegotiationRejection__FIELDS, 4, 4},
    },
    {rmf_traffic_msgs__msg__NegotiationRejection__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Itinerary__EXPECTED_HASH, rmf_traffic_msgs__msg__Itinerary__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__Itinerary__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationKey__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationKey__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__NegotiationKey__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Route__EXPECTED_HASH, rmf_traffic_msgs__msg__Route__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__Route__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__TrafficDependency__EXPECTED_HASH, rmf_traffic_msgs__msg__TrafficDependency__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__TrafficDependency__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Trajectory__EXPECTED_HASH, rmf_traffic_msgs__msg__Trajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__msg__Trajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__TrajectoryWaypoint__EXPECTED_HASH, rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The conflict ID that this rejection is targeted at\n"
  "uint64 conflict_version\n"
  "\n"
  "# Reject this negotiation table\n"
  "NegotiationKey[] table\n"
  "\n"
  "# The rejection is by this participant\n"
  "uint64 rejected_by\n"
  "\n"
  "Itinerary[] alternatives";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationRejection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationRejection__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 219, 219},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationRejection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationRejection__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__Itinerary__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__NegotiationKey__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__Route__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__TrafficDependency__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__msg__Trajectory__get_individual_type_description_source(NULL);
    sources[6] = *rmf_traffic_msgs__msg__TrajectoryWaypoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
