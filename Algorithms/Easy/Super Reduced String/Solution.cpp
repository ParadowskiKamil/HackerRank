#include <iostream>
#include <string>

int main()
{
  std::string string;
  std::cin >> string;
  for (int i = 0; i < string.length() - 1 && !string.empty(); i++)
  {
    if (string[i] == string[i + 1])
    {
      string.erase(i, 2);
      i = -1;
    }
  }
  std::cout << (string.empty() ? "Empty String" : string);
}