// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:srv/RequestChanges.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/srv/detail/request_changes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__RequestChanges__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x8d, 0x12, 0x08, 0x8c, 0x64, 0xaa, 0xfb,
      0x4a, 0xbe, 0x91, 0x2e, 0x5b, 0x32, 0x27, 0x69,
      0x7a, 0xfb, 0xa9, 0xb4, 0x47, 0x30, 0xea, 0xdf,
      0x69, 0x4f, 0xca, 0x8f, 0x12, 0x71, 0xf1, 0x33,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__RequestChanges_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0x01, 0x6c, 0xff, 0x04, 0xab, 0xcd, 0x48,
      0xcd, 0x14, 0xf0, 0x91, 0xaa, 0xfa, 0x29, 0xe6,
      0xfc, 0xd9, 0x13, 0xea, 0x4e, 0x1d, 0x50, 0x72,
      0xc6, 0x92, 0x0d, 0x94, 0x5c, 0x81, 0x31, 0xf8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__RequestChanges_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x9e, 0x64, 0xd1, 0x52, 0x53, 0xd6, 0xa5,
      0x0f, 0x39, 0xde, 0xac, 0xcb, 0x32, 0x23, 0x83,
      0x9d, 0x31, 0x4f, 0xfc, 0x2c, 0xda, 0xdd, 0x1d,
      0xd9, 0x67, 0x0b, 0x7c, 0xb6, 0x48, 0x35, 0x72,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__RequestChanges_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0x98, 0x83, 0xa9, 0x33, 0xbb, 0x0e, 0x27,
      0x1b, 0xd9, 0x04, 0xbd, 0x8d, 0xb0, 0x09, 0x0a,
      0xeb, 0x0a, 0x2e, 0xc4, 0xe7, 0x7d, 0x0c, 0x39,
      0xa4, 0x2a, 0xd4, 0x7b, 0x1f, 0x4c, 0x40, 0x25,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/schedule_identity__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ScheduleIdentity__EXPECTED_HASH = {1, {
    0x63, 0x69, 0x39, 0xa8, 0x3f, 0x62, 0x6e, 0xda,
    0x39, 0xae, 0xfa, 0x97, 0x0f, 0x26, 0xf5, 0xbb,
    0x95, 0xac, 0xe9, 0xa5, 0x37, 0x2b, 0xf9, 0x1e,
    0x9c, 0x20, 0xc6, 0xae, 0x32, 0xeb, 0x55, 0x02,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_traffic_msgs__srv__RequestChanges__TYPE_NAME[] = "rmf_traffic_msgs/srv/RequestChanges";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleIdentity";
static char rmf_traffic_msgs__srv__RequestChanges_Event__TYPE_NAME[] = "rmf_traffic_msgs/srv/RequestChanges_Event";
static char rmf_traffic_msgs__srv__RequestChanges_Request__TYPE_NAME[] = "rmf_traffic_msgs/srv/RequestChanges_Request";
static char rmf_traffic_msgs__srv__RequestChanges_Response__TYPE_NAME[] = "rmf_traffic_msgs/srv/RequestChanges_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__RequestChanges__FIELD_NAME__request_message[] = "request_message";
static char rmf_traffic_msgs__srv__RequestChanges__FIELD_NAME__response_message[] = "response_message";
static char rmf_traffic_msgs__srv__RequestChanges__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__RequestChanges__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__RequestChanges__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__srv__RequestChanges_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__srv__RequestChanges_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__srv__RequestChanges_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__srv__RequestChanges__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__RequestChanges__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__RequestChanges__TYPE_NAME, 35, 35},
      {rmf_traffic_msgs__srv__RequestChanges__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__srv__RequestChanges__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleIdentity__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleIdentity__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__ScheduleIdentity__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__srv__RequestChanges_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__srv__RequestChanges_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__srv__RequestChanges_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__RequestChanges_Request__FIELD_NAME__query_id[] = "query_id";
static char rmf_traffic_msgs__srv__RequestChanges_Request__FIELD_NAME__version[] = "version";
static char rmf_traffic_msgs__srv__RequestChanges_Request__FIELD_NAME__full_update[] = "full_update";
static char rmf_traffic_msgs__srv__RequestChanges_Request__DEFAULT_VALUE__full_update[] = "False";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__RequestChanges_Request__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__RequestChanges_Request__FIELD_NAME__query_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Request__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Request__FIELD_NAME__full_update, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {rmf_traffic_msgs__srv__RequestChanges_Request__DEFAULT_VALUE__full_update, 5, 5},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__RequestChanges_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__RequestChanges_Request__TYPE_NAME, 43, 43},
      {rmf_traffic_msgs__srv__RequestChanges_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__RequestChanges_Response__FIELD_NAME__node_id[] = "node_id";
static char rmf_traffic_msgs__srv__RequestChanges_Response__FIELD_NAME__result[] = "result";
static char rmf_traffic_msgs__srv__RequestChanges_Response__FIELD_NAME__error[] = "error";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__RequestChanges_Response__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__RequestChanges_Response__FIELD_NAME__node_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Response__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__srv__RequestChanges_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__RequestChanges_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__RequestChanges_Response__TYPE_NAME, 44, 44},
      {rmf_traffic_msgs__srv__RequestChanges_Response__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__srv__RequestChanges_Response__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleIdentity__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleIdentity__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__ScheduleIdentity__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__RequestChanges_Event__FIELD_NAME__info[] = "info";
static char rmf_traffic_msgs__srv__RequestChanges_Event__FIELD_NAME__request[] = "request";
static char rmf_traffic_msgs__srv__RequestChanges_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__RequestChanges_Event__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__RequestChanges_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_traffic_msgs__srv__RequestChanges_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_traffic_msgs__srv__RequestChanges_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__srv__RequestChanges_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RequestChanges_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__RequestChanges_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__RequestChanges_Event__TYPE_NAME, 41, 41},
      {rmf_traffic_msgs__srv__RequestChanges_Event__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__srv__RequestChanges_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleIdentity__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleIdentity__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__ScheduleIdentity__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__srv__RequestChanges_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__srv__RequestChanges_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Query ID to request a full participants list for\n"
  "uint64 query_id\n"
  "\n"
  "# Version to request changes from; ignored if full_update is true\n"
  "uint64 version\n"
  "\n"
  "# Request a full update rather than from a specific version\n"
  "bool full_update false\n"
  "\n"
  "---\n"
  "\n"
  "# Response to the request\n"
  "ScheduleIdentity node_id\n"
  "uint8 REQUEST_ACCEPTED=1\n"
  "uint8 UNKNOWN_QUERY_ID=2\n"
  "uint8 ERROR=3\n"
  "uint8 result\n"
  "string error";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__RequestChanges__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__RequestChanges__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 380, 380},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__RequestChanges_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__RequestChanges_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__RequestChanges_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__RequestChanges_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__RequestChanges_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__RequestChanges_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__RequestChanges__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__RequestChanges__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__ScheduleIdentity__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__srv__RequestChanges_Event__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__srv__RequestChanges_Request__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__srv__RequestChanges_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__RequestChanges_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__RequestChanges_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__RequestChanges_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__RequestChanges_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__ScheduleIdentity__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__RequestChanges_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__RequestChanges_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__ScheduleIdentity__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__srv__RequestChanges_Request__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__srv__RequestChanges_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
