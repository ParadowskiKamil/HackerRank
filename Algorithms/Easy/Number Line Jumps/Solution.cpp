#include <iostream>

int main()
{
  int startingPosOf1stKangaroo, jumpDistanceOf1stKangaroo, startingPosOf2ndKangaroo, jumpDistanceOf2ndKangaroo;
  std::cin >> startingPosOf1stKangaroo >> jumpDistanceOf1stKangaroo >> startingPosOf2ndKangaroo >> jumpDistanceOf2ndKangaroo;
  while (startingPosOf1stKangaroo < startingPosOf2ndKangaroo)
  {
    startingPosOf1stKangaroo += jumpDistanceOf1stKangaroo;
    startingPosOf2ndKangaroo += jumpDistanceOf2ndKangaroo;
  }
  startingPosOf1stKangaroo == startingPosOf2ndKangaroo ? std::cout << "YES" : std::cout << "NO";
}