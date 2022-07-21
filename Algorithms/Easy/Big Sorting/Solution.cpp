#include <algorithm>
#include <iostream>
#include <string>

bool compareTwoNumericStrings(const std::string &firstStr, const std::string &secondStr)
{
  return firstStr.length() == secondStr.length() ? firstStr < secondStr : firstStr.length() < secondStr.length();
}

int main()
{
  int sizeOfArray;
  std::cin >> sizeOfArray;
  std::string numericStrings[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numericStrings[i];
  std::sort(numericStrings, numericStrings + sizeOfArray, compareTwoNumericStrings);
  for (std::string numericString : numericStrings)
    std::cout << numericString << std::endl;
}