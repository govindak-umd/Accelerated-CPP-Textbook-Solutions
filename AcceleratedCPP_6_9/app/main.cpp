/**
 * @file main.cpp
 * @author Govind Ajith KUmar (UID 11699488)
 * @date 14 September 2020
 * @version 1.0
 * @section DESCRIPTION
 * The program takes user inputs as words and returns a concatanated string with all the words that
 * were fed into the programme by the user.
 */
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/**
 * @fn int main()
 * @brief The main function
 *
 * @return
 */
int main() {
  vector<string> string_vector;
  int length;
  std::cout << "Enter the length of the intended vector " << std::endl;
  std::cin >> length;
  std::cout << " Enter the words" << std::endl;
  for (int idx = 0; idx < length; idx++) {
    std::string word;
    std::cin >> word;
    string_vector.push_back(word);
  }
  std::string result;
  result = "";
  for (auto i : string_vector) {
    result += i;
  }
  std::cout << " The final concatenated result is : " << std::endl;
  std::cout << result;
}
