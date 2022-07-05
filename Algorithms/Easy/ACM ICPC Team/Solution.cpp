#include <iostream>
#include <string>

int main()
{
  int numOfAttendees, numOfTopics, maximumNumberOfKnownTopicsByTwoTeams = 0, numberOfTwoPersonTeamsThatKnowMaximumNumberOfTopics;
  std::cin >> numOfAttendees >> numOfTopics;
  std::string topics[numOfAttendees];
  for (int i = 0; i < numOfAttendees; i++)
    std::cin >> topics[i];
  for (int i = 0; i < numOfAttendees; i++)
  {
    for (int j = i + 1; j < numOfAttendees; j++)
    {
      int numberOfKnownTopicsByTwoTeams = 0;
      for (int k = 0; k < numOfTopics; k++)
      {
        if (topics[i][k] == '1' || topics[j][k] == '1')
          numberOfKnownTopicsByTwoTeams++;
      }
      if (numberOfKnownTopicsByTwoTeams == maximumNumberOfKnownTopicsByTwoTeams)
        numberOfTwoPersonTeamsThatKnowMaximumNumberOfTopics++;
      else if (numberOfKnownTopicsByTwoTeams > maximumNumberOfKnownTopicsByTwoTeams)
      {
        maximumNumberOfKnownTopicsByTwoTeams = numberOfKnownTopicsByTwoTeams;
        numberOfTwoPersonTeamsThatKnowMaximumNumberOfTopics = 1;
      }
    }
  }
  std::cout << maximumNumberOfKnownTopicsByTwoTeams << std::endl << numberOfTwoPersonTeamsThatKnowMaximumNumberOfTopics;
}