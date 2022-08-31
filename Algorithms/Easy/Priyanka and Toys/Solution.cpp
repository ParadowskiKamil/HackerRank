#include <algorithm>
#include <iostream>

int main()
{
  int numberOfOrdersToShip, numberOfContainersPriyankaMustContractToShipAllOfToys = 1;
  std::cin >> numberOfOrdersToShip;
  int weightsOfOrdersToShip[numberOfOrdersToShip];
  for (int i = 0; i < numberOfOrdersToShip; i++)
    std::cin >> weightsOfOrdersToShip[i];
  std::sort(weightsOfOrdersToShip, weightsOfOrdersToShip + numberOfOrdersToShip);
  int upperRangeOfAcceptableWeight = weightsOfOrdersToShip[0] + 4;
  for (int weightOfOrder : weightsOfOrdersToShip)
  {
    if (weightOfOrder > upperRangeOfAcceptableWeight)
    {
      numberOfContainersPriyankaMustContractToShipAllOfToys++;
      upperRangeOfAcceptableWeight = weightOfOrder + 4;
    }
  }
  std::cout << numberOfContainersPriyankaMustContractToShipAllOfToys;
}