#include <iostream>
#include <set>

int main()
{
  int numberOfPlayersOnLeaderboard, leaderboardScore, numberOfGamesThatBeenPlayedByPlayer, playersScoreAfterGame;
  std::cin >> numberOfPlayersOnLeaderboard;
  std::set<int> distinctLeaderboardScores;
  for (int i = 0; i < numberOfPlayersOnLeaderboard; i++)
  {
    std::cin >> leaderboardScore;
    distinctLeaderboardScores.insert(leaderboardScore);
  }
  std::set<int>::iterator iterator = distinctLeaderboardScores.begin();
  int playersRank = distinctLeaderboardScores.size() + 1;
  std::cin >> numberOfGamesThatBeenPlayedByPlayer;
  for (int i = 0; i < numberOfGamesThatBeenPlayedByPlayer; i++)
  {
    std::cin >> playersScoreAfterGame;
    while (*iterator <= playersScoreAfterGame && iterator != distinctLeaderboardScores.end())
    {
      iterator++;
      playersRank--;
    }
    std::cout << playersRank << std::endl;
  }
}