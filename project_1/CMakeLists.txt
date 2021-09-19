# Minimum CMake version required
cmake_minimum_required(VERSION 3.13.0)

# Project (also works w/o version)
project(project1 VERSION 1.0.0)

# C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# ----------------------------
# Libraries
# ----------------------------
set(GTestHint ~/Documents/programming/libs/googleTest)
find_library(GTest_LIB gtest
             HINTS ${GTestHint}
             PATH_SUFFIXES lib
             DOC "GoogleTest library path (libgtest)" )

find_library(GTest_MAIN gtest_main
             HINTS ${GTestHint}
             PATH_SUFFIXES lib
             DOC "GoogleTest library path (libgtest)" )

find_path(GTest_INCLUDE gtest/gtest.h 
            HINTS ${GTestHint}
            PATH_SUFFIXES include 
            DOC "GoogleTest include path (gtest/gtest.h)")


# ------------------------------
# Targets
# ----------------------------
add_executable(Binary src/main.cpp)
target_include_directories(Binary PRIVATE src)
            

# --------------------------
# Tests
# --------------------------
add_executable(Test 
               test/utest_add.cpp
               test/utest_fixture.cpp)
target_include_directories(Test PRIVATE 
            src 
            ${GTest_INCLUDE})
target_link_libraries(Test PRIVATE 
            ${GTest_LIB} ${GTest_MAIN})





