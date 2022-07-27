#include <iostream>

int main()
{
  int valueToSearchFor, sizeOfArray, number;
  std::cin >> valueToSearchFor >> sizeOfArray;
  for (int i = 0; i < sizeOfArray; i++)
  {
    std::cin >> number;
    if (number == valueToSearchFor)
      std::cout << i;
  }
}