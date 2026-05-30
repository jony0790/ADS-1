cmake_minimum_required(VERSION 3.10)
project(PrimeLibrary)

set(CMAKE_CXX_STANDARD 17)

# Include directory
include_directories(include)

# Source files
add_library(prime_lib STATIC src/alg.cpp)

# Test executable
add_executable(tests tests/test.cpp)
target_link_libraries(tests prime_lib)
