cmake_minimum_required(VERSION 3.10)

# Project info
project(the_biology_game_cpp VERSION 0.0.0)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Collect source and header files
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")

# Include src/ directory so headers can be found
include_directories(src)

# Define the executable (including headers for IDEs)
add_executable(the_biology_game_cpp ${SOURCES} ${HEADERS})
