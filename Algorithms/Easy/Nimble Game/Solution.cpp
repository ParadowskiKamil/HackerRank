#include <iostream>

int main()
{
  int numberOfTestCases, numberOfSquares, numberOfCoinsAtSquare;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numberOfSquares;
    int nimSum = 0;
    for (int j = 0; j < numberOfSquares; j++)
    {
      std::cin >> numberOfCoinsAtSquare;
      if (numberOfCoinsAtSquare % 2 == 1)
        nimSum ^= j;
    }
    std::cout << (nimSum == 0 ? "Second" : "First") << std::endl;
  }
}