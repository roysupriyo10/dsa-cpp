#include <iostream>

int multiply (int first, int second) {
  return first * second;
}

int main () {
  std::string first_number;
  std::cout << "Please type in your first name : " << std::endl;
  std::cin >> first_number;
  std::cout << "Hello" << first_number << std::endl;
  std::cout << multiply(15, 10) << std::endl;
  return 0;
}
