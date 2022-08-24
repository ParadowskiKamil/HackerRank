#include <algorithm>
#include <iostream>
#include <string>

int main()
{
  std::string string;
  std::cin >> string;
  int numberOfCharactersThatOccurAnOddNumberOfTimesInString = 0;
  for (char character = 'a'; character <= 'z'; character++)
  {
    if (std::count(string.begin(), string.end(), character) % 2 == 1)
      numberOfCharactersThatOccurAnOddNumberOfTimesInString++;
  }
  std::cout << (numberOfCharactersThatOccurAnOddNumberOfTimesInString < 2 ? "YES" : "NO");
}