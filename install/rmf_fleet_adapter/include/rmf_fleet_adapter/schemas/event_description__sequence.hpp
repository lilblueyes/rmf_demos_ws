/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_FLEET_ADAPTER__SCHEMAS__EVENT_DESCRIPTION__SEQUENCE
#define RMF_FLEET_ADAPTER__SCHEMAS__EVENT_DESCRIPTION__SEQUENCE

#include <nlohmann/json.hpp>

namespace rmf_fleet_adapter {
namespace schemas {

static const nlohmann::json event_description__sequence =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_ros2/main/rmf_fleet_adapter/schemas/event_description__sequence.json",
  "title": "Activity Sequence",
  "description": "A sequence of activities",
  "oneOf": [
    {
      "$ref": "#/$defs/activity_array"
    },
    {
      "type": "object",
      "properties": {
        "activities": { "$ref": "#/$defs/activity_array" },
        "category": {
          "description": "Customize the category display for this sequence",
          "type": "string"
        },
        "detail": {
          "description": "Customize the detail display for this sequence"
        }
      },
      "required": ["activities"]
    }
  ],
  "$defs": {
    "activity_array": {
      "type": "array",
      "items": {
        "type": "object",
        "properties": {
          "category": {
            "description": "The category of the activity",
            "type": "string"
          },
          "description": {
            "description": "A description of the activity. This must match a schema supported by a fleet for the activity category."
          }
        },
        "required": ["category", "description"]
      },
      "minimum": 1
    }
  }
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_fleet_adapter

#endif // RMF_FLEET_ADAPTER__SCHEMAS__EVENT_DESCRIPTION__SEQUENCE
