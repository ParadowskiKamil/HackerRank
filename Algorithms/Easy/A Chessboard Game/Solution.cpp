#include <iostream>

int main()
{
  int numberOfTestCases, xPoint, yPoint;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> xPoint >> yPoint;
    std::cout << (xPoint % 4 == 0 || xPoint % 4 == 3 || yPoint % 4 == 0 || yPoint % 4 == 3 ? "First" : "Second") << std::endl;
  }
}