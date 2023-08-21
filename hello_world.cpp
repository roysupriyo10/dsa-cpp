#include <iostream>
#include <string>

int multiply (int first, int second) {
  return first * second;
}

int main () {
  // std::string first_number;
  // std::cout << "Please type in your first name : " << std::endl;
  // std::cin >> first_number;
  // std::cout << "Hello" << first_number << std::endl;
  // std::cout << multiply(15, 10) << std::endl;
  int age;
  std::string name;

  std::cout << "Please enter your age and name : " << std::endl;
  std::cin >> age;
  std::cin >> name;
  std::cout << "Hello " << name << ", you are " << age << " years old!" << std::endl;
  return 0;
}
