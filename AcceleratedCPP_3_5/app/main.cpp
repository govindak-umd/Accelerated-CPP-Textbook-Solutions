/**
 * @file main.cpp
 * @author Govind Ajith KUmar (UID 11699488)
 * @date 14 September 2020
 * @version 1.0
 * @section DESCRIPTION
 * The program takes in the name of students in a class, the number of subjects
 * they have and the grades of each subject. The program additionally returns the
 * total scores held by each student.
 */
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

/**
 * @fn int main()
 * @brief This is the main function
 *
 * @return
 */
int main() {
  std::cout << " Welcome to the Programme " << std::endl;
  vector<std::string> students_vector;
  vector<int> grades_vector;
  int number_of_students;
  std::cout << " Enter the number of students : " << std::endl;
  std::cin >> number_of_students;
  int num_of_grades;
  std::cout << " Enter the number of grades : " << std::endl;
  std::cin >> num_of_grades;

  for (int idx = 0; idx < number_of_students; idx++) {
    std::cout << " Enter the students name : >  " << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "name is : " << name << std::endl;
    students_vector.push_back(name);
    int sum { 0 };
    std::cout << "Enter Grades : > " << std::endl;

    for (int idx_2 = 0; idx_2 < num_of_grades; idx_2++) {
      int grade;
      std::cin >> grade;
      sum += grade;
    }
    grades_vector.push_back(sum);
    std::cout << "grades added to vector " << std::endl;
  }

  std::cout << "The students_vector : " << std::endl;

  for (auto i : students_vector) {
    std::cout << i << std::endl;
  }

  std::cout << "The grades_vector : " << std::endl;

  for (auto i : grades_vector) {
    std::cout << i << std::endl;
  }

  std::cout << "END" << std::endl;
  return 0;
}
