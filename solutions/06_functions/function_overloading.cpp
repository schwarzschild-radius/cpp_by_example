#include <iostream>

// Function overloads

void display(int value) { std::cout << "Int: " << value << std::endl; }

void display(std::string text) { std::cout << "String: " << text << std::endl; }

int main() {
  int x = 10;
  std::string y = "C++";
  // Call the overloaded display functions
  display(x);
  display(y);
  return 0;
}