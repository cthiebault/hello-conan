add_executable(test-whoAmI test-hello-conan.cpp)
target_link_libraries(test-whoAmI hello-conan ${CONAN_LIBS})

add_test(NAME hello-conan
         WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin
         COMMAND test-whoAmI)
