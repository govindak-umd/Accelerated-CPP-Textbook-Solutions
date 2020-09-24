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
using std::istream;
/**
 * @fn void WordCount(const vector<string>&)
 * @brief Counts the total number of words in the vector.
 *
 * @param words Name of the vector
 */
void WordCount(const vector<string> &words) {
  std::cout << "Total number of words in the vector is: " << words.size()
            << std::endl;
}

/**
 * @fn void WordCheck(const vector<string>&, std::string)
 * @brief Counts the occurrences of any word in the main vector.
 * @param words Name of the vector
 * @param word Name of the vector
 */
void WordCheck(const vector<string> &words, std::string word) {
  std::cout << "Word " << " ' " << word << " ' " << " has occurred "
            << count(words.begin(), words.end(), word) << " times" << std::endl;
}

/**
 * @fn istream read_words&(istream&, const vector<string>&)
 * @brief Function to take the input stream from the user and count the occurrences
 * of the word in the vector.
 * @param in Input stream from the user
 * @param words Name of the vector
 * @return
 */
istream& read_words(istream &in, const vector<string> &words) {
  vector<string> words2;
  words2 = words;
  if (in) {
    words2.clear();
    string word;

    while (in >> word) {
      words2.push_back(word);
      WordCount(words2);
      WordCheck(words2, word);
    }
    in.clear();
  }
  std::cout << " loop done " << std::endl;
  return in;
}
#endif  // INCLUDE_LIB_HPP_
