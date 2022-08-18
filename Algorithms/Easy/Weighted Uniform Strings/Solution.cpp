#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
  std::string string, alphabet = "abcdefghijklmnopqrstuvwxyz", answer = "";
  int numberOfQueries, weightOfStr, lengthOfCurrentSubstring;
  std::map<char, int> weightsOfSingleCharacters;
  for (int i = 1; i <= alphabet.length(); i++)
    weightsOfSingleCharacters[alphabet[i - 1]] = i;
  std::cin >> string >> numberOfQueries;
  std::vector<int> weightsOfStr;
  for (int i = 0; i < string.length(); i++)
  {
    lengthOfCurrentSubstring = 1;
    weightsOfStr.push_back(weightsOfSingleCharacters[string[i]]);
    while (string[i] == string[i + 1])
    {
      lengthOfCurrentSubstring++;
      weightsOfStr.push_back(weightsOfSingleCharacters[string[i]] * lengthOfCurrentSubstring);
      i++;
    }
  }
  for (int i = 0; i < numberOfQueries; i++)
  {
    std::cin >> weightOfStr;
    answer += std::find(weightsOfStr.begin(), weightsOfStr.end(), weightOfStr) != weightsOfStr.end() ? "Yes\n" : "No\n";
  }
  std::cout << answer;
}