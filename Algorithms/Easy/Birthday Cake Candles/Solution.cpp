#include <algorithm>
#include <iostream>

int main()
{
  int numberOfCandles;
  std::cin >> numberOfCandles;
  int heights[numberOfCandles];
  for (int i = 0; i < numberOfCandles; i++)
    std::cin >> heights[i];
  std::cout << std::count(heights, heights + numberOfCandles, *std::max_element(heights, heights + numberOfCandles));
}