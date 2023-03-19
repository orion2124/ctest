cmake_minimum_required(VERSION 3.2.0)

project(project)

# build type
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build Type" FORCE)
    # "Debug" "Release" "MinSizeRel" "RelWithDebInfo"
endif()


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdump-class-hierarchy")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-omit-frame-pointer -fstack-protector-all")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdata-sections -ffunction-sections")
 
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set(LIB_PATH "${PROJECT_SOURCE_DIR}/Lib")
# set(LIBRARY_OUTPUT_PATH ${LIB_PATH})
# set(LIBRARY_OUTPUT_DIRECTORY ${LIB_PATH})

# add_subdirectory(src)
add_subdirectory(src/impl)