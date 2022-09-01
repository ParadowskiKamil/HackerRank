#include <algorithm>
#include <iostream>

int main()
{
  int sizeOfArray;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  for (int number : numbers)
  {
    if (std::count(numbers, numbers + sizeOfArray, number) == 1)
      std::cout << number;
  }
}