#include <algorithm>
#include <cctype>
#include <iostream>
#include <set>
#include <string>

int main()
{
  std::string string;
  std::getline(std::cin, string);
  std::transform(string.begin(), string.end(), string.begin(), ::tolower);
  string.erase(std::remove(string.begin(), string.end(), ' '), string.end());
  const std::set<char> charactersOfString(string.begin(), string.end());
  std::cout << (charactersOfString.size() == 26 ? "pangram" : "not pangram");
}