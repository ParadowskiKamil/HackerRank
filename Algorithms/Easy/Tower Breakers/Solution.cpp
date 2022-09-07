#include <iostream>

int main()
{
  int numberOfTestCases, numberOfTowers, heightOfEachTower;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numberOfTowers >> heightOfEachTower;
    std::cout << (heightOfEachTower == 1 || numberOfTowers % 2 == 0 ? 2 : 1) << std::endl;
  }
}