#include <algorithm>
#include <iostream>
#include <string>

int main()
{
  int numberOfTestCases, sizeOfSquareGrid;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> sizeOfSquareGrid;
    std::string squareGridOfCharacters[sizeOfSquareGrid];
    for (int j = 0; j < sizeOfSquareGrid; j++)
    {
      std::cin >> squareGridOfCharacters[j];
      std::sort(squareGridOfCharacters[j].begin(), squareGridOfCharacters[j].end());
    }
    std::string answer = "YES";
    for (int j = 0; j < sizeOfSquareGrid; j++)
    {
      std::string columnOfSquareGridOfCharacters = "";
      for (int k = 0; k < sizeOfSquareGrid; k++)
        columnOfSquareGridOfCharacters += squareGridOfCharacters[k][j];
      if (!std::is_sorted(columnOfSquareGridOfCharacters.begin(), columnOfSquareGridOfCharacters.end()))
        answer = "NO";
    }
    std::cout << answer << std::endl;
  }
}