#include <iostream>

int main()
{
  int numberOfOrderedDishes, orderedDishThatAnnaDidNotConsume, priceOfDish, chargedMoneyOfAnna, sharedBill = 0;
  std::cin >> numberOfOrderedDishes >> orderedDishThatAnnaDidNotConsume;
  for (int i = 0; i < numberOfOrderedDishes; i++)
  {
    std::cin >> priceOfDish;
    if (i != orderedDishThatAnnaDidNotConsume)
      sharedBill += priceOfDish;
  }
  std::cin >> chargedMoneyOfAnna;
  chargedMoneyOfAnna == sharedBill / 2 ? std::cout << "Bon Appetit" : std::cout << chargedMoneyOfAnna - sharedBill / 2;
}