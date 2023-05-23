#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pkg_interfaces::pkg_interfaces__rosidl_typesupport_introspection_c" for configuration "Debug"
set_property(TARGET pkg_interfaces::pkg_interfaces__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(pkg_interfaces::pkg_interfaces__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libpkg_interfaces__rosidl_typesupport_introspection_c.so"
  IMPORTED_SONAME_DEBUG "libpkg_interfaces__rosidl_typesupport_introspection_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS pkg_interfaces::pkg_interfaces__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_pkg_interfaces::pkg_interfaces__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/libpkg_interfaces__rosidl_typesupport_introspection_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
