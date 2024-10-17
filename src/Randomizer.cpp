/**
 @author John S. Anvik
 @date October 2024
 */

#include "MakeRandomInt.hpp"
#include "Randomizer.hpp"

// Default constructor
Randomizer::Randomizer() {
    min = 1;
    max = 10;
}
//Constructor sets range of random values
Randomizer::Randomizer(int minimum, int maximum) {
    min = minimum;
    max = maximum;
}
// Destructor
Randomizer::~Randomizer() {
}
int Randomizer::generateNumber() {
    MakeRandomInt* makeRand = MakeRandomInt::getInstance();
    return makeRand->getValue(min, max);
}
int Randomizer::getMin() {
    return min;
}
int Randomizer::getMax() {
    return max;
}
