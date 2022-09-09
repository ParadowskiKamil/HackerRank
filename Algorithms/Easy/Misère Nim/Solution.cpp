#include <iostream>

int main()
{
  int numberOfTestCases, piles, nimSum, numberOfStonesInEachPile;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> piles >> nimSum;
    int sumOfStones = nimSum;
    for (int j = 1; j < piles; j++)
    {
      std::cin >> numberOfStonesInEachPile;
      nimSum ^= numberOfStonesInEachPile;
      sumOfStones += numberOfStonesInEachPile;
    }
    std::cout << (nimSum == 0 && sumOfStones != piles || nimSum == 1 && sumOfStones == piles ? "Second" : "First") << std::endl;
  }
}