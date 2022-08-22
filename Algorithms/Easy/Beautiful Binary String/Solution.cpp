#include <iostream>
#include <string>

int main()
{
  int lengthOfBinaryString, minimumNumberOfStepsNeededToMakeBinaryStringBeautiful = 0;
  std::string binaryString;
  std::cin >> lengthOfBinaryString >> binaryString;
  for (int i = 0; i < binaryString.length() - 2; i++)
  {
    if (binaryString[i] == '0' && binaryString[i + 1] == '1' && binaryString[i + 2] == '0')
    {
      minimumNumberOfStepsNeededToMakeBinaryStringBeautiful++;
      i += 2;
    }
  }
  std::cout << minimumNumberOfStepsNeededToMakeBinaryStringBeautiful;
}