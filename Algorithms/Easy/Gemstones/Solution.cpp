#include <algorithm>
#include <iostream>
#include <string>

int main()
{
  int numberOfStrings, numberOfGemstonesFound = 0;
  std::cin >> numberOfStrings;
  std::string mineralsEmbeddedInEachOfRocks[numberOfStrings];
  for (int i = 0; i < numberOfStrings; i++)
    std::cin >> mineralsEmbeddedInEachOfRocks[i];
  for (char mineral = 'a'; mineral <= 'z'; mineral++)
  {
    bool isMineralInAllRocks = true;
    for (std::string mineralEmbeddedInRock : mineralsEmbeddedInEachOfRocks)
    {
      if (std::find(mineralEmbeddedInRock.begin(), mineralEmbeddedInRock.end(), mineral) == mineralEmbeddedInRock.end())
        isMineralInAllRocks = false;
    }
    if (isMineralInAllRocks)
      numberOfGemstonesFound++;
  }
  std::cout << numberOfGemstonesFound;
}