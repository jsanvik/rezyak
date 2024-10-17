/**
 * @author L. Nicole  Wilson [n.wilson@uleth.ca], John S. Anvik [j.anvik@uleth.ca], Ryan Luu
 * @date 2022-12, 2024-10
 */
#include <iostream>
#include <ctime>
#include <random>

#include "MakeRandomInt.hpp"

MakeRandomInt* MakeRandomInt::_instance = nullptr;

// Default constructor
MakeRandomInt::MakeRandomInt() {
  _seed = time(NULL);
  _generator = std::default_random_engine(_seed);
}

MakeRandomInt* MakeRandomInt::getInstance() {
  if (_instance == nullptr) {
    _instance = new MakeRandomInt();
  }
  return _instance;
}

MakeRandomInt::~MakeRandomInt() {}

int MakeRandomInt::getValue(int min, int max) {
  std::uniform_int_distribution<int> _distribution(min, max);
  return _distribution(_generator);
}
