/**
 @author John S. Anvik
 @date October 2024 
 */



#include "Randomizer.hpp"
#include "Spinner.hpp"


//Default constructor: Defaults to 0-7 Spinner
Spinner::Spinner() {
    min = 0;
    max = 7;
}
//Constructor sets range of random values
Spinner::Spinner(int minimum, int maximum) {
    min = minimum;
    max = maximum;
}
// Destructor
Spinner::~Spinner() {
}

