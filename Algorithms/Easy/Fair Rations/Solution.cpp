#include <iostream>
#include <string>

int main()
{
  int numberOfSubjectsInBreadLine, sumOfLoavesAtBeginning = 0, minimumNumberOfLoavesRequired = 0;
  std::cin >> numberOfSubjectsInBreadLine;
  int numberOfLoavesPerPerson[numberOfSubjectsInBreadLine];
  for (int i = 0; i < numberOfSubjectsInBreadLine; i++)
  {
    std::cin >> numberOfLoavesPerPerson[i];
    sumOfLoavesAtBeginning += numberOfLoavesPerPerson[i];
  }
  if (sumOfLoavesAtBeginning % 2 == 0)
  {
    for (int i = 0; i < numberOfSubjectsInBreadLine - 1; i++)
    {
      if (numberOfLoavesPerPerson[i] % 2 == 1)
      {
        numberOfLoavesPerPerson[i]++;
        numberOfLoavesPerPerson[i + 1]++;
        minimumNumberOfLoavesRequired += 2;
      }
    }
  }
  std::cout << (sumOfLoavesAtBeginning % 2 == 0 ? std::to_string(minimumNumberOfLoavesRequired) : "NO");
}