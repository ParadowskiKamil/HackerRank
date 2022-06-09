#include <iostream>

int main()
{
  int numberOfDays, numberOfPeopleThatLikedAdvertisement = 0, numberOfPeopleThatSawAdvertisement = 5;
  std::cin >> numberOfDays;
  for (int i = 0; i < numberOfDays; i++)
  {
    numberOfPeopleThatLikedAdvertisement += numberOfPeopleThatSawAdvertisement / 2;
    numberOfPeopleThatSawAdvertisement = numberOfPeopleThatSawAdvertisement / 2 * 3;
  }
  std::cout << numberOfPeopleThatLikedAdvertisement;
}