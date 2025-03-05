// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
// generated code does not contain a copyright notice

#include "rmf_workcell_msgs/msg/detail/workcell_configuration__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
const rosidl_type_hash_t *
rmf_workcell_msgs__msg__WorkcellConfiguration__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0xbf, 0x3a, 0x19, 0xe6, 0xf4, 0x59, 0x44,
      0x2b, 0xd4, 0x20, 0x35, 0xeb, 0x1a, 0xb1, 0xe7,
      0xdd, 0x37, 0x54, 0x3d, 0x13, 0x8b, 0xae, 0xb4,
      0x38, 0xd0, 0x1b, 0x76, 0x5c, 0xc9, 0x20, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_workcell_msgs/msg/detail/asset__functions.h"
#include "rmf_workcell_msgs/msg/detail/trait__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_workcell_msgs__msg__Asset__EXPECTED_HASH = {1, {
    0x05, 0x86, 0x53, 0xf6, 0x57, 0xaf, 0xf5, 0x1e,
    0x20, 0xe0, 0x95, 0x62, 0x13, 0x86, 0x62, 0x39,
    0x37, 0xdb, 0x81, 0xab, 0xa0, 0x60, 0xe7, 0x06,
    0x7f, 0x3f, 0xab, 0x9d, 0x6b, 0xad, 0x81, 0x60,
  }};
static const rosidl_type_hash_t rmf_workcell_msgs__msg__Trait__EXPECTED_HASH = {1, {
    0xf0, 0x48, 0x2c, 0x4e, 0xaa, 0x46, 0x1f, 0x85,
    0xc7, 0xc2, 0x65, 0x5c, 0x62, 0x47, 0xad, 0x0b,
    0xe9, 0x7f, 0xd2, 0x37, 0xc5, 0xc0, 0xd1, 0x22,
    0x69, 0xf8, 0xcd, 0x74, 0xf9, 0xa8, 0x94, 0x54,
  }};
#endif

static char rmf_workcell_msgs__msg__WorkcellConfiguration__TYPE_NAME[] = "rmf_workcell_msgs/msg/WorkcellConfiguration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_workcell_msgs__msg__Asset__TYPE_NAME[] = "rmf_workcell_msgs/msg/Asset";
static char rmf_workcell_msgs__msg__Trait__TYPE_NAME[] = "rmf_workcell_msgs/msg/Trait";

// Define type names, field names, and default values
static char rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__time[] = "time";
static char rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__guid[] = "guid";
static char rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__type[] = "type";
static char rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__assets[] = "assets";
static char rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__traits[] = "traits";

static rosidl_runtime_c__type_description__Field rmf_workcell_msgs__msg__WorkcellConfiguration__FIELDS[] = {
  {
    {rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__guid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__assets, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_workcell_msgs__msg__Asset__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__WorkcellConfiguration__FIELD_NAME__traits, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_workcell_msgs__msg__Trait__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_workcell_msgs__msg__WorkcellConfiguration__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__Asset__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__Trait__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_workcell_msgs__msg__WorkcellConfiguration__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_workcell_msgs__msg__WorkcellConfiguration__TYPE_NAME, 43, 43},
      {rmf_workcell_msgs__msg__WorkcellConfiguration__FIELDS, 5, 5},
    },
    {rmf_workcell_msgs__msg__WorkcellConfiguration__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_workcell_msgs__msg__Asset__EXPECTED_HASH, rmf_workcell_msgs__msg__Asset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_workcell_msgs__msg__Asset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_workcell_msgs__msg__Trait__EXPECTED_HASH, rmf_workcell_msgs__msg__Trait__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_workcell_msgs__msg__Trait__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time time\n"
  "string guid\n"
  "string type\n"
  "Asset[] assets\n"
  "Trait[] traits";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_workcell_msgs__msg__WorkcellConfiguration__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_workcell_msgs__msg__WorkcellConfiguration__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 83, 83},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_workcell_msgs__msg__WorkcellConfiguration__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_workcell_msgs__msg__WorkcellConfiguration__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_workcell_msgs__msg__Asset__get_individual_type_description_source(NULL);
    sources[3] = *rmf_workcell_msgs__msg__Trait__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
