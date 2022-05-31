#include <iostream>
#include <string>

int main()
{
  int numberOfStepsTakenDuringHike, currentAltitudeLevel = 0, numberOfTraversedValleys = 0;
  std::string pathOfHike;
  std::cin >> numberOfStepsTakenDuringHike >> pathOfHike;
  for (char directionOfTravel : pathOfHike)
  {
    directionOfTravel == 'U' ? currentAltitudeLevel++ : currentAltitudeLevel--;
    if (directionOfTravel == 'U' && currentAltitudeLevel == 0)
      numberOfTraversedValleys++;
  }
  std::cout << numberOfTraversedValleys;
}