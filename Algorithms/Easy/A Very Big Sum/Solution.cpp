#include <iostream>

int main()
{
  int numberOfNumbers;
  long long number, sumOfNumbers = 0;
  std::cin >> numberOfNumbers;
  for (int i = 0; i < numberOfNumbers; i++)
  {
    std::cin >> number;
    sumOfNumbers += number;
  }
  std::cout << sumOfNumbers;
}