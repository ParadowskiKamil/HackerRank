#include <cmath>
#include <iostream>

int main()
{
  int numberOfTestCases, lowerRangeBoundary, upperRangeBoundary;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> lowerRangeBoundary >> upperRangeBoundary;
    int numberOfSquareIntegersInRange = 0;
    for (int j = std::sqrt(lowerRangeBoundary); j <= std::sqrt(upperRangeBoundary); j++)
    {
      if (std::pow(j, 2) >= lowerRangeBoundary && std::pow(j, 2) <= upperRangeBoundary)
        numberOfSquareIntegersInRange++;
    }
    std::cout << numberOfSquareIntegersInRange << std::endl;
  }
}