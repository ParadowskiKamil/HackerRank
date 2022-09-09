#include <iostream>

int main()
{
  int numberOfGamesToPlay, numberOfPiles, numberOfStonesInEachPile;
  std::cin >> numberOfGamesToPlay;
  for (int i = 0; i < numberOfGamesToPlay; i++)
  {
    std::cin >> numberOfPiles;
    int nimSum = 0;
    for (int j = 0; j < numberOfPiles; j++)
    {
      std::cin >> numberOfStonesInEachPile;
      nimSum ^= numberOfStonesInEachPile;
    }
    std::cout << (nimSum == 0 ? "Second" : "First") << std::endl;
  }
}