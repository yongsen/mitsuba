# Install script for directory: /home/pony/mitsuba/src/libhw

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
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Runtime")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-hw.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-hw.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-hw.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE SHARED_LIBRARY FILES "/home/pony/mitsuba/binaries/libmitsuba-hw.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-hw.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-hw.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-hw.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-hw.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Runtime")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Developer")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/include/mitsuba/hw" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/pony/mitsuba/include/mitsuba/hw/basicshader.h"
    "/home/pony/mitsuba/include/mitsuba/hw/device.h"
    "/home/pony/mitsuba/include/mitsuba/hw/font.h"
    "/home/pony/mitsuba/include/mitsuba/hw/glgeometry.h"
    "/home/pony/mitsuba/include/mitsuba/hw/glprogram.h"
    "/home/pony/mitsuba/include/mitsuba/hw/glrenderer.h"
    "/home/pony/mitsuba/include/mitsuba/hw/glsync.h"
    "/home/pony/mitsuba/include/mitsuba/hw/gltexture.h"
    "/home/pony/mitsuba/include/mitsuba/hw/gpugeometry.h"
    "/home/pony/mitsuba/include/mitsuba/hw/gpuprogram.h"
    "/home/pony/mitsuba/include/mitsuba/hw/gpusync.h"
    "/home/pony/mitsuba/include/mitsuba/hw/gputexture.h"
    "/home/pony/mitsuba/include/mitsuba/hw/renderer.h"
    "/home/pony/mitsuba/include/mitsuba/hw/shadow.h"
    "/home/pony/mitsuba/include/mitsuba/hw/session.h"
    "/home/pony/mitsuba/include/mitsuba/hw/viewer.h"
    "/home/pony/mitsuba/include/mitsuba/hw/vpl.h"
    "/home/pony/mitsuba/include/mitsuba/hw/glxdevice.h"
    "/home/pony/mitsuba/include/mitsuba/hw/glxrenderer.h"
    "/home/pony/mitsuba/include/mitsuba/hw/x11device.h"
    "/home/pony/mitsuba/include/mitsuba/hw/x11session.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Developer")

