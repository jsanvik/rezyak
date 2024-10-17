/**
* @author John S. Anvik [j.anvik@uleth.ca]
* @date 2024-10
*/

#include <iostream>
#include "Spinner.hpp"
#include "gtest/gtest.h"

TEST(TestSpinner, defaultConstructorTest) {
  Spinner spinner;
  EXPECT_EQ(spinner.getMin(), 0);
  EXPECT_EQ(spinner.getMax(), 7);
}
TEST(TestSpinner, ConstructorTest) {
  Spinner spinner(3, 5);
  EXPECT_EQ(spinner.getMin(), 3);
  EXPECT_EQ(spinner.getMax(), 5);
}
TEST(TestSpinner, RangeTest) {
  Spinner spinner(3, 5);
  EXPECT_GT(spinner.generateNumber(), 2);
  EXPECT_LT(spinner.generateNumber(), 6);
}
