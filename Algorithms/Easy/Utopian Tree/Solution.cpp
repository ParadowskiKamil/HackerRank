#include <iostream>

int main()
{
  int numberOfTestCases, numberOfCycles;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numberOfCycles;
    int heightOfUtopianTree = 1;
    for (int j = 1; j <= numberOfCycles; j++)
      j % 2 == 0 ? heightOfUtopianTree++ : heightOfUtopianTree *= 2;
    std::cout << heightOfUtopianTree << std::endl;
  }
}