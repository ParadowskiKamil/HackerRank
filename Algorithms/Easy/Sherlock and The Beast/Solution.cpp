#include <iostream>

int main()
{
  int numberOfTestCases, numberOfDigitsInNumber;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numberOfDigitsInNumber;
    if (numberOfDigitsInNumber == 1 || numberOfDigitsInNumber == 2 || numberOfDigitsInNumber == 4 || numberOfDigitsInNumber == 7)
      std::cout << "-1";
    else if (numberOfDigitsInNumber % 3 == 0)
    {
      for (int j = 0; j < numberOfDigitsInNumber; j += 3)
        std::cout << "555";
    }
    else if (numberOfDigitsInNumber % 3 == 1)
    {
      for (int j = 0; j < numberOfDigitsInNumber - 10; j += 3)
        std::cout << "555";
      std::cout << "3333333333";
    }
    else
    {
      for (int j = 0; j < numberOfDigitsInNumber - 5; j += 3)
        std::cout << "555";
      std::cout << "33333";
    }
    std::cout << std::endl;
  }
}