#include "Rezyak.hpp"

#include <iostream>

#include "Player.hpp"
/**
 @author Shafi Ifty, John S. Anvik [j.anvik@uleth.ca]
 @date October 2024
 */

// Default Constructor
Rezyak::Rezyak() {
  currencyName = "Zephy";
  currencyAmount = 0;
}

// destructor
Rezyak::~Rezyak() {}

int Rezyak::spin(int min, int max) {
  int roll1, roll2, resultRoll;

  spinner = new Spinner(min, max);

  switch (odds) {
    // calls spin twice and returns the lower number
    case LOW:

      roll1 = spinner->generateNumber();
      roll2 = spinner->generateNumber();
      resultRoll = (roll1 < roll2) ? roll1 : roll2;
      break;

    // calls spin once
    case NORMAL:
      resultRoll = spinner->generateNumber();
      break;

    // calls spin twice and returns the higher number
    case HIGH:

      roll1 = spinner->generateNumber();
      roll2 = spinner->generateNumber();
      resultRoll = (roll1 > roll2) ? roll1 : roll2;
      break;
    default:  // No odds passed, assume normal odds
      resultRoll = spinner->generateNumber();
      break;
  }
  score += resultRoll;
  std::cout << std::endl
            << "Current total: " << score << std::endl
            << std::endl;
  delete spinner;
  return resultRoll;
}

int Rezyak::payout(int betAmount) {
  int finalPayout;
  int playerScore = score;

  if (playerScore == 12) {
    finalPayout = betAmount * 0.25;
  } else if (playerScore == 13) {
    finalPayout = betAmount * 0.5;
  } else if (playerScore == 14) {
    finalPayout = betAmount;
  } else if (playerScore == 15) {
    finalPayout = betAmount * 1.25;
  } else if (playerScore == 16) {
    finalPayout = betAmount * 1.5;
  } else if (playerScore == 17) {
    finalPayout = betAmount * 2.0;
  } else {
    std::cout << "Sorry you lost!" << std::endl << std::endl;
    finalPayout = 0;
  }
  // The player's balance is subtracted by
  // the amount they bet,
  // and augmented by the amount they won
  updateBalance(player, player->getBalance() - betAmount);
  updateBalance(player, player->getBalance() + finalPayout);
  std::cout << "You bet: " << betAmount << std::endl;
  std::cout << "Your payout: " << finalPayout << std::endl;
  std::cout << "Net increase: " << finalPayout - betAmount << std::endl;
  std::cout << "Current balance: " << player->getBalance() << std::endl;

  return finalPayout;
}

void Rezyak::resetScore() { score = 0; }
void Rezyak::setScore(int newScore) { score = newScore; }

int Rezyak::getScore() const { return score; }
