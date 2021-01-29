#include <iostream>
#include "conan.h"

void helloConan(){
    #ifdef NDEBUG
    std::cout << "hello-conan/0.1.0: Hello World Release!" <<std::endl;
    #else
    std::cout << "hello-conan/0.1.0: Hello World Debug!" <<std::endl;
    #endif
}
