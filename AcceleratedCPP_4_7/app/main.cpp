/**
 * @file main.cpp
 * @author Govind Ajith KUmar (UID 11699488)
 * @date 14 September 2020
 * @version 1.0
 * @section DESCRIPTION
 * The program takes user inputs as numbers and returns the average of the numbers that
 * were entered in float format.
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <lib.hpp>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
/**
 * @fn int main()
 * @brief This is the main function
 *
 * @return
 */
int main() {
  vector<double> vec_num;
  int length;
  std::cout << " Enter the number of elements you want to add in the vector"
            << std::endl;
  std::cin >> length;
  std::cout << " Enter the numbers you want to add now " << std::endl;
  for (int idx = 0; idx < length; idx++) {
    int num;
    std::cin >> num;
    vec_num.push_back(num);
  }
  VectorAverage(vec_num);
  return 0;
}
