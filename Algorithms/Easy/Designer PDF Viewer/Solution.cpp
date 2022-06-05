#include <iostream>
#include <string>

int main()
{
  int heightsOfEachLetter[26], sizeOfHighlightedArea = 0;
  for (int i = 0; i < 26; i++)
    std::cin >> heightsOfEachLetter[i];
  std::string word;
  std::cin >> word;
  for (char letter : word)
  {
    if (heightsOfEachLetter[letter - 97] > sizeOfHighlightedArea)
      sizeOfHighlightedArea = heightsOfEachLetter[letter - 97];
  }
  std::cout << sizeOfHighlightedArea * word.length();
}