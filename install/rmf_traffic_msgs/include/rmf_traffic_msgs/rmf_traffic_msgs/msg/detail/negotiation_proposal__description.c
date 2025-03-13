// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationProposal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x29, 0x5f, 0x10, 0xff, 0x2c, 0xfc, 0x81,
      0x40, 0x8e, 0x83, 0x69, 0xfd, 0x4d, 0xf1, 0xd6,
      0xbf, 0xe5, 0x8c, 0x12, 0xe5, 0xd6, 0x20, 0x81,
      0x19, 0x11, 0xb7, 0x35, 0x52, 0xe3, 0x53, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/trajectory__functions.h"
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__functions.h"
#include "rmf_traffic_msgs/msg/detail/route__functions.h"
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
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

static char rmf_traffic_msgs__msg__NegotiationProposal__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationProposal";
static char rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationKey";
static char rmf_traffic_msgs__msg__Route__TYPE_NAME[] = "rmf_traffic_msgs/msg/Route";
static char rmf_traffic_msgs__msg__TrafficDependency__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrafficDependency";
static char rmf_traffic_msgs__msg__Trajectory__TYPE_NAME[] = "rmf_traffic_msgs/msg/Trajectory";
static char rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrajectoryWaypoint";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__conflict_version[] = "conflict_version";
static char rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__proposal_version[] = "proposal_version";
static char rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__for_participant[] = "for_participant";
static char rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__to_accommodate[] = "to_accommodate";
static char rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__plan_id[] = "plan_id";
static char rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__itinerary[] = "itinerary";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationProposal__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__conflict_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__proposal_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__for_participant, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__to_accommodate, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__plan_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationProposal__FIELD_NAME__itinerary, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__Route__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__NegotiationProposal__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
rmf_traffic_msgs__msg__NegotiationProposal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationProposal__TYPE_NAME, 40, 40},
      {rmf_traffic_msgs__msg__NegotiationProposal__FIELDS, 6, 6},
    },
    {rmf_traffic_msgs__msg__NegotiationProposal__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationKey__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationKey__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__NegotiationKey__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Route__EXPECTED_HASH, rmf_traffic_msgs__msg__Route__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__Route__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__TrafficDependency__EXPECTED_HASH, rmf_traffic_msgs__msg__TrafficDependency__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__TrafficDependency__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Trajectory__EXPECTED_HASH, rmf_traffic_msgs__msg__Trajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__Trajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__TrajectoryWaypoint__EXPECTED_HASH, rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The conflict ID that this proposal is targeted at\n"
  "uint64 conflict_version\n"
  "\n"
  "# The version number for this proposal within the negotiation\n"
  "uint64 proposal_version\n"
  "\n"
  "# The participant ID that this proposal is coming from\n"
  "uint64 for_participant\n"
  "\n"
  "# The participant IDs that this proposal is trying to accommodate. As each\n"
  "# participant proposes their ideal itinerary, the other participants in the\n"
  "# conflict will propose itineraries which accommodate it.\n"
  "#\n"
  "# The order of IDs in this dynamic array have important semantic meaning about\n"
  "# which itineraries are being accommodated. For example:\n"
  "#\n"
  "# [] (empty):  This proposal does not accommodate any other participants. This\n"
  "#              is the best possible itinerary for this participant.\n"
  "#\n"
  "# [3]:         This proposal is the best itinerary that can accommodate the\n"
  "#              ideal itinerary of participant 3.\n"
  "#\n"
  "# [3, 7]:      This proposal is the best itinerary for this participant that can\n"
  "#              accommodate both the ideal itinerary of participant 3 and the\n"
  "#              best itinerary of participant 7 that accommodates the ideal\n"
  "#              itinerary of participant 3.\n"
  "#\n"
  "# [3, 7, ...]: This proposal is the best itinerary that can accommodate the\n"
  "#              ideal itinerary of participant 3 and the best itineraries that\n"
  "#              accommodate the best itineraries of the participants that precede\n"
  "#              them in the list, recursively.\n"
  "NegotiationKey[] to_accommodate\n"
  "\n"
  "# The unique ID for the plan that is being proposed\n"
  "uint64 plan_id\n"
  "\n"
  "# The itinerary that is being proposed for this participant\n"
  "Route[] itinerary";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationProposal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationProposal__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1607, 1607},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationProposal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationProposal__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__NegotiationKey__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__Route__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__TrafficDependency__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__Trajectory__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__msg__TrajectoryWaypoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
