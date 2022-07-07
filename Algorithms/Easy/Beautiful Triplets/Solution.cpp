#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
  int sizeOfArray, d, number, numberOfBeautifulTriplets = 0;
  std::cin >> sizeOfArray >> d;
  std::vector<int> nums;
  for (int i = 0; i < sizeOfArray; i++)
  {
    std::cin >> number;
    nums.push_back(number);
  }
  for (int n : nums)
  {
    if (std::find(nums.begin(), nums.end(), n + d) != nums.end() && std::find(nums.begin(), nums.end(), n + d * 2) != nums.end())
      numberOfBeautifulTriplets++;
  }
  std::cout << numberOfBeautifulTriplets;
}