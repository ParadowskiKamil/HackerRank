#include <iostream>

int main()
{
  long long number, counter = 3, initialNumberForPriorCycle = 3;
  std::cin >> number;
  while (counter < number)
  {
    initialNumberForPriorCycle *= 2;
    counter += initialNumberForPriorCycle;
  }
  std::cout << counter - number + 1;
}