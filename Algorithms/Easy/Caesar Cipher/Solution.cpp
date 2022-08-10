#include <cctype>
#include <iostream>
#include <string>

int main()
{
  int lengthOfUnencryptedString, numberOfLettersToRotateAlphabetBy;
  std::string unencryptedString;
  std::cin >> lengthOfUnencryptedString >> unencryptedString >> numberOfLettersToRotateAlphabetBy;
  for (char &character : unencryptedString)
  {
    if (std::islower(character))
      character = (character + numberOfLettersToRotateAlphabetBy - 'a') % 26 + 'a';
    else if (std::isupper(character))
      character = (character + numberOfLettersToRotateAlphabetBy - 'A') % 26 + 'A';
  }
  std::cout << unencryptedString;
}