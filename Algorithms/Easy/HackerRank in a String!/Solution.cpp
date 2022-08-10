#include <iostream>
#include <string>

int main()
{
  int numberOfQueries;
  std::cin >> numberOfQueries;
  std::string string, hackerRankString = "hackerrank";
  for (int i = 0; i < numberOfQueries; i++)
  {
    std::cin >> string;
    int indexOfHackerRankString = 0;
    for (char character : string)
    {
      if (character == hackerRankString[indexOfHackerRankString])
        indexOfHackerRankString++;
    }
    std::cout << (indexOfHackerRankString == 10 ? "YES" : "NO") << std::endl;
  }
}