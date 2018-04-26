#include <gtest/gtest.h>
#include "dummyclass.h"

TEST(dummyClassTest, Equal)
{
    DummyClass dc;
    EXPECT_EQ(1,dc.alwaysOne());
}
