#include <cstdlib>
#include <iostream>
#include <string>

int main()
{
  int numberOfQueries;
  std::string string;
  std::cin >> numberOfQueries;
  for (int i = 0; i < numberOfQueries; i++)
  {
    std::string answer = "Funny";
    std::cin >> string;
    for (int j = 0; j < string.length() - 1; j++)
    {
      if (std::abs(string[j] - string[j + 1]) != std::abs(string[string.length() - j - 1] - string[string.length() - j - 2]))
        answer = "Not Funny";
    }
    std::cout << answer << std::endl;
  }
}