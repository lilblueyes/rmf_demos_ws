// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:srv/UnregisterParticipant.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/srv/detail/unregister_participant__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__UnregisterParticipant__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0xe7, 0x16, 0x4b, 0x79, 0x95, 0x76, 0xb4,
      0xae, 0x1d, 0x2e, 0xa5, 0x42, 0x0d, 0x68, 0xba,
      0x39, 0x2a, 0x57, 0x70, 0x42, 0x59, 0xfc, 0xc2,
      0xf4, 0xf2, 0x4e, 0x22, 0x0d, 0x04, 0xf0, 0x79,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__UnregisterParticipant_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0xf3, 0x78, 0x1b, 0xbe, 0x8d, 0x86, 0xe1,
      0x99, 0x7f, 0xf3, 0x83, 0x7e, 0x75, 0x87, 0x74,
      0xd3, 0x45, 0x49, 0x36, 0x59, 0x8d, 0x68, 0x1b,
      0x79, 0x76, 0x40, 0x60, 0x91, 0x00, 0x49, 0xe5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__UnregisterParticipant_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0x51, 0x6f, 0xd4, 0x77, 0xb4, 0xa7, 0x75,
      0xaf, 0x5f, 0xf5, 0x5d, 0x14, 0x03, 0x8a, 0xe4,
      0x18, 0xce, 0x0f, 0x7d, 0x84, 0x6c, 0x97, 0x83,
      0xd1, 0x34, 0x13, 0x8a, 0x70, 0xbc, 0xfa, 0x3f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__UnregisterParticipant_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x48, 0xbc, 0x34, 0xff, 0xda, 0xfd, 0xf1,
      0xce, 0xe4, 0xf5, 0xa2, 0x8d, 0x6d, 0xe6, 0x0a,
      0x97, 0x34, 0x5f, 0x90, 0xe1, 0x4e, 0x4d, 0x55,
      0x68, 0xca, 0xe8, 0x91, 0xf6, 0xa3, 0xb4, 0xc4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
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
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_traffic_msgs__srv__UnregisterParticipant__TYPE_NAME[] = "rmf_traffic_msgs/srv/UnregisterParticipant";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_traffic_msgs__srv__UnregisterParticipant_Event__TYPE_NAME[] = "rmf_traffic_msgs/srv/UnregisterParticipant_Event";
static char rmf_traffic_msgs__srv__UnregisterParticipant_Request__TYPE_NAME[] = "rmf_traffic_msgs/srv/UnregisterParticipant_Request";
static char rmf_traffic_msgs__srv__UnregisterParticipant_Response__TYPE_NAME[] = "rmf_traffic_msgs/srv/UnregisterParticipant_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__UnregisterParticipant__FIELD_NAME__request_message[] = "request_message";
static char rmf_traffic_msgs__srv__UnregisterParticipant__FIELD_NAME__response_message[] = "response_message";
static char rmf_traffic_msgs__srv__UnregisterParticipant__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__UnregisterParticipant__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__srv__UnregisterParticipant_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__srv__UnregisterParticipant_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__srv__UnregisterParticipant_Event__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__srv__UnregisterParticipant__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Event__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__UnregisterParticipant__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__UnregisterParticipant__TYPE_NAME, 42, 42},
      {rmf_traffic_msgs__srv__UnregisterParticipant__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__srv__UnregisterParticipant__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__srv__UnregisterParticipant_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__srv__UnregisterParticipant_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__srv__UnregisterParticipant_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__UnregisterParticipant_Request__FIELD_NAME__participant_id[] = "participant_id";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__UnregisterParticipant_Request__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Request__FIELD_NAME__participant_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__UnregisterParticipant_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__UnregisterParticipant_Request__TYPE_NAME, 50, 50},
      {rmf_traffic_msgs__srv__UnregisterParticipant_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__UnregisterParticipant_Response__FIELD_NAME__confirmation[] = "confirmation";
static char rmf_traffic_msgs__srv__UnregisterParticipant_Response__FIELD_NAME__error[] = "error";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__UnregisterParticipant_Response__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Response__FIELD_NAME__confirmation, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Response__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__UnregisterParticipant_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__UnregisterParticipant_Response__TYPE_NAME, 51, 51},
      {rmf_traffic_msgs__srv__UnregisterParticipant_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__UnregisterParticipant_Event__FIELD_NAME__info[] = "info";
static char rmf_traffic_msgs__srv__UnregisterParticipant_Event__FIELD_NAME__request[] = "request";
static char rmf_traffic_msgs__srv__UnregisterParticipant_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__UnregisterParticipant_Event__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_traffic_msgs__srv__UnregisterParticipant_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_traffic_msgs__srv__UnregisterParticipant_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__srv__UnregisterParticipant_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__UnregisterParticipant_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__UnregisterParticipant_Event__TYPE_NAME, 48, 48},
      {rmf_traffic_msgs__srv__UnregisterParticipant_Event__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__srv__UnregisterParticipant_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__srv__UnregisterParticipant_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__srv__UnregisterParticipant_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "uint64 participant_id\n"
  "\n"
  "---\n"
  "\n"
  "# Confirmation that the participant was unregistered\n"
  "bool confirmation\n"
  "\n"
  "\n"
  "# A description of any errors that were encountered, such as the participant_id\n"
  "# being unknown\n"
  "string error";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__UnregisterParticipant__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__UnregisterParticipant__TYPE_NAME, 42, 42},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 211, 211},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__UnregisterParticipant_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Request__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__UnregisterParticipant_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Response__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__UnregisterParticipant_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__UnregisterParticipant_Event__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__UnregisterParticipant__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__UnregisterParticipant__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__srv__UnregisterParticipant_Event__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__srv__UnregisterParticipant_Request__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__srv__UnregisterParticipant_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__UnregisterParticipant_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__UnregisterParticipant_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__UnregisterParticipant_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__UnregisterParticipant_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__UnregisterParticipant_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__UnregisterParticipant_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__srv__UnregisterParticipant_Request__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__srv__UnregisterParticipant_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
