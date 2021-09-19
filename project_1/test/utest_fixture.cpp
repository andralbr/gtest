#include <gtest/gtest.h>
#include "multiplier.h"

class MyTest : public testing::Test
{
  protected:

    void SetUp() override
    {
        m_multi1 = Multiplier(1);
        m_multi2 = Multiplier(3);
        m_multi3 = Multiplier(4);
    }

    // void TearDown() {}

    void test(Multiplier& multi )
    {
        EXPECT_EQ( multi.getMultiplicator() * 4, multi.multiply(4));
        EXPECT_EQ( multi.getMultiplicator() * 2, multi.multiply(2));
        EXPECT_FLOAT_EQ( multi.getMultiplicator() * 1.2, multi.multiply(1.2));
    }

  protected:
    Multiplier m_multi1;
    Multiplier m_multi2;
    Multiplier m_multi3;

};

TEST_F(MyTest, testfunction )
{
    test( m_multi1 );
    test( m_multi2 );
    test( m_multi3 );
}