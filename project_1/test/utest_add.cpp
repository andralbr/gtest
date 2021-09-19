#include "gtest/gtest.h"
#include "myFunction.h"

// Format: TestSuiteName, TestName
TEST(testMyFunction, addition)
{
    EXPECT_EQ(5, add(2,3));
    EXPECT_EQ(7, add(3, 4));
    EXPECT_LE(6, add(4,2));

    try
    {
        add(-1,3);
    }
    catch(const std::exception& e)
    {
        EXPECT_STREQ( "Invalid parameter!", e.what())
            << "The error message string does not match!";   // custom error message!
    }
    
}

TEST(testMyFunction, addition2)
{
    ASSERT_EQ(0, add(0,0));
}

TEST(testMyFunction, greater )
{
    EXPECT_TRUE( greaterThan(5,2) ) << "Should return true";
}

