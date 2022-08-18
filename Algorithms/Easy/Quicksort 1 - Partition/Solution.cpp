#include <iostream>
#include <vector>

int main()
{
  int sizeOfArray, pivotElement, number;
  std::cin >> sizeOfArray >> pivotElement;
  std::vector<int> leftPartOfArray, rightPartOfArray;
  for (int i = 1; i < sizeOfArray; i++)
  {
    std::cin >> number;
    number < pivotElement ? leftPartOfArray.push_back(number) : rightPartOfArray.push_back(number);
  }
  for (int number : leftPartOfArray)
    std::cout << number << ' ';
  std::cout << pivotElement << ' ';
  for (int number : rightPartOfArray)
    std::cout << number << ' ';
}