add_executable(test-hello-conan test-hello-conan.cpp)
target_link_libraries(test-hello-conan hello-conan ${CONAN_LIBS})

add_test(NAME hello-conan
         WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin
         COMMAND test-hello-conan)
