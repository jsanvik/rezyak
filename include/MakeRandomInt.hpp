/**
 * @author L. Nicole  Wilson [n.wilson@uleth.ca], John S. Anvik [j.anvik@uleth.ca]
 * @date 2022-12, 2024-09
 */
#ifndef MAKE_RANDOM_INT_H_INCLUDED
#define MAKE_RANDOM_INT_H_INCLUDED

#include <random>

/**
 * @brief A class for generating a random int in the range [min, max].
 * @details This class uses the Singleton design pattern to prevent
 * the same list of "random values" from being created by multiple
 * objects within a project.
 */
class MakeRandomInt {
 public:
  /**
   * @brief Copy constructor, disabled.
   * @param rv a random value class object.
   */
  MakeRandomInt(const MakeRandomInt& rv) = delete;

  /**
   * @brief Destructor
   */
  virtual ~MakeRandomInt();

  /**
   * @brief Method used to create or obtain the random value object
   * @return a pointer to a random value maker.
   */
  static MakeRandomInt* getInstance();

  /**
   * @brief Get a random int in the range [min, max].
   * @param max the upper bound for the range of possible values.
   * @return an integer in the range [min, max].
   */
  int getValue(int min = 1, int max = 10);

 private:
  static MakeRandomInt* _instance;
  unsigned _seed;
  std::default_random_engine _generator;
  std::uniform_int_distribution<int> _distribution;

  /**
   * @brief The default constructor called by getInstance.
   */
  MakeRandomInt();
};

#endif // MAKE_RANDOM_INT_H_INCLUDED
