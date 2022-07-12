#include <iostream>

int main()
{
  int numberOfChapters, maximumNumberOfProblems, numberOfProblemsPerChapter, numberOfSpecialProblems = 0, currentPageNumber = 0;
  std::cin >> numberOfChapters >> maximumNumberOfProblems;
  for (int i = 0; i < numberOfChapters; i++)
  {
    currentPageNumber++;
    std::cin >> numberOfProblemsPerChapter;
    for (int j = 1; j <= numberOfProblemsPerChapter; j++)
    {
      if (j == currentPageNumber)
        numberOfSpecialProblems++;
      if (j % maximumNumberOfProblems == 0 && j != numberOfProblemsPerChapter)
        currentPageNumber++;
    }
  }
  std::cout << numberOfSpecialProblems;
}