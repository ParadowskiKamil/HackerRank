#include <algorithm>
#include <iostream>

int main()
{
  int sizeOfArray, numberOfRotations, numberOfQueries, query;
  std::cin >> sizeOfArray >> numberOfRotations >> numberOfQueries;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  if (sizeOfArray < numberOfRotations)
    numberOfRotations %= sizeOfArray;
  std::rotate(numbers, numbers + sizeOfArray - numberOfRotations, numbers + sizeOfArray);
  for (int i = 0; i < numberOfQueries; i++)
  {
    std::cin >> query;
    std::cout << numbers[query] << std::endl;
  }
}