#include <iostream>
#include <string>

int main()
{
  int sizeOfSquareMatrix;
  std::cin >> sizeOfSquareMatrix;
  std::string mat[sizeOfSquareMatrix];
  for (int i = 0; i < sizeOfSquareMatrix; i++)
    std::cin >> mat[i];
  for (int i = 0; i < sizeOfSquareMatrix; i++)
  {
    for (int j = 0; j < sizeOfSquareMatrix; j++)
    {
      const bool isNumberInsideMat = i > 0 && i <= sizeOfSquareMatrix - 2 && j > 0 && j <= sizeOfSquareMatrix - 2;
      const bool isNumberGreaterThanUpperBound = mat[i][j] - '0' > mat[i - 1][j] - '0';
      const bool isNumberGreaterThanMiddleBound = mat[i][j] - '0' > mat[i][j - 1] - '0' && mat[i][j] - '0' > mat[i][j + 1] - '0';
      const bool isNumberGreaterThanLowerBound = mat[i][j] - '0' > mat[i + 1][j] - '0';
      if (isNumberInsideMat && isNumberGreaterThanUpperBound && isNumberGreaterThanMiddleBound && isNumberGreaterThanLowerBound)
        mat[i][j] = 'X';
      std::cout << mat[i][j];
    }
    std::cout << std::endl;
  }
}