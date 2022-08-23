#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
  int numberOfTestCases;
  std::string string;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> string;
    int minimumNumberOfCharactersToChange = -1;
    if (string.length() % 2 == 0)
    {
      std::string first = string.substr(0, string.length() / 2);
      std::string second = string.substr(string.length() / 2);
      std::sort(first.begin(), first.end());
      std::sort(second.begin(), second.end());
      std::vector<int> ch(first.length());
      std::vector<int>::iterator it = std::set_intersection(first.begin(), first.end(), second.begin(), second.end(), ch.begin());
      minimumNumberOfCharactersToChange = first.length() - (it - ch.begin());
    }
    std::cout << minimumNumberOfCharactersToChange << std::endl;
  }
}