#include <algorithm>
#include <iostream>

int main()
{
  int numberOfPricedToys, amountMarkHasToSpend, maximumNumberOfToysMarkCanBuy = 0;
  std::cin >> numberOfPricedToys >> amountMarkHasToSpend;
  int pricesOfToys[numberOfPricedToys];
  for (int i = 0; i < numberOfPricedToys; i++)
    std::cin >> pricesOfToys[i];
  std::sort(pricesOfToys, pricesOfToys + numberOfPricedToys);
  for (int i = 0; i < numberOfPricedToys; i++)
  {
    if (amountMarkHasToSpend - pricesOfToys[i] >= 0)
    {
      amountMarkHasToSpend -= pricesOfToys[i];
      maximumNumberOfToysMarkCanBuy++;
    }
  }
  std::cout << maximumNumberOfToysMarkCanBuy;
}