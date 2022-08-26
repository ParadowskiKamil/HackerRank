#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main()
{
  int numberOfContests, maximumNumberOfImportantContests, luckBalanceOfContest, importanceRating, maximumLuckBalance = 0;
  std::cin >> numberOfContests >> maximumNumberOfImportantContests;
  std::vector<std::pair<int, int>> contestsLuckBalanceAndImportanceRating;
  for (int i = 0; i < numberOfContests; i++)
  {
    std::cin >> luckBalanceOfContest >> importanceRating;
    contestsLuckBalanceAndImportanceRating.push_back(std::make_pair(luckBalanceOfContest, importanceRating));
  }
  std::sort(contestsLuckBalanceAndImportanceRating.rbegin(), contestsLuckBalanceAndImportanceRating.rend());
  for (std::pair<int, int> luckBalanceAndRating : contestsLuckBalanceAndImportanceRating)
  {
    if (luckBalanceAndRating.second == 1)
    {
      maximumLuckBalance += maximumNumberOfImportantContests > 0 ? luckBalanceAndRating.first : -luckBalanceAndRating.first;
      maximumNumberOfImportantContests--;
    }
    else
      maximumLuckBalance += luckBalanceAndRating.first;
  }
  std::cout << maximumLuckBalance;
}