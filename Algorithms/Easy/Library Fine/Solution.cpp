#include <iostream>

int main()
{
  int returnedDayOfBook, returnedMonthOfBook, returnedYearOfBook, dueDayOfBook, dueMonthOfBook, dueYearOfBook;
  std::cin >> returnedDayOfBook >> returnedMonthOfBook >> returnedYearOfBook >> dueDayOfBook >> dueMonthOfBook >> dueYearOfBook;
  if (returnedYearOfBook > dueYearOfBook)
    std::cout << 10000;
  else if (returnedMonthOfBook > dueMonthOfBook && returnedYearOfBook == dueYearOfBook)
    std::cout << 500 * (returnedMonthOfBook - dueMonthOfBook);
  else if (returnedDayOfBook > dueDayOfBook && returnedMonthOfBook == dueMonthOfBook && returnedYearOfBook == dueYearOfBook)
    std::cout << 15 * (returnedDayOfBook - dueDayOfBook);
  else
    std::cout << 0;
}