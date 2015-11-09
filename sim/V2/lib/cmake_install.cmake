# Install script for directory: /export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/lib" TYPE STATIC_LIBRARY FILES "/export/ahota/visit/visitOSPRay/visit2.8.1/src/lib/libsimV2.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/lib" TYPE STATIC_LIBRARY FILES "/export/ahota/visit/visitOSPRay/visit2.8.1/src/lib/libsimV2f.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/lib/libsimV2dyn.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/lib/libsimV2dyn.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/lib/libsimV2dyn.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/lib" TYPE SHARED_LIBRARY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_WRITE GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/export/ahota/visit/visitOSPRay/visit2.8.1/src/lib/libsimV2dyn.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/lib/libsimV2dyn.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/lib/libsimV2dyn.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/lib/libsimV2dyn.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/libsim/V2/include" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ GROUP_WRITE WORLD_READ FILES
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisItControlInterface_V2.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisItControlInterface_V2_plotting.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisItDataInterface_V2.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisItInterfaceTypes_V2.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_CSGMesh.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_CommandMetaData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_CurveData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_CurveMetaData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_CurvilinearMesh.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_DomainBoundaries.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_DomainList.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_DomainNesting.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_ExpressionMetaData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_MaterialData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_MaterialMetaData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_MeshMetaData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_NameList.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_PointMesh.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_RectilinearMesh.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_SimulationMetaData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_SpeciesData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_SpeciesMetaData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_UnstructuredMesh.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_VariableData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/VisIt_VariableMetaData.h"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/sim/V2/lib/visitfortransimV2interface.inc"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

