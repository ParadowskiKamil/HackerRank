#include <algorithm>
#include <iostream>

int main()
{
  int sizeOfArray, sizeOfLongestSubarray = 0;
  std::cin >> sizeOfArray;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  for (int i = 1; i < 100; i++)
  {
    if (sizeOfLongestSubarray < std::count(numbers, numbers + sizeOfArray, i) + std::count(numbers, numbers + sizeOfArray, i + 1))
      sizeOfLongestSubarray = std::count(numbers, numbers + sizeOfArray, i) + std::count(numbers, numbers + sizeOfArray, i + 1);
  }
  std::cout << sizeOfLongestSubarray;
}