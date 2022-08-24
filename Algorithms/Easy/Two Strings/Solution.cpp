#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
  int numberOfTestCases;
  std::string first, second;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> first >> second;
    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());
    std::vector<int> ch(std::min(first.length(), second.length()));
    std::vector<int>::iterator iter = std::set_intersection(first.begin(), first.end(), second.begin(), second.end(), ch.begin());
    std::cout << ((iter - ch.begin()) > 0 ? "YES" : "NO") << std::endl;
  }
}