#include <iostream>

int main()
{
  int numberOfClouds, jumpDistance, traveledDistance = 0, energyLevel = 100;
  std::cin >> numberOfClouds >> jumpDistance;
  int clouds[numberOfClouds];
  for (int i = 0; i < numberOfClouds; i++)
    std::cin >> clouds[i];
  while (true)
  {
    traveledDistance += jumpDistance;
    clouds[traveledDistance % numberOfClouds] == 1 ? energyLevel -= 3 : energyLevel--;
    if (traveledDistance % numberOfClouds == 0)
    {
      std::cout << energyLevel;
      break;
    }
  }
}