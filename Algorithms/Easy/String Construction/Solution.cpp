#include <iostream>
#include <set>
#include <string>

int main()
{
  int numberOfStrings;
  std::string string;
  std::cin >> numberOfStrings;
  for (int i = 0; i < numberOfStrings; i++)
  {
    std::cin >> string;
    const std::set<char> charactersOfString(string.begin(), string.end());
    std::cout << charactersOfString.size() << std::endl;
  }
}