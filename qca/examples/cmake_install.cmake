# Install script for directory: /home/nothawthorne/Projects/umbra/src/qca/examples

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
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/aes-cmac/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/base64test/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/certtest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/ciphertest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/cms/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/eventhandlerdemo/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/hashtest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/hextest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/keyloader/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/mactest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/md5crypt/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/providertest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/publickeyexample/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/randomtest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/rsatest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/saslclient/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/saslserver/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/ssltest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/sslservtest/cmake_install.cmake")
  INCLUDE("/home/nothawthorne/Projects/umbra/src/qca/examples/tlssocket/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

