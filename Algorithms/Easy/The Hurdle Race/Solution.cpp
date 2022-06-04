#include <algorithm>
#include <iostream>

int main()
{
  int hurdles, jumpHeight;
  std::cin >> hurdles >> jumpHeight;
  int h[hurdles];
  for (int i = 0; i < hurdles; i++)
    std::cin >> h[i];
  *std::max_element(h, h + hurdles) > jumpHeight ? std::cout << *std::max_element(h, h + hurdles) - jumpHeight : std::cout << 0;
}