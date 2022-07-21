#include <algorithm>
#include <iostream>
#include <string>

bool isBoardEmpty(const std::string &cellsOnBoard)
{
  return std::count(cellsOnBoard.begin(), cellsOnBoard.end(), '_') == cellsOnBoard.length();
}

bool areLadybugsNotAlone(const std::string &cellsOnBoard)
{
  for (char cell : cellsOnBoard)
  {
    if (cell != '_' && std::count(cellsOnBoard.begin(), cellsOnBoard.end(), cell) == 1)
      return false;
  }
  return true;
}

bool isAtLeastOneEmptyCellOnBoard(const std::string &cellsOnBoard)
{
  return std::count(cellsOnBoard.begin(), cellsOnBoard.end(), '_') > 0;
}

bool areLadybugsHappyAtBeggining(const std::string &cellsOnBoard)
{
  for (int i = 1; i < cellsOnBoard.length() - 1; i++)
  {
    if (cellsOnBoard[i - 1] != cellsOnBoard[i] && cellsOnBoard[i] != cellsOnBoard[i + 1])
      return false;
  }
  return true;
}

int main()
{
  int numberOfGames, numberOfCellsOnBoard;
  std::string cellsOnBoard;
  std::cin >> numberOfGames;
  for (int i = 0; i < numberOfGames; i++)
  {
    std::cin >> numberOfCellsOnBoard >> cellsOnBoard;
    const bool areLadybugsHappyWith_ = areLadybugsNotAlone(cellsOnBoard) && isAtLeastOneEmptyCellOnBoard(cellsOnBoard);
    const bool areLadybugsHappyWithout_ = areLadybugsNotAlone(cellsOnBoard) && areLadybugsHappyAtBeggining(cellsOnBoard);
    std::cout << (isBoardEmpty(cellsOnBoard) || areLadybugsHappyWith_ || areLadybugsHappyWithout_ ? "YES" : "NO") << std::endl;
  }
}