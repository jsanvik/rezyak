/**
 * @author John S. Anvik [j.anvik@uleth.ca]
 @date Sep 24 2024 
 */

#ifndef RANDOMIZER_H_INCLUDED
#define RANDOMIZER_H_INCLUDED

#include "MakeRandomInt.hpp"

/**
 * @class Randomizer Randomizer.hpp "Randomizer.hpp"
 * @brief A generic superclass for all types of randomizers.
 */
class Randomizer {
 public:
        /**
        @brief Default constructor
        */
        Randomizer();
        /**
        * @brief Constructor with parameters for minimum and maximum values (inclusive)
        */
        Randomizer(int minimum, int maximum);
        /**
        * @brief Generates random number between min and max values defined in the constructor.
        * @details There are no parameters, min and max values are defined when the spinner is constructed.
        */
        int generateNumber();
        /**
        * @brief Returns minimum random value
        */
        int getMin();
        /**
        * @brief Returns maximum random value, inclusive
        */
        int getMax();
        /**
        * @brief Destructor (should this be private?)
        */
       virtual ~Randomizer();

 protected:
       int min;
       int max;
};
#endif //RANDOMIZER_H_INCLUDED
