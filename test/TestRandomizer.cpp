/**
* @author John S. Anvik [j.anvik@uleth.ca]
* @date 2024-10
*/

#include <iostream>
#include "Randomizer.hpp"
#include "gtest/gtest.h"

TEST(TestRandomizer, defaultConstructorTest) {
  Randomizer randomizer;
  EXPECT_EQ(randomizer.getMin(), 1);
  EXPECT_EQ(randomizer.getMax(), 10);
}
TEST(TestRandomizer, ConstructorTest) {
  Randomizer randomizer(3, 5);
  EXPECT_EQ(randomizer.getMin(), 3);
  EXPECT_EQ(randomizer.getMax(), 5);
}
TEST(TestRandomizer, RangeTest) {
  Randomizer randomizer(3, 5);
  EXPECT_GT(randomizer.generateNumber(), 2);
  EXPECT_LT(randomizer.generateNumber(), 6);
}
