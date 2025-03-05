#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_websocket::rmf_websocket" for configuration "Release"
set_property(TARGET rmf_websocket::rmf_websocket APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_websocket::rmf_websocket PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Boost::system"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_websocket.so"
  IMPORTED_SONAME_RELEASE "librmf_websocket.so"
  )

list(APPEND _cmake_import_check_targets rmf_websocket::rmf_websocket )
list(APPEND _cmake_import_check_files_for_rmf_websocket::rmf_websocket "${_IMPORT_PREFIX}/lib/librmf_websocket.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
