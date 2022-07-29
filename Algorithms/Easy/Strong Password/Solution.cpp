#include <cctype>
#include <iostream>
#include <string>

int main()
{
  int lengthOfPassword, minimumNumberOfCharactersToAdd = 0;
  std::string password;
  std::cin >> lengthOfPassword >> password;
  bool isLowerCharInPassword = false, isUpperCharInPassword = false, isDigitInPassword = false, isSpecialCharInPassword = false;
  for (char character : password)
  {
    if (std::islower(character))
      isLowerCharInPassword = true;
    else if (std::isupper(character))
      isUpperCharInPassword = true;
    else if (std::isdigit(character))
      isDigitInPassword = true;
    else
      isSpecialCharInPassword = true;
  }
  if (!isLowerCharInPassword)
    minimumNumberOfCharactersToAdd++;
  if (!isUpperCharInPassword)
    minimumNumberOfCharactersToAdd++;
  if (!isDigitInPassword)
    minimumNumberOfCharactersToAdd++;
  if (!isSpecialCharInPassword)
    minimumNumberOfCharactersToAdd++;
  while (password.length() + minimumNumberOfCharactersToAdd < 6)
    minimumNumberOfCharactersToAdd++;
  std::cout << minimumNumberOfCharactersToAdd;
}