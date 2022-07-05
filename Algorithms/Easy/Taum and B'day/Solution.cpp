#include <iostream>

int main()
{
  int numberOfTestCases;
  std::cin >> numberOfTestCases;
  long long numOfBlackGifts, numOfWhiteGifts, priceOfBlackGift, priceOfWhiteGift, priceOfColorSwap;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numOfBlackGifts >> numOfWhiteGifts >> priceOfBlackGift >> priceOfWhiteGift >> priceOfColorSwap;
    if (priceOfBlackGift > priceOfWhiteGift + priceOfColorSwap)
      std::cout << (numOfBlackGifts + numOfWhiteGifts) * priceOfWhiteGift + numOfBlackGifts * priceOfColorSwap << std::endl;
    else if (priceOfWhiteGift > priceOfBlackGift + priceOfColorSwap)
      std::cout << (numOfBlackGifts + numOfWhiteGifts) * priceOfBlackGift + numOfWhiteGifts * priceOfColorSwap << std::endl;
    else
      std::cout << numOfBlackGifts * priceOfBlackGift + numOfWhiteGifts * priceOfWhiteGift << std::endl;
  }
}