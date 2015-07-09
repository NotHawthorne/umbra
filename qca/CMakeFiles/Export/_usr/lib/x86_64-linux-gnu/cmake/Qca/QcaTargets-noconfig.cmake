#----------------------------------------------------------------
# Generated CMake target import file for configuration "".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qca" for configuration ""
set_property(TARGET qca APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(qca PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "Qt5::Core"
  IMPORTED_LOCATION_NOCONFIG "/usr/lib/x86_64-linux-gnu/libqca.so.2.1.0"
  IMPORTED_SONAME_NOCONFIG "libqca.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS qca )
list(APPEND _IMPORT_CHECK_FILES_FOR_qca "/usr/lib/x86_64-linux-gnu/libqca.so.2.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
