# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.24.0)

# Set the project name
project(Clay)

# Specify the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add the source files
set(SOURCE_FILES
    code/main.c
    code/convert.c)

# Add the executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES})