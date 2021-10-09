cmake_minimum_required(VERSION 3.0)
project(acore)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Weffc++")
set(BUILD_MODE SHARED)

if ("${ACORE_BUILD_MODE}" STREQUAL "STATIC")
    set(BUILD_MODE STATIC)
endif()

string(TOLOWER ${BUILD_MODE} PRINTABLE_BUILD_MODE)

message("Building acore in ${PRINTABLE_BUILD_MODE} mode")

add_subdirectory(include)
add_subdirectory(src)

add_library(
    acore
        ${BUILD_MODE}
        ${INCLUDE}
        ${SRCS}
)

target_include_directories(
    acore
        PUBLIC
        include/
)