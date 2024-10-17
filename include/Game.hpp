/**
 @author Shafi Ifty, John S. Anvik [j.anvik@uleth.ca]
 @date Sep 25 2024 
 */
#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <iostream>
#include <string>
#include "Player.hpp"
#include "Randomizer.hpp"

/**
 * @class Game Game.hpp "Game.hpp"
 * @brief A superclass for all kinds of games.
 */
class Game {
 public:
        /**
        @brief Default constructor
        */
        Game();
        /**
        @brief Destructor
        */
        ~Game();
        /**
        @brief enum Odds used to determine the stakes of the game
        */
        enum Odds {
        LOW = 5,
        NORMAL = 25,
        HIGH = 50
        };
        /**
        @brief Get player bet amount and change Odds
        */
        void placeBet(int betAmount);
        /**
        @brief Updates player balance depending on payout
        */
        void updateBalance(Player*, int amount);
        /**
        @brief Quits the game
        */
        void quit();


 protected:
    std::string currencyName;
    float currencyAmount;
    Odds odds;
};


#endif
