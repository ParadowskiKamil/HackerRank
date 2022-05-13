#include <cstdlib>
#include <iostream>

int main()
{
  int sizeOfSquareMatrix;
  std::cin >> sizeOfSquareMatrix;
  int squareMatrix[sizeOfSquareMatrix][sizeOfSquareMatrix], sumOfFirstDiagonal = 0, sumOfSecondDiagonal = 0;
  for (int i = 0; i < sizeOfSquareMatrix; i++)
  {
    for (int j = 0; j < sizeOfSquareMatrix; j++)
    {
      std::cin >> squareMatrix[i][j];
      if (i == j)
        sumOfFirstDiagonal += squareMatrix[i][j];
      if (j == sizeOfSquareMatrix - i - 1)
        sumOfSecondDiagonal += squareMatrix[i][j];
    }
  }
  std::cout << std::abs(sumOfFirstDiagonal - sumOfSecondDiagonal);
}