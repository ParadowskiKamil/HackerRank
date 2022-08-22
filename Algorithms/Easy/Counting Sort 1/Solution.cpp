#include <algorithm>
#include <iostream>

int main()
{
  int sizeOfArray;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  for (int i = 0; i < 100; i++)
    std::cout << std::count(numbers, numbers + sizeOfArray, i) << ' ';
}