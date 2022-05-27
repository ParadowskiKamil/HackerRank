#include <iostream>

int main()
{
  int year;
  std::cin >> year;
  if (year < 1918 && year % 4 == 0 || year > 1918 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
    std::cout << "12.09." << year;
  else if (year == 1918)
    std::cout << "26.09.1918";
  else
    std::cout << "13.09." << year;
}