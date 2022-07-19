#include <iostream>
#include <set>

int main()
{
  int numberOfTestCases, numberOfStonesFound, firstPossibleDifference, secondPossibleDifference;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numberOfStonesFound >> firstPossibleDifference >> secondPossibleDifference;
    std::set<int> valuesOfLastStones = {firstPossibleDifference, secondPossibleDifference};
    for (int j = 0; j < numberOfStonesFound - 2; j++)
    {
      std::set<int> valuesOfSumOfTwoStones;
      for (int valueOfLastStone : valuesOfLastStones)
      {
        valuesOfSumOfTwoStones.insert(valueOfLastStone + firstPossibleDifference);
        valuesOfSumOfTwoStones.insert(valueOfLastStone + secondPossibleDifference);
      }
      valuesOfLastStones = valuesOfSumOfTwoStones;
    }
    for (int valueOfLastStone : valuesOfLastStones)
      std::cout << valueOfLastStone << ' ';
    std::cout << std::endl;
  }
}