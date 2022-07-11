#include <algorithm>
#include <iostream>

int main()
{
  int numberOfWidthMeasurements, numberOfTestCases, startIndexOfWidths, endIndexOfWidths;
  std::cin >> numberOfWidthMeasurements >> numberOfTestCases;
  int widthMeasurements[numberOfWidthMeasurements];
  for (int i = 0; i < numberOfWidthMeasurements; i++)
    std::cin >> widthMeasurements[i];
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> startIndexOfWidths >> endIndexOfWidths;
    std::cout << *std::min_element(widthMeasurements + startIndexOfWidths, widthMeasurements + endIndexOfWidths + 1) << std::endl;
  }
}