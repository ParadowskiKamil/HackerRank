#include <algorithm>
#include <iostream>

int main()
{
  int numOfCities, numOfSpaceStations;
  std::cin >> numOfCities >> numOfSpaceStations;
  int spaceStations[numOfSpaceStations];
  for (int i = 0; i < numOfSpaceStations; i++)
    std::cin >> spaceStations[i];
  std::sort(spaceStations, spaceStations + numOfSpaceStations);
  int maxDistAnyCityIsFromSpaceStation = std::max(spaceStations[0], numOfCities - spaceStations[numOfSpaceStations - 1] - 1);
  for (int i = 0; i < numOfSpaceStations - 1; i++)
    maxDistAnyCityIsFromSpaceStation = std::max(maxDistAnyCityIsFromSpaceStation, (spaceStations[i + 1] - spaceStations[i]) / 2);
  std::cout << maxDistAnyCityIsFromSpaceStation;
}