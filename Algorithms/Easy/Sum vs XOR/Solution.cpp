#include <algorithm>
#include <bitset>
#include <cmath>
#include <iostream>
#include <string>

int main()
{
  long long number;
  std::cin >> number;
  std::string totalNumberOfZeroBits = std::bitset<50>(number).to_string();
  while (totalNumberOfZeroBits.front() == '0')
    totalNumberOfZeroBits.erase(totalNumberOfZeroBits.begin());
  std::cout << static_cast<long long>(std::pow(2, std::count(totalNumberOfZeroBits.begin(), totalNumberOfZeroBits.end(), '0')));
}