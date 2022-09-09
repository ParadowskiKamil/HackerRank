#include <iostream>

int main()
{
  int numberOfTestCases, numberOfPiles, maximumNumberOfTimesPlayerCanAddChipsToPile, numberOfChipsAtPile;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numberOfPiles >> maximumNumberOfTimesPlayerCanAddChipsToPile;
    int nimSum = 0;
    for (int j = 0; j < numberOfPiles; j++)
    {
      std::cin >> numberOfChipsAtPile;
      nimSum ^= numberOfChipsAtPile;
    }
    std::cout << (nimSum == 0 ? "Second" : "First") << std::endl;
  }
}