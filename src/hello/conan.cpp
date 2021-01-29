#include <iostream>
#include <string>
#include "conan.h"

std::string whoAmI() {
    return "Conan";
}

void helloConan() {
#ifdef NDEBUG
    std::cout << "hello-conan/0.1.0: Hello " + whoAmI() + " Release!" <<std::endl;
#else
    std::cout << "hello-conan/0.1.0: Hello " + whoAmI() + " Debug!" << std::endl;
#endif
}
