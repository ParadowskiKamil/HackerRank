#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>

int main()
{
  int numberOfCupcakes;
  std::cin >> numberOfCupcakes;
  int caloriesInCupcakes[numberOfCupcakes];
  for (int i = 0; i < numberOfCupcakes; i++)
    std::cin >> caloriesInCupcakes[i];
  std::sort(caloriesInCupcakes, caloriesInCupcakes + numberOfCupcakes, std::greater<int>());
  long long minimumNumberOfMilesToWalk = 0LL;
  for (int i = 0; i < numberOfCupcakes; i++)
    minimumNumberOfMilesToWalk += std::pow(2, i) * caloriesInCupcakes[i];
  std::cout << minimumNumberOfMilesToWalk;
}