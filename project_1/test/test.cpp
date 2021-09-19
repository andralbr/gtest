#include "gtest/gtest.h"

/**
 * COMMAND LINE OPTIONS:
 *    --gtest_output="xml:testOutput.xml"
 *    --gtest_repeat=2
 *    --gtest_break_on_failure
 *    --gtest_filter=testMyFunction.*(-"exclude tests")
 */ 

int main(int argc, char* argv[]) 
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}