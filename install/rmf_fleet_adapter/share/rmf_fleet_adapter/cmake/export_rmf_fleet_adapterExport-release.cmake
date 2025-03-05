#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_fleet_adapter::rmf_fleet_adapter" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::rmf_fleet_adapter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::rmf_fleet_adapter PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "rmf_websocket::rmf_websocket;nlohmann_json_schema_validator"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_fleet_adapter.so"
  IMPORTED_SONAME_RELEASE "librmf_fleet_adapter.so"
  )

list(APPEND _cmake_import_check_targets rmf_fleet_adapter::rmf_fleet_adapter )
list(APPEND _cmake_import_check_files_for_rmf_fleet_adapter::rmf_fleet_adapter "${_IMPORT_PREFIX}/lib/librmf_fleet_adapter.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
