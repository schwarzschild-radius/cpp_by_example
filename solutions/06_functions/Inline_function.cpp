#include <iostream>

inline int cube(int n) { return n * n * n; }

int main() {
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  std::cout << "Cube: " << cube(n) << std::endl;
  return 0;
}