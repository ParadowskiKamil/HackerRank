#include <iostream>

int main()
{
  int sizeOfStaircase;
  std::cin >> sizeOfStaircase;
  for (int i = 0; i < sizeOfStaircase; i++)
  {
    for (int j = 0; j < sizeOfStaircase; j++)
      j >= sizeOfStaircase - i - 1 ? std::cout << '#' : std::cout << ' ';
    std::cout << std::endl;
  }
}