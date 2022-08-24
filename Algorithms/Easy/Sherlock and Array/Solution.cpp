#include <iostream>
#include <numeric>
#include <string>

int main()
{
  int numberOfTestCases, sizeOfArray;
  std::cin >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::cin >> sizeOfArray;
    int numbers[sizeOfArray];
    for (int j = 0; j < sizeOfArray; j++)
      std::cin >> numbers[j];
    int sumOfNumbersFromLeftSide = std::accumulate(numbers, numbers, 0);
    int sumOfNumbersFromRightSide = std::accumulate(numbers + 1, numbers + sizeOfArray, 0);
    std::string answer = sumOfNumbersFromLeftSide == sumOfNumbersFromRightSide ? "YES" : "NO";
    for (int j = 1; j < sizeOfArray; j++)
    {
      sumOfNumbersFromLeftSide += numbers[j - 1];
      sumOfNumbersFromRightSide -= numbers[j];
      if (sumOfNumbersFromLeftSide == sumOfNumbersFromRightSide)
        answer = "YES";
    }
    std::cout << answer << std::endl;
  }
}