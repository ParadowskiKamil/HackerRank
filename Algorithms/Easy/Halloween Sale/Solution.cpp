#include <iostream>

int main()
{
  int priceOfGame, discountOfGamePrice, minimumCostOfGame, startingBudget, numberOfBoughtGames = 0;
  std::cin >> priceOfGame >> discountOfGamePrice >> minimumCostOfGame >> startingBudget;
  while (startingBudget - priceOfGame > -1)
  {
    startingBudget -= priceOfGame;
    priceOfGame = priceOfGame - discountOfGamePrice > minimumCostOfGame ? priceOfGame - discountOfGamePrice : minimumCostOfGame;
    numberOfBoughtGames++;
  }
  std::cout << numberOfBoughtGames;
}