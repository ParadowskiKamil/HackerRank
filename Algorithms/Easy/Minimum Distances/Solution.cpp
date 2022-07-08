#include <algorithm>
#include <deque>
#include <iostream>

int main()
{
  int sizeOfArray, number, minDist = 2999;
  std::cin >> sizeOfArray;
  std::deque<int> n;
  for (int i = 0; i < sizeOfArray; i++)
  {
    std::cin >> number;
    n.push_back(number);
  }
  while (!n.empty())
  {
    const int nToCheck = n.front();
    n.pop_front();
    if (std::find(n.begin(), n.end(), nToCheck) != n.end() && std::find(n.begin(), n.end(), nToCheck) - n.begin() + 1 < minDist)
      minDist = std::find(n.begin(), n.end(), nToCheck) - n.begin() + 1;
  }
  std::cout << (minDist == 2999 ? -1 : minDist);
}