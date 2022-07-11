#include <iostream>

int main()
{
  int numberOfTestCases, bobbysInitialAmountOfMoney, priceOfChocolateBar, wrappersToReceiveChocolateBar;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> bobbysInitialAmountOfMoney >> priceOfChocolateBar >> wrappersToReceiveChocolateBar;
    int numberOfEatenChocolateBars = bobbysInitialAmountOfMoney / priceOfChocolateBar;
    int receivedChocolateBarWrappers = numberOfEatenChocolateBars;
    int receivedExtraChocolateBars = receivedChocolateBarWrappers / wrappersToReceiveChocolateBar;
    while (receivedExtraChocolateBars > 0)
    {
      numberOfEatenChocolateBars += receivedExtraChocolateBars;
      receivedChocolateBarWrappers = receivedExtraChocolateBars + receivedChocolateBarWrappers % wrappersToReceiveChocolateBar;
      receivedExtraChocolateBars = receivedChocolateBarWrappers / wrappersToReceiveChocolateBar;
    }
    std::cout << numberOfEatenChocolateBars << std::endl;
  }
}