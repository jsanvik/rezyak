/**
 @author Ryan Luu, Shafi Ifty, John S. Anvik [j.anvik@uleth.ca]
 @date Sep 25 2024
 */
#ifndef REYZAK_H_INCLUDED
#define REYZAK_H_INCLUDED

#include <iostream>
#include <string>

#include "Game.hpp"
#include "Spinner.hpp"

/**
 * @class RezyakClass ReyzakClass.h "ReyzakClass.hpp"
 * @brief Creates score of player, pays out the player, and allows them to spin
 * the spinner.
 */
class Rezyak : public Game {
 public:
  /**
  @brief Default constructor
  */
  Rezyak();

  /**
 @brief Destructor
 */
  ~Rezyak();

  /**
   * @brief allows for the player to spin the spinner again
   * @param spinner spinner object, takes two ints to determine range
   */
  int spin(int min, int max);

  /**
   * @brief payouts the player based on their score
   * @return float function that calculates the payout amount
   */
  int payout(int betAmount);
  /**
   *@brief Pointer to the current spinner object
   */
  void resetScore();
  void setScore(int newScore);

  int getScore() const;

  Spinner* spinner;
  Player* player;

 protected:
  int score = 0;
};

#endif  // REYZAK_H_INCLUDED
