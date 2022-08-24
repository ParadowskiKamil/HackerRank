#include <algorithm>
#include <cstdlib>
#include <iostream>

int main()
{
  int sizeOfArray;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  std::sort(numbers, numbers + sizeOfArray);
  int minimumAbsoluteDifferenceFound = 2000000000;
  for (int i = 0; i < sizeOfArray - 1; i++)
    minimumAbsoluteDifferenceFound = std::min(std::abs(numbers[i] - numbers[i + 1]), minimumAbsoluteDifferenceFound);
  std::cout << minimumAbsoluteDifferenceFound;
}