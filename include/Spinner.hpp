/**
 @author John S. Anvik
 @date October 2024 
 */

#ifndef SPINNER_H_INCLUDED
#define SPINNER_H_INCLUDED

#include "Randomizer.hpp"

/**
 * @class Spinner Spinner.hpp "Spinner.hpp"
 * @brief A spinner to generate random numbers.
 */
class Spinner: public Randomizer {
 public:
        /**
        @brief Default constructor
        */
        Spinner();

        /**
        @brief Constructor sets range of random values
        @param min minimum for range of random integer generation
        @param max maximum for range of random integer generation
        */
        Spinner(int minimum, int maximum);
        /**
        @brief Destructor
        */
        ~Spinner();
 protected:
};
#endif //SPINNER_H_INCLUDED
