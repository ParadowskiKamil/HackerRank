#include <iostream>

int main()
{
  int lowerBound, upperBound, maximumValueOfXOROperationsForAllPermutations = 0;
  std::cin >> lowerBound >> upperBound;
  for (int i = lowerBound; i <= upperBound; i++)
  {
    for (int j = lowerBound; j <= upperBound; j++)
    {
      if ((i ^ j) > maximumValueOfXOROperationsForAllPermutations)
        maximumValueOfXOROperationsForAllPermutations = i ^ j;
    }
  }
  std::cout << maximumValueOfXOROperationsForAllPermutations;
}