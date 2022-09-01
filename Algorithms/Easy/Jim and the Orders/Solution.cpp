#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
  int numberOfCustomers, orderNumber, preparationTime;
  std::cin >> numberOfCustomers;
  std::vector<std::pair<int, int>> totalOrdersTimesAndNumbersOfOrders;
  for (int i = 1; i <= numberOfCustomers; i++)
  {
    std::cin >> orderNumber >> preparationTime;
    totalOrdersTimesAndNumbersOfOrders.emplace_back(orderNumber + preparationTime, i);
  }
  std::sort(totalOrdersTimesAndNumbersOfOrders.begin(), totalOrdersTimesAndNumbersOfOrders.end());
  for (std::pair<int, int> totalOrderTimeAndNumberOfOrder : totalOrdersTimesAndNumbersOfOrders)
    std::cout << totalOrderTimeAndNumberOfOrder.second << ' ';
}