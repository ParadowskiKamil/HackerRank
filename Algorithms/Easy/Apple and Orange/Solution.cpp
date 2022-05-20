#include <iostream>

int main()
{
  int houseStart, houseEnd, appleTree, orangeTree, apples, oranges, applePos, orangePos, applesOnHouse = 0, orangesOnHouse = 0;
  std::cin >> houseStart >> houseEnd >> appleTree >> orangeTree >> apples >> oranges;
  for (int i = 0; i < apples; i++)
  {
    std::cin >> applePos;
    if (appleTree + applePos >= houseStart && appleTree + applePos <= houseEnd)
      applesOnHouse++;
  }
  for (int i = 0; i < oranges; i++)
  {
    std::cin >> orangePos;
    if (orangeTree + orangePos >= houseStart && orangeTree + orangePos <= houseEnd)
      orangesOnHouse++;
  }
  std::cout << applesOnHouse << std::endl << orangesOnHouse;
}