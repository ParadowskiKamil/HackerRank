#include <iostream>

int main()
{
  int numberOfNumbers, number, numberOfPositiveNumbers = 0, numberOfNegativeNumbers = 0, numberOfZeros = 0;
  std::cin >> numberOfNumbers;
  for (int i = 0; i < numberOfNumbers; i++)
  {
    std::cin >> number;
    if (number > 0)
      numberOfPositiveNumbers++;
    else if (number < 0)
      numberOfNegativeNumbers++;
    else
      numberOfZeros++;
  }
  std::cout << numberOfPositiveNumbers / 1.0 / numberOfNumbers << std::endl;
  std::cout << numberOfNegativeNumbers / 1.0 / numberOfNumbers << std::endl;
  std::cout << numberOfZeros / 1.0 / numberOfNumbers;
}