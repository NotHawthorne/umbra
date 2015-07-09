# Install script for directory: /home/nothawthorne/Projects/umbra/src/qca/unittest

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

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/base64unittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/bigintunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/certunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/cipherunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/clientplugin/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/cms/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/dsaunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/filewatchunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/hashunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/hexunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/kdfunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/keybundle/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/keygenunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/keylengthunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/keystore/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/macunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/metatype/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/pgpunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/pipeunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/pkits/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/rsaunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/securearrayunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/staticunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/symmetrickeyunittest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/tls/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/unittest/velox/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

