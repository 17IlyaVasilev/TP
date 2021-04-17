#include "main.h"
#include <gtest/gtest.h>


TEST(DefaultCheck, TestClass) {
    ASSERT_EQ(10 * 10, 100);
}


TEST(CheckClass, TestClass) {
    ClassLib classlib;
    classlib.setter(1090);

    ASSERT_EQ(classlib.getter(), 1090);
}
