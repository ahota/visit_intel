# Install script for directory: /export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src

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
    SET(CMAKE_INSTALL_CONFIG_NAME "Debug")
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
  SET(CMAKE_INSTALL_SO_NO_EXE "0")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/air/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/hest/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/biff/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/nrrd/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/ell/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/unrrdu/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/dye/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/moss/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/gage/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/alan/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/third_party_builtin/slivr/teem-1.9.0-src/src/bin/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

