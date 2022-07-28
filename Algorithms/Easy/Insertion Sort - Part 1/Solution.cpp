#include <iostream>

int main()
{
  int sizeOfArray;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray], indexOfNumberThatNeedToCompare = sizeOfArray - 2;
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  const int lastNumberFromArray = numbers[sizeOfArray - 1];
  bool isArrayUnsorted = true;
  while (isArrayUnsorted)
  {
    for (int i = 0; i < sizeOfArray; i++)
    {
      if (i == indexOfNumberThatNeedToCompare)
      {
        numbers[i + 1] = numbers[i] > lastNumberFromArray ? numbers[i] : lastNumberFromArray;
        indexOfNumberThatNeedToCompare--;
      }
      else if (indexOfNumberThatNeedToCompare == -1)
        numbers[0] = lastNumberFromArray;
      if (numbers[i] == lastNumberFromArray)
        isArrayUnsorted = false;
      std::cout << numbers[i] << ' ';
    }
    std::cout << std::endl;
  }
}