/**
 @author Ifty, John S. Anvik [j.anvik@uleth.ca], Ryan Luu
 @date October 2024
 */
#include "Game.hpp"

#include <iostream>
#include <string>

// Default constructor (todo: change placeholder values)
Game::Game() {}

// destructor
Game::~Game() {}

void Game::placeBet(int betAmount) {
  if (betAmount == 5) {
    odds = LOW;
  } else if (betAmount == 25) {
    odds = NORMAL;
  } else if (betAmount == 50) {
    odds = HIGH;
  } else {
    std::cout << "Invalid Bet. Please Enter a valid digit (5, 25, or 50)."
              << std::endl;
  }
}

// todo: this function needs the Player class to work
void Game::updateBalance(Player* player, int amount) {
  player->setBalance(amount);
}

// it might be simpler to call quit in main
void Game::quit() { std::cout << "Exiting the game" << std::endl; }
