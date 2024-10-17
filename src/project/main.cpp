/**
 @author John S. Anvik [j.anvik@uleth.ca], Shafi Ifty, Ryan Luu
 @date October 2024
 */

#include <iostream>
#include <string>

#include "Game.hpp"
#include "Player.hpp"
#include "Randomizer.hpp"
#include "Rezyak.hpp"
#include "Spinner.hpp"

int main() {
  bool activeGame;
  Rezyak rezyak;

  // Intro message
  std::cout << std::endl
            << "Welcome to the game of Rezyak, you will start with 50 zephy!"
            << std::endl
            << std::endl;
  rezyak.updateBalance(rezyak.player, 50);
  // Start game
  activeGame = true;
  while (activeGame) {
    if (rezyak.player->getBalance() > 5) {
      rezyak.resetScore();
      std::cout << "Your current balance is: " << rezyak.player->getBalance()
                << " Zephy." << std::endl;
      int bet = 0;
      // STEP 1: Place bet
      std::cout << "Please place your bet (5, 25, 50): ";
      std::cin >> bet;
      rezyak.placeBet(bet);
      // Check if bet is valid option and if player has enough money
      while ((bet != 5 && bet != 25 && bet != 50) ||
             (bet > rezyak.player->getBalance())) {
        if (bet > rezyak.player->getBalance()) {
          std::cout << "You can't bet more money than you have!" << std::endl;
        }
        std::cout << "Please place your bet (5, 25, 50): ";
        std::cin >> bet;
        rezyak.placeBet(bet);
      }
      // STEP 2: Spinning
      bool spinAgain = true;
      std::cout << "Get as close to the limit of 17 without going over."
                << std::endl;
      while (spinAgain == true) {
        char userInput = -1;
        std::cout << "Choose your spinner: enter 1 or 2 (or 0 to stop spinning)"
                  << std::endl;
        std::cout << "1: 2-5 Spinner" << std::endl;
        std::cout << "2: 0-7 Spinner" << std::endl;
        std::cout << "0: Stop spinning and take payout" << std::endl;
        std::cin >> userInput;
        if (userInput == '1') {
          rezyak.spin(2, 5);
        } else if (userInput == '2') {
          rezyak.spin(0, 7);
        } else if (userInput == '0') {
          spinAgain = false;
        } else {
          std::cout << "Invalid input. ";
          userInput = 0;
        }
        if (rezyak.getScore() > 17) {
          std::cout << "Went over the limit!" << std::endl;
          spinAgain = false;
        }
      }
      // STEP 3: Payout
      int betAmount = static_cast<int>(bet);
      rezyak.payout(betAmount);
      // STEP 4: Play again?
      if (rezyak.player->getBalance() <= 5) {  // 5 is minimum bet
        std::cout << "You're out of money! Better luck next time!" << std::endl
                  << std::endl;
        break;
      }
      char playAgain;
      std::cout << "Play again? (Y/y or N/n) ";
      std::cin >> playAgain;
      std::cout << std::endl << std::endl;
      if (playAgain == 'n' || playAgain == 'N') {
        activeGame = false;
      } else if (playAgain == 'y' || playAgain == 'Y') {
        activeGame = true;

      } else {
        std::cout << "Invalid input" << std::endl;
      }
    } else {  // Balance <= 5: not enough money to play
      std::cout << "You're out of money! Better luck next time!" << std::endl
                << std::endl;
      activeGame = false;
    }
  }
  std::cout << std::endl
            << "Thank you for playing Rezyak!" << std::endl
            << std::endl;
  return 0;
}
