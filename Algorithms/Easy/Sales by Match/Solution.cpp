#include <algorithm>
#include <iostream>

int main()
{
  int numberOfSocks, numberOfPairsOfSocks = 0;
  std::cin >> numberOfSocks;
  int colorsOfSocks[numberOfSocks];
  for (int i = 0; i < numberOfSocks; i++)
    std::cin >> colorsOfSocks[i];
  for (int i = 1; i < 101; i++)
    numberOfPairsOfSocks += std::count(colorsOfSocks, colorsOfSocks + numberOfSocks, i) / 2;
  std::cout << numberOfPairsOfSocks;
}