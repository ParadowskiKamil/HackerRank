#include <cstdlib>
#include <iostream>

int main()
{
  int numberOfQueries, startPositionOfFirstCat, startPositionOfSecondCat, startPositionOfMouse;
  std::cin >> numberOfQueries;
  for (int i = 0; i < numberOfQueries; i++)
  {
    std::cin >> startPositionOfFirstCat >> startPositionOfSecondCat >> startPositionOfMouse;
    if (std::abs(startPositionOfMouse - startPositionOfFirstCat) < std::abs(startPositionOfMouse - startPositionOfSecondCat))
      std::cout << "Cat A" << std::endl;
    else if (std::abs(startPositionOfMouse - startPositionOfFirstCat) > std::abs(startPositionOfMouse - startPositionOfSecondCat))
      std::cout << "Cat B" << std::endl;
    else
      std::cout << "Mouse C" << std::endl;
  }
}