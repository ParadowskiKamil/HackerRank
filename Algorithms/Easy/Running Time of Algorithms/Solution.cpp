#include <iostream>

int main()
{
  int sizeOfArray, numberOfShiftsItWillTakeToSortArray = 0;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  for (int i = 1; i < sizeOfArray; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (numbers[j] > numbers[i])
        numberOfShiftsItWillTakeToSortArray++;
    }
  }
  std::cout << numberOfShiftsItWillTakeToSortArray;
}