#include <iostream>

int gcdOfTwoNumbers(const int firstNumber, const int secondNumber)
{
  if (firstNumber == 0)
    return secondNumber;
  return gcdOfTwoNumbers(secondNumber % firstNumber, firstNumber);
}

int gcd(const int arrayOfNumbers[], const int sizeOfArrayOfNumbers)
{
  int greatestCommonDivisor = arrayOfNumbers[0];
  for (int i = 1; i < sizeOfArrayOfNumbers; i++)
    greatestCommonDivisor = gcdOfTwoNumbers(arrayOfNumbers[i], greatestCommonDivisor);
  return greatestCommonDivisor;
}

int lcm(const int arrayOfNumbers[], const int sizeOfArrayOfNumbers)
{
  int leastCommonMultiple = arrayOfNumbers[0];
  for (int i = 1; i < sizeOfArrayOfNumbers; i++)
    leastCommonMultiple = arrayOfNumbers[i] * leastCommonMultiple / gcdOfTwoNumbers(arrayOfNumbers[i], leastCommonMultiple);
  return leastCommonMultiple;
}

int main()
{
  int sizeOfFirstArrayOfNumbers, sizeOfSecondArrayOfNumbers, numberOfNumbersThatAreBetweenTwoSets = 0;
  std::cin >> sizeOfFirstArrayOfNumbers >> sizeOfSecondArrayOfNumbers;
  int a[sizeOfFirstArrayOfNumbers], b[sizeOfSecondArrayOfNumbers];
  for (int i = 0; i < sizeOfFirstArrayOfNumbers; i++)
    std::cin >> a[i];
  for (int i = 0; i < sizeOfSecondArrayOfNumbers; i++)
    std::cin >> b[i];
  for (int i = lcm(a, sizeOfFirstArrayOfNumbers); i <= gcd(b, sizeOfSecondArrayOfNumbers); i += lcm(a, sizeOfFirstArrayOfNumbers))
  {
    if (gcd(b, sizeOfSecondArrayOfNumbers) % i == 0)
      numberOfNumbersThatAreBetweenTwoSets++;
  }
  std::cout << numberOfNumbersThatAreBetweenTwoSets;
}