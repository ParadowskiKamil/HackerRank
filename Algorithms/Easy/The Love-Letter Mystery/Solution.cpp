#include <cstdlib>
#include <iostream>
#include <string>

int main()
{
  int numberOfQueries;
  std::string textOfLoveLetter;
  std::cin >> numberOfQueries;
  for (int i = 0; i < numberOfQueries; i++)
  {
    std::cin >> textOfLoveLetter;
    int minimumNumberOfOperations = 0;
    for (int j = 0; j < textOfLoveLetter.length() / 2; j++)
      minimumNumberOfOperations += std::abs(textOfLoveLetter[j] - textOfLoveLetter[textOfLoveLetter.length() - j - 1]);
    std::cout << minimumNumberOfOperations << std::endl;
  }
}