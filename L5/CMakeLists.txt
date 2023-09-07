cmake_minimum_required(VERSION 3.12)
project(oop_proj)
set(CMAKE_CXX_STANDARD 17)

include(CTest)

file(GLOB SOURCES CONFIGURE_DEPENDS "SOURCES/*.cpp" "HEADERS/*.hpp")
add_executable(oop_proj ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
