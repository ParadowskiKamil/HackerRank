#include <iostream>

int main()
{
  int numberOfPlayedGames, gameResult, resultOfBestGame, resultOfWorstGame, numberOfBestGames = 0,  numberOfWorstGames = 0;
  std::cin >> numberOfPlayedGames >> resultOfBestGame;
  resultOfWorstGame = resultOfBestGame;
  for (int i = 1; i < numberOfPlayedGames; i++)
  {
    std::cin >> gameResult;
    if (gameResult > resultOfBestGame)
    {
      resultOfBestGame = gameResult;
      numberOfBestGames++;
    }
    else if (gameResult < resultOfWorstGame)
    {
      resultOfWorstGame = gameResult;
      numberOfWorstGames++;
    }
  }
  std::cout << numberOfBestGames << ' ' << numberOfWorstGames;
}