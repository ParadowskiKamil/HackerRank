#include <algorithm>
#include <iostream>

int main()
{
  unsigned int numbers[5];
  std::cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];
  std::sort(numbers, numbers + 5);
  std::cout << numbers[0] + numbers[1] + numbers[2] + numbers[3] << ' ' << numbers[1] + numbers[2] + numbers[3] + numbers[4];
}