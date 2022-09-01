#include <algorithm>
#include <iostream>

int main()
{
  int sizeOfArray, number, maximumSwapsThatCanBePerformed;
  std::cin >> sizeOfArray >> maximumSwapsThatCanBePerformed;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  for (int i = 0; i < sizeOfArray && maximumSwapsThatCanBePerformed > 0; i++)
  {
    if (numbers[i] != sizeOfArray - i)
    {
      std::iter_swap(numbers + i, std::find(numbers + i, numbers + sizeOfArray, sizeOfArray - i));
      maximumSwapsThatCanBePerformed--;
    }
  }
  for (int number : numbers)
    std::cout << number << ' ';
}