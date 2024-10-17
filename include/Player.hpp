/**
/ @author Ryan Luu, John S. Anvik
  @date Sep 25, 2024, Sep 30, 2024
*/
#ifndef PLAYER_INCLUDED
#define PLAYER_INCLUDED

#include <string>

/**
 * @class PlayerClass PlayerClass.h "PlayerClass.hpp"
 * @brief Gets their name, then gets their balance and score.
 */
class Player {
 public:
  /**
   * @brief Constructor, Intializes player balance, and score.
   */
  Player();
  /**
   * @brief Gets the balance of the Player
   * @return float representing the balance of the Player in Zephy
   */
  int getBalance() const;

  /**
   * @brief Sets the current score of the Player
   * @return int representing the score of the Player
   */
  void setBalance(int newBalance);

  int playerBalance = 0;

 protected:
  std::string name;
};
#endif  // PLAYER_H_INCLUDED
