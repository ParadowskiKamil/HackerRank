#include <cstdlib>
#include <iostream>
#include <string>

bool isPossibleToConvertString(const std::string &iStr, const std::string &dStr, const int rOp)
{
  if (iStr == dStr && iStr.size() * 2 <= rOp || iStr.size() < rOp && std::abs(static_cast<int>(iStr.size()) - rOp) > dStr.size())
    return true;
  for (int i = 0; i < iStr.length() > dStr.length() ? iStr.length() : dStr.length(); i++)
  {
    if (iStr[i] != dStr[i])
    {
      const int numberOfOperations = iStr.length() - i + dStr.length() - i;
      return numberOfOperations == rOp || numberOfOperations < rOp && (rOp - numberOfOperations) % 2 == 0 ? true : false;
    }
  }
  return false;
}

int main()
{
  std::string initialString, desiredString;
  int numberOfRequiredOperations;
  std::cin >> initialString >> desiredString >> numberOfRequiredOperations;
  std::cout << (isPossibleToConvertString(initialString, desiredString, numberOfRequiredOperations) ? "Yes" : "No");
}