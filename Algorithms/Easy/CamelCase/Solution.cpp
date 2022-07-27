#include <cctype>
#include <iostream>
#include <string>

int main()
{
  std::string string;
  std::cin >> string;
  int numberOfWordsInString = 1;
  for (char character : string)
  {
    if (std::isupper(character))
      numberOfWordsInString++;
  }
  std::cout << numberOfWordsInString;
}