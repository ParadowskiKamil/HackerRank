#include <algorithm>
#include <iostream>

int main()
{
  int numberOfBirds, mostFrequentlySightedTypeOfBird, numberOfMostFrequentlySightedTypeOfBirds = 0;
  std::cin >> numberOfBirds;
  int typesOfBirds[numberOfBirds];
  for (int i = 0; i < numberOfBirds; i++)
    std::cin >> typesOfBirds[i];
  for (int i = 5; i > 0; i--)
  {
    if (std::count(typesOfBirds, typesOfBirds + numberOfBirds, i) >= numberOfMostFrequentlySightedTypeOfBirds)
    {
      numberOfMostFrequentlySightedTypeOfBirds = std::count(typesOfBirds, typesOfBirds + numberOfBirds, i);
      mostFrequentlySightedTypeOfBird = i;
    }
  }
  std::cout << mostFrequentlySightedTypeOfBird;
}