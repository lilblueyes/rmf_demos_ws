// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:srv/RegisterParticipant.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/srv/detail/register_participant__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__RegisterParticipant__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x04, 0x24, 0x14, 0x14, 0x63, 0xae, 0x97,
      0xb1, 0x5b, 0x72, 0x7f, 0x35, 0x99, 0xb9, 0xa3,
      0x99, 0x1f, 0x89, 0x68, 0x2a, 0x32, 0x67, 0xb9,
      0xb5, 0x2b, 0x85, 0x71, 0x9e, 0xaf, 0xcd, 0x11,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__RegisterParticipant_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x8a, 0xdd, 0xc8, 0xb3, 0x82, 0xdc, 0x19,
      0xf6, 0x22, 0xf7, 0x5f, 0x35, 0xef, 0x61, 0x8e,
      0xd0, 0x4a, 0x82, 0x68, 0xd2, 0xe6, 0x6b, 0xe3,
      0xf0, 0xd1, 0xf6, 0x68, 0xed, 0xac, 0x5b, 0xc4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__RegisterParticipant_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf5, 0xd3, 0xa0, 0x16, 0x9e, 0x2a, 0x6d, 0xde,
      0xc1, 0x2b, 0x36, 0x7e, 0x99, 0xff, 0xfd, 0x83,
      0xa9, 0x65, 0x10, 0xbb, 0xa9, 0x2a, 0xa3, 0xab,
      0x0e, 0xe2, 0xae, 0x86, 0xd4, 0xc4, 0x70, 0xaa,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__srv__RegisterParticipant_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x81, 0xd1, 0xde, 0x7b, 0x72, 0xfc, 0x5b,
      0x51, 0x01, 0xd1, 0x59, 0x0d, 0x20, 0x9d, 0xee,
      0x2a, 0x09, 0xeb, 0xe4, 0x12, 0x76, 0x28, 0xcc,
      0xf3, 0xaa, 0x81, 0xcf, 0xe3, 0x00, 0x3b, 0x45,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/profile__functions.h"
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__functions.h"
#include "rmf_traffic_msgs/msg/detail/participant_description__functions.h"
#include "rmf_traffic_msgs/msg/detail/circle__functions.h"
#include "rmf_traffic_msgs/msg/detail/convex_shape__functions.h"
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
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Circle__EXPECTED_HASH = {1, {
    0xd0, 0x12, 0x71, 0xf4, 0x8e, 0xa9, 0x4a, 0x8a,
    0xa4, 0x93, 0x38, 0xc5, 0x5f, 0x66, 0xfc, 0xda,
    0x71, 0xb4, 0xe2, 0xa6, 0x02, 0x34, 0x6b, 0xce,
    0x3b, 0xcb, 0x3a, 0x24, 0xd8, 0xca, 0xa1, 0x46,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ConvexShape__EXPECTED_HASH = {1, {
    0xb0, 0xb8, 0xe9, 0x28, 0x3b, 0x66, 0x25, 0x24,
    0x09, 0x44, 0x96, 0xa1, 0x4f, 0xed, 0x4c, 0x35,
    0x04, 0xd8, 0xc0, 0x3b, 0xc5, 0x1d, 0x7d, 0x5f,
    0x69, 0x19, 0x2a, 0x3a, 0x0f, 0xfe, 0x45, 0x76,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH = {1, {
    0x63, 0x4f, 0xfe, 0xd8, 0xb4, 0x71, 0xfe, 0x5a,
    0xc9, 0xc9, 0xb5, 0x40, 0xcd, 0xef, 0xea, 0x5f,
    0xad, 0xd1, 0xd5, 0x0d, 0x35, 0xdc, 0xdc, 0x80,
    0x03, 0x0c, 0xe1, 0xc4, 0x10, 0x4d, 0xd9, 0xf6,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ParticipantDescription__EXPECTED_HASH = {1, {
    0xca, 0x77, 0x7f, 0x89, 0xd7, 0xb7, 0x38, 0xa4,
    0x5b, 0x20, 0x04, 0x2e, 0x34, 0x70, 0xba, 0x58,
    0x77, 0xe9, 0x81, 0x05, 0x02, 0x58, 0xe1, 0x98,
    0x7e, 0xea, 0x9e, 0x37, 0xed, 0x4c, 0x44, 0x56,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Profile__EXPECTED_HASH = {1, {
    0xba, 0xb5, 0x43, 0x76, 0x67, 0x95, 0x2a, 0x08,
    0x49, 0x85, 0x74, 0x25, 0x59, 0xf4, 0x82, 0x48,
    0x86, 0xdd, 0xbd, 0x01, 0xd5, 0x94, 0x75, 0xc7,
    0x4c, 0xf8, 0x6c, 0x9c, 0x75, 0x1a, 0x7c, 0x01,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_traffic_msgs__srv__RegisterParticipant__TYPE_NAME[] = "rmf_traffic_msgs/srv/RegisterParticipant";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_traffic_msgs__msg__Circle__TYPE_NAME[] = "rmf_traffic_msgs/msg/Circle";
static char rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME[] = "rmf_traffic_msgs/msg/ConvexShape";
static char rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME[] = "rmf_traffic_msgs/msg/ConvexShapeContext";
static char rmf_traffic_msgs__msg__ParticipantDescription__TYPE_NAME[] = "rmf_traffic_msgs/msg/ParticipantDescription";
static char rmf_traffic_msgs__msg__Profile__TYPE_NAME[] = "rmf_traffic_msgs/msg/Profile";
static char rmf_traffic_msgs__srv__RegisterParticipant_Event__TYPE_NAME[] = "rmf_traffic_msgs/srv/RegisterParticipant_Event";
static char rmf_traffic_msgs__srv__RegisterParticipant_Request__TYPE_NAME[] = "rmf_traffic_msgs/srv/RegisterParticipant_Request";
static char rmf_traffic_msgs__srv__RegisterParticipant_Response__TYPE_NAME[] = "rmf_traffic_msgs/srv/RegisterParticipant_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__RegisterParticipant__FIELD_NAME__request_message[] = "request_message";
static char rmf_traffic_msgs__srv__RegisterParticipant__FIELD_NAME__response_message[] = "response_message";
static char rmf_traffic_msgs__srv__RegisterParticipant__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__RegisterParticipant__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__RegisterParticipant__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__srv__RegisterParticipant_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__srv__RegisterParticipant_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__srv__RegisterParticipant_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__srv__RegisterParticipant__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Circle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ParticipantDescription__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Profile__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__RegisterParticipant__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__RegisterParticipant__TYPE_NAME, 40, 40},
      {rmf_traffic_msgs__srv__RegisterParticipant__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__srv__RegisterParticipant__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Circle__EXPECTED_HASH, rmf_traffic_msgs__msg__Circle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__Circle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShape__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__ConvexShape__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShapeContext__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__ConvexShapeContext__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ParticipantDescription__EXPECTED_HASH, rmf_traffic_msgs__msg__ParticipantDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__msg__ParticipantDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Profile__EXPECTED_HASH, rmf_traffic_msgs__msg__Profile__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_traffic_msgs__msg__Profile__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = rmf_traffic_msgs__srv__RegisterParticipant_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = rmf_traffic_msgs__srv__RegisterParticipant_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = rmf_traffic_msgs__srv__RegisterParticipant_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__RegisterParticipant_Request__FIELD_NAME__description[] = "description";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__RegisterParticipant_Request__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Request__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__ParticipantDescription__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__srv__RegisterParticipant_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__Circle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ParticipantDescription__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Profile__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__RegisterParticipant_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__RegisterParticipant_Request__TYPE_NAME, 48, 48},
      {rmf_traffic_msgs__srv__RegisterParticipant_Request__FIELDS, 1, 1},
    },
    {rmf_traffic_msgs__srv__RegisterParticipant_Request__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Circle__EXPECTED_HASH, rmf_traffic_msgs__msg__Circle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__Circle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShape__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__ConvexShape__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShapeContext__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__ConvexShapeContext__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ParticipantDescription__EXPECTED_HASH, rmf_traffic_msgs__msg__ParticipantDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__ParticipantDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Profile__EXPECTED_HASH, rmf_traffic_msgs__msg__Profile__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__msg__Profile__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__participant_id[] = "participant_id";
static char rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__last_itinerary_version[] = "last_itinerary_version";
static char rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__last_plan_id[] = "last_plan_id";
static char rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__next_storage_base[] = "next_storage_base";
static char rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__error[] = "error";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__participant_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__last_itinerary_version, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__last_plan_id, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__next_storage_base, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELD_NAME__error, 5, 5},
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
rmf_traffic_msgs__srv__RegisterParticipant_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__RegisterParticipant_Response__TYPE_NAME, 49, 49},
      {rmf_traffic_msgs__srv__RegisterParticipant_Response__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_traffic_msgs__srv__RegisterParticipant_Event__FIELD_NAME__info[] = "info";
static char rmf_traffic_msgs__srv__RegisterParticipant_Event__FIELD_NAME__request[] = "request";
static char rmf_traffic_msgs__srv__RegisterParticipant_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__srv__RegisterParticipant_Event__FIELDS[] = {
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_traffic_msgs__srv__RegisterParticipant_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_traffic_msgs__srv__RegisterParticipant_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__srv__RegisterParticipant_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Circle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ParticipantDescription__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Profile__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__srv__RegisterParticipant_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__srv__RegisterParticipant_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__srv__RegisterParticipant_Event__TYPE_NAME, 46, 46},
      {rmf_traffic_msgs__srv__RegisterParticipant_Event__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__srv__RegisterParticipant_Event__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Circle__EXPECTED_HASH, rmf_traffic_msgs__msg__Circle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__Circle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShape__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__ConvexShape__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShapeContext__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__ConvexShapeContext__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ParticipantDescription__EXPECTED_HASH, rmf_traffic_msgs__msg__ParticipantDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__msg__ParticipantDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Profile__EXPECTED_HASH, rmf_traffic_msgs__msg__Profile__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_traffic_msgs__msg__Profile__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = rmf_traffic_msgs__srv__RegisterParticipant_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = rmf_traffic_msgs__srv__RegisterParticipant_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The description of the participant that is being registered\n"
  "ParticipantDescription description\n"
  "\n"
  "---\n"
  "\n"
  "# The ID given to the registered participant\n"
  "uint64 participant_id\n"
  "\n"
  "# The last itinerary version that this participant had\n"
  "uint64 last_itinerary_version\n"
  "\n"
  "# The last Route ID that this participant had\n"
  "uint64 last_plan_id\n"
  "\n"
  "# The next storage base for this participant to use\n"
  "uint64 next_storage_base\n"
  "\n"
  "# A string to notify about exceptional issues that came up while trying to\n"
  "# fulfill the request\n"
  "string error";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__RegisterParticipant__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__RegisterParticipant__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 513, 513},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__RegisterParticipant_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__RegisterParticipant_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__RegisterParticipant_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__RegisterParticipant_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__srv__RegisterParticipant_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__srv__RegisterParticipant_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__RegisterParticipant__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__RegisterParticipant__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__Circle__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__ConvexShape__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__ConvexShapeContext__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__msg__ParticipantDescription__get_individual_type_description_source(NULL);
    sources[6] = *rmf_traffic_msgs__msg__Profile__get_individual_type_description_source(NULL);
    sources[7] = *rmf_traffic_msgs__srv__RegisterParticipant_Event__get_individual_type_description_source(NULL);
    sources[8] = *rmf_traffic_msgs__srv__RegisterParticipant_Request__get_individual_type_description_source(NULL);
    sources[9] = *rmf_traffic_msgs__srv__RegisterParticipant_Response__get_individual_type_description_source(NULL);
    sources[10] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__RegisterParticipant_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__RegisterParticipant_Request__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__Circle__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__ConvexShape__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__ConvexShapeContext__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__ParticipantDescription__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__msg__Profile__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__RegisterParticipant_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__RegisterParticipant_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__srv__RegisterParticipant_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__srv__RegisterParticipant_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__Circle__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__ConvexShape__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__ConvexShapeContext__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__msg__ParticipantDescription__get_individual_type_description_source(NULL);
    sources[6] = *rmf_traffic_msgs__msg__Profile__get_individual_type_description_source(NULL);
    sources[7] = *rmf_traffic_msgs__srv__RegisterParticipant_Request__get_individual_type_description_source(NULL);
    sources[8] = *rmf_traffic_msgs__srv__RegisterParticipant_Response__get_individual_type_description_source(NULL);
    sources[9] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
