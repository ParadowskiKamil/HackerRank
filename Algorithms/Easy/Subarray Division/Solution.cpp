#include <iostream>

int main()
{
  int lengthOfChocolateBar, ronsDayOfBirth, ronsMonthOfBirth, numberOfPossibleWaysToDivideChocolateBar = 0;
  std::cin >> lengthOfChocolateBar;
  int valuesOfChocolateCubes[lengthOfChocolateBar];
  for (int i = 0; i < lengthOfChocolateBar; i++)
    std::cin >> valuesOfChocolateCubes[i];
  std::cin >> ronsDayOfBirth >> ronsMonthOfBirth;
  for (int i = 0; i < lengthOfChocolateBar - ronsMonthOfBirth + 1; i++)
  {
    int sumOfNumbersFromChocolateCubes = 0;
    for (int j = i; j < ronsMonthOfBirth + i; j++)
      sumOfNumbersFromChocolateCubes += valuesOfChocolateCubes[j];
    if (sumOfNumbersFromChocolateCubes == ronsDayOfBirth)
      numberOfPossibleWaysToDivideChocolateBar++;
  }
  std::cout << numberOfPossibleWaysToDivideChocolateBar;
}