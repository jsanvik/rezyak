/**
* @author Ryan Luu 
* @date 2024-10
*/

#include "Player.hpp"
#include "gtest/gtest.h"

TEST(TestPlayer, defaultConstructorTest) {
    Player player;
    EXPECT_EQ(player.getBalance(), 50);
}

TEST(TestPlayer, setBalanceTest) {
    Player player;
    player.setBalance(60);
    EXPECT_EQ(player.getBalance(), 60);
}
