#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
  int numberOfElementsInBothArrays, number, maxPossibleNumberOfBeautifulPairs = 0;
  std::cin >> numberOfElementsInBothArrays;
  std::vector<int> firstVector, secondVector;
  for (int i = 0; i < numberOfElementsInBothArrays; i++)
  {
    std::cin >> number;
    firstVector.push_back(number);
  }
  for (int i = 0; i < numberOfElementsInBothArrays; i++)
  {
    std::cin >> number;
    secondVector.push_back(number);
  }
  while (!firstVector.empty())
  {
    const int numberToCheck = firstVector.front();
    const int frequencyOfNumIn1stVector = std::count(firstVector.begin(), firstVector.end(), numberToCheck);
    const int frequencyOfNumberIn2ndVector = std::count(secondVector.begin(), secondVector.end(), numberToCheck);
    maxPossibleNumberOfBeautifulPairs += std::min(frequencyOfNumIn1stVector, frequencyOfNumberIn2ndVector);
    firstVector.erase(std::remove(firstVector.begin(), firstVector.end(), numberToCheck), firstVector.end());
  }
  maxPossibleNumberOfBeautifulPairs -= numberOfElementsInBothArrays == maxPossibleNumberOfBeautifulPairs ? 1 : -1;
  std::cout << maxPossibleNumberOfBeautifulPairs;
}