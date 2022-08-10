#include <algorithm>
#include <iostream>

int main()
{
  int sizeOfArray;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  for (int i = 1; i < sizeOfArray; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (numbers[j] > numbers[i])
        std::swap(numbers[j], numbers[i]);
    }
    for (int number : numbers)
      std::cout << number << ' ';
    std::cout << std::endl;
  }
}