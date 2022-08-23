#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::string first, second;
  std::cin >> first >> second;
  std::sort(first.begin(), first.end());
  std::sort(second.begin(), second.end());
  std::vector<int> commCh(std::min(first.length(), second.length()));
  std::vector<int>::iterator it = std::set_intersection(first.begin(), first.end(), second.begin(), second.end(), commCh.begin());
  std::cout << first.length() + second.length() - (it - commCh.begin()) * 2;
}