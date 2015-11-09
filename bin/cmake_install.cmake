# Install script for directory: /export/ahota/visit/visitOSPRay/visit2.8.1/src/bin

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_WRITE GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/Doxyfile"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/curv3dprep"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/frontendlauncher"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/frontendlauncher.py"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/makemili"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/mkgrdbl"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/mpeg2encode"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/regen-ajp"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/run_doxygen"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/surfcomp"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/text2polys"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/time_annotation"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/visit"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/visit_composite"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/visit_plugin"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/visit_transition"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/visitconvert"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/visitprotocol"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xml2atts"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xml2avt"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xml2cmake"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xml2info"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xml2java"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xml2plugin"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xml2python"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xml2window"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xmledit"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/xmltest"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/2.8.1/bin" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_WRITE GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/internallauncher")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/bin" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_WRITE GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/makemovie.py"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/makemoviemain.py"
    "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/visitdiff.py"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/2.8.1/linux-x86_64/bin" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ GROUP_WRITE WORLD_READ FILES "/export/ahota/visit/visitOSPRay/visit2.8.1/src/bin/qt.conf")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

