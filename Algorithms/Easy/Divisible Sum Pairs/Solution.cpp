#include <iostream>

int main()
{
  int sizeOfArray, divisor, numberOfValidPairs = 0;
  std::cin >> sizeOfArray >> divisor;
  int numbers[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
    std::cin >> numbers[i];
  for (int i = 0; i < sizeOfArray; i++)
  {
    for (int j = i + 1; j < sizeOfArray; j++)
    {
      if ((numbers[i] + numbers[j]) % divisor == 0)
        numberOfValidPairs++;
    }
  }
  std::cout << numberOfValidPairs;
}