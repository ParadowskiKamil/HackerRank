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
  for (int number : numbers)
    std::cout << number << ' ';
}