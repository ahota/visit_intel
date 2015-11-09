# Install script for directory: /export/ahota/visit/visitOSPRay/visit2.8.1/src/plots

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
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Boundary/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Contour/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Curve/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/FilledBoundary/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Histogram/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Label/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Mesh/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Molecule/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/MultiCurve/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/ParallelCoordinates/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Pseudocolor/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Scatter/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Spreadsheet/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Streamline/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Subset/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Surface/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Tensor/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Truecolor/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Vector/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/Volume/cmake_install.cmake")
  INCLUDE("/export/ahota/visit/visitOSPRay/visit2.8.1/src/plots/WellBore/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

