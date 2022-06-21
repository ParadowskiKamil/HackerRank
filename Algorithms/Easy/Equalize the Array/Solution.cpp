#include <algorithm>
#include <iostream>

int main()
{
  int sizeOfArray, numberOfOccurrencesOfMostFrequentlyNumber = 0, mostFrequentlyNumber = 0, minimumNumberOfDeletionsRequired = 0;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  for (int i = 1; i < 101; i++)
  {
    if (numberOfOccurrencesOfMostFrequentlyNumber < std::count(numbers, numbers + sizeOfArray, i))
    {
      numberOfOccurrencesOfMostFrequentlyNumber = std::count(numbers, numbers + sizeOfArray, i);
      mostFrequentlyNumber = i;
    }
  }
  for (int number : numbers)
  {
    if (number != mostFrequentlyNumber)
      minimumNumberOfDeletionsRequired++;
  }
  std::cout << minimumNumberOfDeletionsRequired;
}