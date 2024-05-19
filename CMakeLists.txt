cmake_minimum_required(VERSION 3.10)
project(k)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

# Rename the existing target to avoid conflicts
add_executable(MainExecutable main.cpp SimpleFactory.cpp)

# Google Test
enable_testing()

# Fix the path for add_subdirectory()
add_subdirectory(lib/googletest)

# Add the include directories for Google Test
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Create the test executable
add_executable(SimpleFactoryTests test/SimpleFactoryTest.cpp SimpleFactory.cpp)

# Link Google Test libraries to the test executable
target_link_libraries(SimpleFactoryTests gtest gtest_main)

# Add a test
add_test(NAME SimpleFactoryTests COMMAND SimpleFactoryTests)
