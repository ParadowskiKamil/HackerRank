#include <iostream>

int main()
{
  int numberOfTestCases, numberOfStones;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numberOfStones;
    std::cout << (numberOfStones % 7 > 1 ? "First" : "Second") << std::endl;
  }
}