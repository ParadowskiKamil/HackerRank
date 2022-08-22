#include <iostream>
#include <string>

int main()
{
  int numberOfStringsToEvaluate;
  std::string numericString, firstNumberOfIncreasingSequence;
  std::cin >> numberOfStringsToEvaluate;
  for (int i = 0; i < numberOfStringsToEvaluate; i++)
  {
    std::cin >> numericString;
    bool isNumericStringBeautiful = false;
    for (int j = 1; j <= numericString.length() / 2; j++)
    {
      firstNumberOfIncreasingSequence = numericString.substr(0, j);
      std::string newNumericString = numericString.substr(0, j);
      long long numberOfSequence = std::stoll(numericString.substr(0, j));
      while (numericString.length() > newNumericString.length())
      {
        numberOfSequence++;
        newNumericString += std::to_string(numberOfSequence);
      }
      if (numericString == newNumericString)
      {
        isNumericStringBeautiful = true;
        break;
      }
    }
    std::cout << (isNumericStringBeautiful ? "YES " + firstNumberOfIncreasingSequence : "NO") << std::endl;
  }
}