#include "../hello/conan.h"
#include <gtest/gtest.h>
#include <string>

TEST(testHelloConan, whoAmI) {
    EXPECT_EQ("Conan", whoAmI());
}
