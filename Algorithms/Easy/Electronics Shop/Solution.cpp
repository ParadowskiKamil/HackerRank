#include <iostream>

int main()
{
  int availableBudget, numberOfKeyboardModels, numberOfUSBDriveModels, priceOfUSBDrive, mostExpensiveAvailableSetup = -1;
  std::cin >> availableBudget >> numberOfKeyboardModels >> numberOfUSBDriveModels;
  int pricesOfKeyboardModels[numberOfKeyboardModels];
  for (int i = 0; i < numberOfKeyboardModels; i++)
    std::cin >> pricesOfKeyboardModels[i];
  for (int i = 0; i < numberOfUSBDriveModels; i++)
  {
    std::cin >> priceOfUSBDrive;
    for (int priceOfKeyboard : pricesOfKeyboardModels)
    {
      if (priceOfKeyboard + priceOfUSBDrive <= availableBudget && priceOfKeyboard + priceOfUSBDrive > mostExpensiveAvailableSetup)
        mostExpensiveAvailableSetup = priceOfKeyboard + priceOfUSBDrive;
    }
  }
  std::cout << mostExpensiveAvailableSetup;
}