#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
  int sizeOf1Arr, sizeOf2Arr;
  std::cin >> sizeOf1Arr;
  int first[sizeOf1Arr];
  for (int i = 0; i < sizeOf1Arr; i++)
    std::cin >> first[i];
  std::cin >> sizeOf2Arr;
  int second[sizeOf2Arr];
  for (int i = 0; i < sizeOf2Arr; i++)
    std::cin >> second[i];
  std::sort(first, first + sizeOf1Arr);
  std::sort(second, second + sizeOf2Arr);
  std::vector<int> missNums(sizeOf1Arr);
  std::vector<int>::iterator iter = std::set_difference(second, second + sizeOf2Arr, first, first + sizeOf1Arr, missNums.begin());
  missNums.resize(std::distance(missNums.begin(), std::unique(missNums.begin(), missNums.end())));
  for (std::vector<int>::iterator i = missNums.begin(); i != iter && *i != 0; i++)
    std::cout << *i << ' ';
}