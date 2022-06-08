#include <algorithm>
#include <iostream>
#include <string>

int main()
{
  int startingDayNumber, endingDayNumber, divisor, numberOfBeautifulDays = 0;
  std::cin >> startingDayNumber >> endingDayNumber >> divisor;
  for (int i = startingDayNumber; i <= endingDayNumber; i++)
  {
    std::string reversedNumber = std::to_string(i);
    std::reverse(reversedNumber.begin(), reversedNumber.end());
    if ((i - std::stoi(reversedNumber)) % divisor == 0)
      numberOfBeautifulDays++;
  }
  std::cout << numberOfBeautifulDays;
}