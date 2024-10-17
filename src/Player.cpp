/**
 @author Ryan Luu
 @date October 2024
 */
#include "Player.hpp"

#include <iostream>
#include <string>

#include "Game.hpp"
// todo: constructor for Player

Player::Player() : playerBalance(50) {}
// had to use 'int' types because 'void' does not match return type
int Player::getBalance() const { return playerBalance; }

void Player::setBalance(int newBalance) { playerBalance = newBalance; }
