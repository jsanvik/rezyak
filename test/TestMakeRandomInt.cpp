/**
* @author L. Nicole Wilson [n.wilson@uleth.ca]
* @date 2023-09
*/

#include "gtest/gtest.h"
#include "MakeRandomInt.hpp"

// TEST(TestMakeRandomInt, canBeOnlyOneTest) {
//   MakeRandomInt* makeOne = MakeRandomInt::getInstance();
//   MakeRandomInt*  makeTwo = MakeRandomInt::getInstance();

//   EXPECT_TRUE(&makeOne == &makeTwo);
// }

// TEST(TestMakeRandomInt, getValueTest) {
//   MakeRandomInt& makeRand
//     = MakeRandomInt::getInstance();

//   unsigned result = makeRand.getValue(8);
//   EXPECT_LT(result, 8);
// }


/*
The above code yields the following error:
test/TestMakeRandomInt.cpp:18:33: error: 
invalid initialization of non-const reference 
of type ‘MakeRandomInt&’ from an rvalue 
of type ‘MakeRandomInt*’

This is why it is currently commented out. 
The unit test is derectly taken from Lab C's code, 
which is also where MakeRandomInt origninated.
Why isn't it working?
*/
