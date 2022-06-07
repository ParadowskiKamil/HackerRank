#include <iostream>

int main()
{
  int numberOfTestCases, numberOfStudents, cancellationThreshold, arrivalTimeOfStudent;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> numberOfStudents >> cancellationThreshold;
    int numberOfPunctualStudents = 0;
    for (int j = 0; j < numberOfStudents; j++)
    {
      std::cin >> arrivalTimeOfStudent;
      if (arrivalTimeOfStudent <= 0)
        numberOfPunctualStudents++;
    }
    numberOfPunctualStudents < cancellationThreshold ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
  }
}