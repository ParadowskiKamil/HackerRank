#include <iostream>

int main()
{
  unsigned int numberOfQueries, number;
  std::cin >> numberOfQueries;
  for (int i = 0; i < numberOfQueries; i++)
  {
    std::cin >> number;
    std::cout << 4294967295 - number << std::endl;
  }
}