#include <algorithm>
#include <functional>
#include <iostream>

int main()
{
  int numberOfQueries, sizeOfBothArrays, relationVariable;
  std::cin >> numberOfQueries;
  for (int i = 0; i < numberOfQueries; i++)
  {
    std::cin >> sizeOfBothArrays >> relationVariable;
    int firstArray[sizeOfBothArrays], secondArray[sizeOfBothArrays];
    for (int i = 0; i < sizeOfBothArrays; i++)
      std::cin >> firstArray[i];
    for (int i = 0; i < sizeOfBothArrays; i++)
      std::cin >> secondArray[i];
    std::sort(firstArray, firstArray + sizeOfBothArrays);
    std::sort(secondArray, secondArray + sizeOfBothArrays, std::greater<int>());
    bool isPermutationOfFirstAndSecondArraySatisfyingRelationVariable = true;
    for (int i = 0; i < sizeOfBothArrays; i++)
    {
      if (firstArray[i] + secondArray[i] < relationVariable)
        isPermutationOfFirstAndSecondArraySatisfyingRelationVariable = false;
    }
    std::cout << (isPermutationOfFirstAndSecondArraySatisfyingRelationVariable ? "YES" : "NO") << std::endl;
  }
}