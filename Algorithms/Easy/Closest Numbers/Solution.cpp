#include <algorithm>
#include <iostream>
#include <numeric>

int main()
{
  int sizeOfArray;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray], differencesBetweenNumbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  std::sort(numbers, numbers + sizeOfArray);
  std::adjacent_difference(numbers, numbers + sizeOfArray, differencesBetweenNumbers);
  const int smallestDifference = *std::min_element(differencesBetweenNumbers + 1, differencesBetweenNumbers + sizeOfArray);
  for (int i = 0; i < sizeOfArray - 1; i++)
  {
    if (numbers[i + 1] - numbers[i] == smallestDifference)
      std::cout << numbers[i] << ' ' << numbers[i + 1] << ' ';
  }
}