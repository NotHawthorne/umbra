# Install script for directory: /home/nothawthorne/Projects/umbra/src/qca/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FOREACH(file
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca.so.2.1.0"
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca.so.2"
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/libqca.so.2.1.0;/usr/lib/x86_64-linux-gnu/libqca.so.2;/usr/lib/x86_64-linux-gnu/libqca.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/nothawthorne/Projects/umbra/src/qca/lib/libqca.so.2.1.0"
    "/home/nothawthorne/Projects/umbra/src/qca/lib/libqca.so.2"
    "/home/nothawthorne/Projects/umbra/src/qca/lib/libqca.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca.so.2.1.0"
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca.so.2"
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/qt5/QtCrypto/qca.h;/usr/include/qt5/QtCrypto/qcaprovider.h;/usr/include/qt5/QtCrypto/QtCrypto;/usr/include/qt5/QtCrypto/qca_export.h;/usr/include/qt5/QtCrypto/qca_support.h;/usr/include/qt5/QtCrypto/qca_tools.h;/usr/include/qt5/QtCrypto/qca_core.h;/usr/include/qt5/QtCrypto/qca_textfilter.h;/usr/include/qt5/QtCrypto/qca_basic.h;/usr/include/qt5/QtCrypto/qca_publickey.h;/usr/include/qt5/QtCrypto/qca_cert.h;/usr/include/qt5/QtCrypto/qca_keystore.h;/usr/include/qt5/QtCrypto/qca_securelayer.h;/usr/include/qt5/QtCrypto/qca_securemessage.h;/usr/include/qt5/QtCrypto/qca_version.h;/usr/include/qt5/QtCrypto/qpipe.h;/usr/include/qt5/QtCrypto/qca_safetimer.h")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/include/qt5/QtCrypto" TYPE FILE FILES
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qcaprovider.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/QtCrypto"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_export.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_support.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_tools.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_core.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_textfilter.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_basic.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_publickey.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_cert.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_keystore.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_securelayer.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_securemessage.h"
    "/home/nothawthorne/Projects/umbra/src/qca/qca_version.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qpipe.h"
    "/home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto/qca_safetimer.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

