#include <iostream>
#include <string>

int main()
{
  int numberOfQueries;
  std::string string;
  std::cin >> numberOfQueries;
  for (int i = 0; i < numberOfQueries; i++)
  {
    std::cin >> string;
    int minimumNumberOfRequiredDeletions = 0;
    for (int j = 0; j < string.length() - 1; j++)
    {
      if (string[j] == string[j + 1])
        minimumNumberOfRequiredDeletions++;
    }
    std::cout << minimumNumberOfRequiredDeletions << std::endl;
  }
}