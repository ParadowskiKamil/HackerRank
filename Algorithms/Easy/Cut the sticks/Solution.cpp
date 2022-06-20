#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
  int numberOfSticks, lengthOfStick;
  std::cin >> numberOfSticks;
  std::vector<int> lengthsOfSticks;
  for (int i = 0; i < numberOfSticks; i++)
  {
    std::cin >> lengthOfStick;
    lengthsOfSticks.push_back(lengthOfStick);
  }
  while (!lengthsOfSticks.empty())
  {
    std::cout << lengthsOfSticks.size() << std::endl;
    const int shortestStick = *std::min_element(lengthsOfSticks.begin(), lengthsOfSticks.end());
    lengthsOfSticks.erase(std::remove(lengthsOfSticks.begin(), lengthsOfSticks.end(), shortestStick), lengthsOfSticks.end());
    for (int &lengthOfStick : lengthsOfSticks)
      lengthOfStick -= shortestStick;
  }
}