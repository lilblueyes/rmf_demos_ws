/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_FLEET_ADAPTER__SCHEMAS__EVENT_DESCRIPTION__PAYLOAD_TRANSFER
#define RMF_FLEET_ADAPTER__SCHEMAS__EVENT_DESCRIPTION__PAYLOAD_TRANSFER

#include <nlohmann/json.hpp>

namespace rmf_fleet_adapter {
namespace schemas {

static const nlohmann::json event_description__payload_transfer =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_ros2/main/rmf_fleet_adapter/schemas/event_description__payload_transfer.json",
  "title": "Item Transfer Event Description",
  "description": "Description for a drop off or a pick up event category",
  "type": "object",
  "properties": {
    "place": { "$ref": "place.json" },
    "handler": { "type": "string" },
    "payload" : {
      "oneOf": [
        {
          "$ref": "#/$defs/payload_component"
        },
        {
          "type": "array",
          "items": { "$ref": "#/$defs/payload_component" }
        }
      ]
    }
  },
  "required": ["place", "payload"],
  "$defs": {
    "payload_component": {
      "type": "object",
      "properties": {
        "sku": { "type": "string" },
        "quantity": {
          "type": "integer",
          "minimum": 0
        },
        "compartment": { "type": "string" }
      },
      "required": ["sku", "quantity"]
    }
  }
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_fleet_adapter

#endif // RMF_FLEET_ADAPTER__SCHEMAS__EVENT_DESCRIPTION__PAYLOAD_TRANSFER
