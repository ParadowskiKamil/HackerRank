#include <algorithm>
#include <iostream>

int main()
{
  int sizeOfArray;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  std::sort(numbers, numbers + sizeOfArray);
  std::cout << (sizeOfArray % 2 == 0 ? (numbers[sizeOfArray / 2] + numbers[sizeOfArray / 2 - 1]) / 2 : numbers[sizeOfArray / 2]);
}