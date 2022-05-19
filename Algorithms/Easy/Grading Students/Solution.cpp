#include <cmath>
#include <iostream>

int main()
{
  int numberOfStudents, grade;
  std::cin >> numberOfStudents;
  for (int i = 0; i < numberOfStudents; i++)
  {
    std::cin >> grade;
    grade > 37 && grade % 5 > 2 ? std::cout << std::round(grade / 5.0) * 5 << std::endl : std::cout << grade << std::endl;
  }
}