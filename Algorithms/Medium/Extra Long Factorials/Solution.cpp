#include <iostream>

int multiplyNumber(const int number, int digitsOfFactorial[], int numberOfDigitsOfFactorial)
{
  int carryNumber = 0;
  for (int i = 0; i < numberOfDigitsOfFactorial; i++)
  {
    const int productOfNumber = digitsOfFactorial[i] * number + carryNumber;
    digitsOfFactorial[i] = productOfNumber % 10;
    carryNumber = productOfNumber / 10;
  }
  while (carryNumber > 0) 
  {
    digitsOfFactorial[numberOfDigitsOfFactorial] = carryNumber % 10;
    carryNumber /= 10;
    numberOfDigitsOfFactorial++;
  }
  return numberOfDigitsOfFactorial;
}

int main()
{
  int number;
  std::cin >> number;
  int digitsOfFactorial[158];
  digitsOfFactorial[0] = 1;
  int numberOfDigitsOfFactorial = 1;
  for (int i = 2; i <= number; i++)
    numberOfDigitsOfFactorial = multiplyNumber(i, digitsOfFactorial, numberOfDigitsOfFactorial);
  for (int i = numberOfDigitsOfFactorial - 1; i >= 0; i--)
    std::cout << digitsOfFactorial[i];
}