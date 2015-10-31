# Install script for directory: /home/pony/mitsuba/src/librender

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
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-render.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-render.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-render.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE SHARED_LIBRARY FILES "/home/pony/mitsuba/binaries/libmitsuba-render.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-render.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-render.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-render.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./libmitsuba-render.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Runtime")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Developer")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/include/mitsuba/render" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/pony/mitsuba/include/mitsuba/render/bsdf.h"
    "/home/pony/mitsuba/include/mitsuba/render/common.h"
    "/home/pony/mitsuba/include/mitsuba/render/emitter.h"
    "/home/pony/mitsuba/include/mitsuba/render/film.h"
    "/home/pony/mitsuba/include/mitsuba/render/fwd.h"
    "/home/pony/mitsuba/include/mitsuba/render/gatherproc.h"
    "/home/pony/mitsuba/include/mitsuba/render/gkdtree.h"
    "/home/pony/mitsuba/include/mitsuba/render/imageblock.h"
    "/home/pony/mitsuba/include/mitsuba/render/imageproc.h"
    "/home/pony/mitsuba/include/mitsuba/render/integrator.h"
    "/home/pony/mitsuba/include/mitsuba/render/irrcache.h"
    "/home/pony/mitsuba/include/mitsuba/render/medium.h"
    "/home/pony/mitsuba/include/mitsuba/render/mipmap.h"
    "/home/pony/mitsuba/include/mitsuba/render/noise.h"
    "/home/pony/mitsuba/include/mitsuba/render/particleproc.h"
    "/home/pony/mitsuba/include/mitsuba/render/phase.h"
    "/home/pony/mitsuba/include/mitsuba/render/photon.h"
    "/home/pony/mitsuba/include/mitsuba/render/photonmap.h"
    "/home/pony/mitsuba/include/mitsuba/render/range.h"
    "/home/pony/mitsuba/include/mitsuba/render/records.inl"
    "/home/pony/mitsuba/include/mitsuba/render/rectwu.h"
    "/home/pony/mitsuba/include/mitsuba/render/renderjob.h"
    "/home/pony/mitsuba/include/mitsuba/render/renderproc.h"
    "/home/pony/mitsuba/include/mitsuba/render/renderqueue.h"
    "/home/pony/mitsuba/include/mitsuba/render/sahkdtree2.h"
    "/home/pony/mitsuba/include/mitsuba/render/sahkdtree3.h"
    "/home/pony/mitsuba/include/mitsuba/render/sampler.h"
    "/home/pony/mitsuba/include/mitsuba/render/scene.h"
    "/home/pony/mitsuba/include/mitsuba/render/scenehandler.h"
    "/home/pony/mitsuba/include/mitsuba/render/sensor.h"
    "/home/pony/mitsuba/include/mitsuba/render/shader.h"
    "/home/pony/mitsuba/include/mitsuba/render/shape.h"
    "/home/pony/mitsuba/include/mitsuba/render/skdtree.h"
    "/home/pony/mitsuba/include/mitsuba/render/spiral.h"
    "/home/pony/mitsuba/include/mitsuba/render/subsurface.h"
    "/home/pony/mitsuba/include/mitsuba/render/testcase.h"
    "/home/pony/mitsuba/include/mitsuba/render/texture.h"
    "/home/pony/mitsuba/include/mitsuba/render/triaccel.h"
    "/home/pony/mitsuba/include/mitsuba/render/triaccel_sse.h"
    "/home/pony/mitsuba/include/mitsuba/render/trimesh.h"
    "/home/pony/mitsuba/include/mitsuba/render/util.h"
    "/home/pony/mitsuba/include/mitsuba/render/volume.h"
    "/home/pony/mitsuba/include/mitsuba/render/vpl.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Developer")

