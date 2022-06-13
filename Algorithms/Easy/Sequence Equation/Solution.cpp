#include <algorithm>
#include <iostream>

int main()
{
  int sizeOfArray;
  std::cin >> sizeOfArray;
  int nums[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> nums[i];
  for (int i = 1; i <= sizeOfArray; i++)
    std::cout << std::find(nums, nums + sizeOfArray, std::find(nums, nums + sizeOfArray, i) - nums + 1) - nums + 1 << std::endl;
}