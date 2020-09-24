/**
 * @def INCLUDE_LIB_HPP_
 * @brief FIle containing the supporting functions
 */
#ifndef INCLUDE_LIB_HPP_
#define INCLUDE_LIB_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/**
 * @fn void VectorAverage(const vector<double>&)
 * @brief The function takes a vector of numbers and returns the average
 * of all the numbers that were entered.
 * @param vec_num A vector of numbers
 */
void VectorAverage(const vector<double> &vec_num) {
  double sum { 0 };
  for (auto i : vec_num) {
    sum += i;
  }
  double vec_average;
  vec_average = sum / vec_num.size();
  std::cout << "The average is  : " << vec_average << std::endl;
}
#endif  // INCLUDE_LIB_HPP_
