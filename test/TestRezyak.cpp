/**
 * @author Ryan Luu
 * @date 2024-10
 */

#include "Rezyak.hpp"
#include "gtest/gtest.h"

TEST(TestRezyak, payout) {
  // Testing using Zephy amount for highstake (50)
  Rezyak rezyak;

  // Testing conditions where payout = 0.
  rezyak.setScore(11);
  EXPECT_EQ(rezyak.payout(50), 0);  // 11

  // Testing conditions for player receives multiplier payout
  rezyak.setScore(12);
  EXPECT_EQ(rezyak.payout(50), 12);  // 12
  rezyak.setScore(13);
  EXPECT_EQ(rezyak.payout(50), 25);  // 13
  rezyak.setScore(14);
  EXPECT_EQ(rezyak.payout(50), 50);  // 14
  rezyak.setScore(15);
  EXPECT_EQ(rezyak.payout(50), 62);  // 15
  rezyak.setScore(16);
  EXPECT_EQ(rezyak.payout(50), 75);  // 16
  rezyak.setScore(17);
  EXPECT_EQ(rezyak.payout(50), 100);  // 17
}

TEST(TestRezyak, RangeTest) {
  Rezyak rezyak;
  EXPECT_GT(rezyak.spin(3, 5), 2);
  EXPECT_LT(rezyak.spin(3, 5), 6);
}

TEST(TestRezyak, resetScore) {
  Rezyak rezyak;
  rezyak.setScore(11);
  rezyak.resetScore();
  EXPECT_EQ(rezyak.getScore(), 0);
}
