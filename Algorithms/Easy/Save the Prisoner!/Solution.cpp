#include <iostream>

int main()
{
  int numberOfTestCases, numberOfPrisoners, numberOfSweets, numberOfStartingChair;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numberOfPrisoners >> numberOfSweets >> numberOfStartingChair;
    const int personToWarn = (numberOfStartingChair + numberOfSweets - 1) % numberOfPrisoners;
    personToWarn % numberOfPrisoners == 0 ? std::cout << numberOfPrisoners << std::endl : std::cout << personToWarn << std::endl;
  }
}