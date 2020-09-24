/**
 * @file main.cpp
 * @author Govind Ajith KUmar (UID 11699488)
 * @date 14 September 2020
 * @version 1.0
 * @section DESCRIPTION
 * The program continuously streams input from the user and adds the input to a vector. The program
 * displays the strings in the vector as well as the number of times the word has occurred.
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <lib.hpp>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
/**
 * @fn int main()
 * @brief The main function
 *
 * @return
 */
int main() {
  vector<string> words;
  std::cout << " Enter CTRL + D to exit out of the infinite loop" << std::endl;
  read_words(cin, words);
  cout << "Total Number of words: " << words.size() << endl;

  for (auto every_word : words) {
    std::cout << every_word << " has occurred "
              << count(words.begin(), words.end(), every_word)
              << " time/times . " << std::endl;
  }
  return 0;
}
