#include <iostream>

// Function declaration
int multiply(int a, int b);

int main() {
  int a = 3, b = 4;
  std::cout << "Product: " << multiply(a, b) << std::endl;
  return 0;
}

// Function definition
int multiply(int a, int b) { return a * b; }