#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <string>

int main()
{
  int lengthOfString, lengthOfLongestValidString = 0;
  std::string string;
  std::cin >> lengthOfString >> string;
  const std::set<char> charactersOfStr(string.begin(), string.end());
  for (int i = 0; i < charactersOfStr.size(); i++)
  {
    for (int j = i + 1; j < charactersOfStr.size(); j++)
    {
      std::string validStr = string;
      for (int k = 0; k < charactersOfStr.size(); k++)
      {
        if (k != i && k != j)
          validStr.erase(std::remove(validStr.begin(), validStr.end(), *std::next(charactersOfStr.begin(), k)), validStr.end());
      }
      bool isValidString = true;
      for (int k = 0; k < validStr.length() - 1; k++)
      {
        if (validStr[k] == validStr[k + 1])
          isValidString = false;
      }
      if (isValidString && validStr.length() > lengthOfLongestValidString)
        lengthOfLongestValidString = validStr.length();
    }
  }
  std::cout << lengthOfLongestValidString;
}