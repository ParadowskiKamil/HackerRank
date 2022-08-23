#include <iostream>
#include <string>

int main()
{
  int numberOfQueries;
  std::string string;
  std::cin >> numberOfQueries;
  for (int i = 0; i < numberOfQueries; i++)
  {
    int indexOfCharacterToRemove = -1;
    std::cin >> string;
    if (string != std::string(string.rbegin(), string.rend()))
    {
      for (int j = 0; j < string.length(); j++)
      {
        if (string[j] != string[string.length() - j - 1])
        {
          string.erase(j, 1);
          indexOfCharacterToRemove = string == std::string(string.rbegin(), string.rend()) ? j : string.length() - j;
          break;
        }
      }
    }
    std::cout << indexOfCharacterToRemove << std::endl;
  }
}