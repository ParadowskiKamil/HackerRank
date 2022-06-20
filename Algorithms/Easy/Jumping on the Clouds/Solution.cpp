#include <iostream>

int main()
{
  int numberOfClouds, minimumNumberOfJumpsNeededToWinGame = 0;
  std::cin >> numberOfClouds;
  int clouds[numberOfClouds];
  for (int i = 0; i < numberOfClouds; i++)
    std::cin >> clouds[i];
  for (int i = 2; i <= numberOfClouds; i += 2)
  {
    if (clouds[i] == 1)
      i--;
    minimumNumberOfJumpsNeededToWinGame++;
  }
  std::cout << minimumNumberOfJumpsNeededToWinGame;
}