#include <iostream>
#include <string>

int multiply (int first, int second) {
  return first * second;
}

int main () {

  std::string full_name;
  int age;

  std::cout << "Please enter your full name and age " << std::endl;

  std::getline(std::cin, full_name);

  std::cin >> age;

  std::cout << "Hello " << full_name << ", you are " << age << " years old!" << std::endl;

  return 0;
}
