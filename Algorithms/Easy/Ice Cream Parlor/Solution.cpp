#include <iostream>

int main()
{
  int numberOfTripsToIceCreamParlor, amountOfMoneyToSpend, numberOfFlavorsOfferedAtTime;
  std::cin >> numberOfTripsToIceCreamParlor;
  for (int i = 0; i < numberOfTripsToIceCreamParlor; i++)
  {
    std::cin >> amountOfMoneyToSpend >> numberOfFlavorsOfferedAtTime;
    int pricesOfFlavors[numberOfFlavorsOfferedAtTime];
    for (int j = 0; j < numberOfFlavorsOfferedAtTime; j++)
      std::cin >> pricesOfFlavors[j];
    for (int j = 0; j < numberOfFlavorsOfferedAtTime; j++)
    {
      for (int k = j + 1; k < numberOfFlavorsOfferedAtTime; k++)
      {
        if (pricesOfFlavors[j] + pricesOfFlavors[k] == amountOfMoneyToSpend)
          std::cout << j + 1 << ' ' << k + 1 << std::endl;
      }
    }
  }
}