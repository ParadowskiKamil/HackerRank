#include <iostream>
#include <string>

int main()
{
  std::string message;
  std::cin >> message;
  int numberOfLettersChangedDuringTransmission = 0;
  for (int i = 0; i < message.length(); i += 3)
  {
    if (message[i] != 'S')
      numberOfLettersChangedDuringTransmission++;
    if (message[i + 1] != 'O')
      numberOfLettersChangedDuringTransmission++;
    if (message[i + 2] != 'S')
      numberOfLettersChangedDuringTransmission++;
  }
  std::cout << numberOfLettersChangedDuringTransmission;
}