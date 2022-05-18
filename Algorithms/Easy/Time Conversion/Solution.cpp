#include <iostream>
#include <string>

int main()
{
  std::string time;
  std::cin >> time;
  if (time.substr(8, 2) == "AM" && time.substr(0, 2) == "12")
    time.replace(0, 2, "00");
  else if (time.substr(8, 2) == "PM" && time.substr(0, 2) != "12")
    time.replace(0, 2, std::to_string(std::stoi(time.substr(0, 2)) + 12));
  std::cout << time.substr(0, 8);
}