#include <iostream>
#include <string>

int main()
{
  int numberOfTestCases;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::string number;
    std::cin >> number;
    int numberOfDigitsThatAreAbleToEvenlyDivide = 0;
    for (char digit : number)
    {
      if (digit != '0' && std::stoi(number) % (digit - '0') == 0)
        numberOfDigitsThatAreAbleToEvenlyDivide++;
    }
    std::cout << numberOfDigitsThatAreAbleToEvenlyDivide << std::endl;
  }
}