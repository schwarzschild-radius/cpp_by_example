#include <iostream>

void increaseByTen(int n) {
  n += 10;
  std::cout << "Inside function (by value): " << n << std::endl;
}

int main() {
  int num = 5;
  std::cout << "Before (by value): " << num << std::endl;
  increaseByTen(num);
  std::cout << "After (by value): " << num << std::endl;
  return 0;
}