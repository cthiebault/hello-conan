cmake_minimum_required(VERSION 3.1)
project(hello-conan CXX)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

# https://github.com/lukipuki/COVID-19-simulation/blob/master/simulation/CMakeLists.txt
#option(ENABLE_TESTS "Enable tests" OFF)
#if (${ENABLE_TESTS})
    enable_testing()
    add_subdirectory(test)
#endif()

add_library(hello-conan hello/conan.cpp)
