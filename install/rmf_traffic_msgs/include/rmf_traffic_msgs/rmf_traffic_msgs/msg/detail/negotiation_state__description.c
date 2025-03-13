// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationState.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0x74, 0x66, 0x1b, 0xb2, 0xbb, 0x79, 0x11,
      0xc2, 0xed, 0xd3, 0x80, 0x43, 0x0f, 0x90, 0xec,
      0xba, 0x78, 0x7e, 0xbd, 0xa9, 0xa6, 0xe4, 0x75,
      0xbc, 0x7b, 0xea, 0x2f, 0xf2, 0x95, 0x0f, 0x7f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__functions.h"
#include "rmf_traffic_msgs/msg/detail/itinerary__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_status__functions.h"
#include "rmf_traffic_msgs/msg/detail/trajectory__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_forfeit__functions.h"
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__functions.h"
#include "rmf_traffic_msgs/msg/detail/route__functions.h"
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Itinerary__EXPECTED_HASH = {1, {
    0x33, 0x46, 0x57, 0xc1, 0xb2, 0x9f, 0x35, 0x5d,
    0xfc, 0x49, 0xe5, 0xe3, 0xf4, 0x76, 0x0e, 0x32,
    0x8e, 0xaa, 0xf0, 0x5b, 0xca, 0xaa, 0xe3, 0x2e,
    0x54, 0xea, 0xcd, 0xe7, 0x41, 0x49, 0x39, 0x96,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationForfeit__EXPECTED_HASH = {1, {
    0xa5, 0x97, 0x16, 0x31, 0x07, 0x64, 0xf6, 0xd9,
    0xe2, 0xf1, 0x54, 0x03, 0x6d, 0x58, 0x81, 0xce,
    0x3d, 0x5e, 0xed, 0xb9, 0x78, 0x2c, 0xfa, 0x45,
    0x33, 0x52, 0xcf, 0x9b, 0x8e, 0x6a, 0x1b, 0x10,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationKey__EXPECTED_HASH = {1, {
    0xd1, 0x5f, 0xff, 0x4c, 0x80, 0xf9, 0x24, 0xf3,
    0x4e, 0x6c, 0xe8, 0x32, 0x37, 0x7c, 0x29, 0xca,
    0xcd, 0xfe, 0xeb, 0x22, 0x7f, 0xd2, 0x3b, 0x3d,
    0xa5, 0x9a, 0x79, 0xa0, 0xe1, 0x25, 0x64, 0x8d,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationProposal__EXPECTED_HASH = {1, {
    0xe3, 0x29, 0x5f, 0x10, 0xff, 0x2c, 0xfc, 0x81,
    0x40, 0x8e, 0x83, 0x69, 0xfd, 0x4d, 0xf1, 0xd6,
    0xbf, 0xe5, 0x8c, 0x12, 0xe5, 0xd6, 0x20, 0x81,
    0x19, 0x11, 0xb7, 0x35, 0x52, 0xe3, 0x53, 0x90,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationRejection__EXPECTED_HASH = {1, {
    0x17, 0xfc, 0x07, 0xfb, 0x37, 0x31, 0x08, 0xdc,
    0x2e, 0x2c, 0x38, 0x90, 0xf2, 0xf8, 0x3d, 0x5a,
    0x8e, 0x12, 0xb2, 0x3b, 0x9c, 0x96, 0x3a, 0x07,
    0x94, 0x19, 0xc3, 0x2a, 0x5a, 0xa5, 0x11, 0xeb,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationStatus__EXPECTED_HASH = {1, {
    0x60, 0x43, 0x82, 0x54, 0x7a, 0x9b, 0x50, 0xab,
    0x80, 0x49, 0xc1, 0x27, 0x04, 0x28, 0x5d, 0x77,
    0x69, 0x5f, 0x60, 0xcf, 0x8f, 0x24, 0x20, 0xea,
    0x39, 0xf4, 0xcf, 0x6f, 0xbe, 0x80, 0x89, 0x97,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationTreeNode__EXPECTED_HASH = {1, {
    0x15, 0xf0, 0x2a, 0x27, 0xeb, 0x42, 0xa3, 0xd0,
    0x1b, 0x31, 0xb2, 0x6b, 0x08, 0x4f, 0xe6, 0x86,
    0x4b, 0x23, 0x15, 0xd8, 0x35, 0xd6, 0xc1, 0x1d,
    0xe2, 0xaa, 0xde, 0xb1, 0x7f, 0x7b, 0xa9, 0x2f,
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

static char rmf_traffic_msgs__msg__NegotiationState__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_traffic_msgs__msg__Itinerary__TYPE_NAME[] = "rmf_traffic_msgs/msg/Itinerary";
static char rmf_traffic_msgs__msg__NegotiationForfeit__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationForfeit";
static char rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationKey";
static char rmf_traffic_msgs__msg__NegotiationProposal__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationProposal";
static char rmf_traffic_msgs__msg__NegotiationRejection__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationRejection";
static char rmf_traffic_msgs__msg__NegotiationStatus__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationStatus";
static char rmf_traffic_msgs__msg__NegotiationTreeNode__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationTreeNode";
static char rmf_traffic_msgs__msg__Route__TYPE_NAME[] = "rmf_traffic_msgs/msg/Route";
static char rmf_traffic_msgs__msg__TrafficDependency__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrafficDependency";
static char rmf_traffic_msgs__msg__Trajectory__TYPE_NAME[] = "rmf_traffic_msgs/msg/Trajectory";
static char rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrajectoryWaypoint";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__status[] = "status";
static char rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__tree[] = "tree";
static char rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__orphan_proposals[] = "orphan_proposals";
static char rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__orphan_rejections[] = "orphan_rejections";
static char rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__orphan_forfeits[] = "orphan_forfeits";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationState__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationStatus__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__tree, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationTreeNode__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__orphan_proposals, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationProposal__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__orphan_rejections, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationRejection__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationState__FIELD_NAME__orphan_forfeits, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationForfeit__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__NegotiationState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Itinerary__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationForfeit__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationProposal__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationRejection__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationStatus__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationTreeNode__TYPE_NAME, 40, 40},
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
rmf_traffic_msgs__msg__NegotiationState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationState__TYPE_NAME, 37, 37},
      {rmf_traffic_msgs__msg__NegotiationState__FIELDS, 5, 5},
    },
    {rmf_traffic_msgs__msg__NegotiationState__REFERENCED_TYPE_DESCRIPTIONS, 12, 12},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Itinerary__EXPECTED_HASH, rmf_traffic_msgs__msg__Itinerary__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__Itinerary__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationForfeit__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationForfeit__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__NegotiationForfeit__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationKey__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationKey__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__NegotiationKey__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationProposal__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationProposal__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__msg__NegotiationProposal__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationRejection__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationRejection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_traffic_msgs__msg__NegotiationRejection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationStatus__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_traffic_msgs__msg__NegotiationStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationTreeNode__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationTreeNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_traffic_msgs__msg__NegotiationTreeNode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Route__EXPECTED_HASH, rmf_traffic_msgs__msg__Route__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rmf_traffic_msgs__msg__Route__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__TrafficDependency__EXPECTED_HASH, rmf_traffic_msgs__msg__TrafficDependency__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rmf_traffic_msgs__msg__TrafficDependency__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Trajectory__EXPECTED_HASH, rmf_traffic_msgs__msg__Trajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = rmf_traffic_msgs__msg__Trajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__TrajectoryWaypoint__EXPECTED_HASH, rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "NegotiationStatus status\n"
  "NegotiationTreeNode[] tree\n"
  "NegotiationProposal[] orphan_proposals\n"
  "NegotiationRejection[] orphan_rejections\n"
  "NegotiationForfeit[] orphan_forfeits";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationState__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 170, 170},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[13];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 13, 13};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__Itinerary__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__NegotiationForfeit__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__NegotiationKey__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__msg__NegotiationProposal__get_individual_type_description_source(NULL);
    sources[6] = *rmf_traffic_msgs__msg__NegotiationRejection__get_individual_type_description_source(NULL);
    sources[7] = *rmf_traffic_msgs__msg__NegotiationStatus__get_individual_type_description_source(NULL);
    sources[8] = *rmf_traffic_msgs__msg__NegotiationTreeNode__get_individual_type_description_source(NULL);
    sources[9] = *rmf_traffic_msgs__msg__Route__get_individual_type_description_source(NULL);
    sources[10] = *rmf_traffic_msgs__msg__TrafficDependency__get_individual_type_description_source(NULL);
    sources[11] = *rmf_traffic_msgs__msg__Trajectory__get_individual_type_description_source(NULL);
    sources[12] = *rmf_traffic_msgs__msg__TrajectoryWaypoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
