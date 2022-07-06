#include <iostream>
#include <string>

int main()
{
  int lowerLimit, upperLimit;
  std::cin >> lowerLimit >> upperLimit;
  std::string modifiedKaprekarNumbers = lowerLimit == 1 ? "1 " : "";
  for (long long i = lowerLimit; i <= upperLimit; i++)
  {
    const std::string powOfNumber = std::to_string(i * i);
    const int halfLengthOfNumber = powOfNumber.length() / 2;
    if (i > 3 && i == std::stoi(powOfNumber.substr(0, halfLengthOfNumber)) + std::stoi(powOfNumber.substr(halfLengthOfNumber)))
      modifiedKaprekarNumbers += std::to_string(i) + ' ';
  }
  std::cout << (modifiedKaprekarNumbers.empty() ? "INVALID RANGE" : modifiedKaprekarNumbers);
}