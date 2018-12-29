#include "lib.h"

#include <gtest/gtest.h>

TEST(GTestTests, IsVersion){
    ASSERT_TRUE(version());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}