#include <algorithm>
#include <iostream>
#include <string>

int main()
{
  std::string str;
  long long lengthOfString;
  std::cin >> str >> lengthOfString;
  const std::string sub = str.substr(0, lengthOfString % str.length());
  std::cout << lengthOfString / str.length() * std::count(str.begin(), str.end(), 'a') + std::count(sub.begin(), sub.end(), 'a');
}