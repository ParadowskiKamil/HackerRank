#include <iostream>

int main()
{
  int lastBookPage, target, firstBookPage = 1, minimumNumberOfPagesToTurn = 0;
  std::cin >> lastBookPage >> target;
  if (lastBookPage % 2 == 0)
    lastBookPage++;
  while (firstBookPage != target && firstBookPage - 1 != target && lastBookPage != target && lastBookPage - 1 != target)
  {
    firstBookPage += 2;
    lastBookPage -= 2;
    minimumNumberOfPagesToTurn++;
  }
  std::cout << minimumNumberOfPagesToTurn;
}