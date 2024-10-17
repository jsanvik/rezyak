/**
 * @author John S. Anvik [j.anvik@uleth.ca]
 * @date 2024-10
 */

#include "Game.hpp"
#include "gtest/gtest.h"

TEST(TestGame, defaultConstructorTest) { Game game; }

TEST(TestGame, placeBetTest) { Game game; }

TEST(TestGame, updateBalanceTest) {
  Game game;
  Player* bob = new Player;
  game.updateBalance(bob, 50);
  EXPECT_EQ(bob->getBalance(), 50);
  delete bob;
}
