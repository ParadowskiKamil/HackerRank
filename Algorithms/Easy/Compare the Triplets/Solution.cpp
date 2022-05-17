#include <iostream>

int main()
{
  int alicesRating[3], bobsRating[3], alicesPoints = 0, bobsPoints = 0;
  std::cin >> alicesRating[0] >> alicesRating[1] >> alicesRating[2] >> bobsRating[0] >> bobsRating[1] >> bobsRating[2];
  for (int i = 0; i < 3; i++)
  {
    if (alicesRating[i] > bobsRating[i])
      alicesPoints++;
    else if (alicesRating[i] < bobsRating[i])
      bobsPoints++;
  }
  std::cout << alicesPoints << ' ' << bobsPoints;
}