#include <algorithm>
#include <iostream>
#include <string>

int main()
{
  unsigned int numberOfSticks, perimeterOfValidTriangle = 0;
  std::cin >> numberOfSticks;
  int sticks[numberOfSticks];
  for (int i = 0; i < numberOfSticks; i++)
    std::cin >> sticks[i];
  std::string answer = "-1";
  std::sort(sticks, sticks + numberOfSticks);
  for (int i = 0; i < numberOfSticks - 2; i++)
  {
    if (sticks[i] + sticks[i + 1] > sticks[i + 2] && sticks[i] + sticks[i + 1] + sticks[i + 2] > perimeterOfValidTriangle)
    {
      perimeterOfValidTriangle = sticks[i] + sticks[i + 1] + sticks[i + 2];
      answer = std::to_string(sticks[i]) + ' ' + std::to_string(sticks[i + 1]) + ' ' + std::to_string(sticks[i + 2]);
    }
  }
  std::cout << answer;
}