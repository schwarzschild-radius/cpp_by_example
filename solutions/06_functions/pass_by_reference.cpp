#include <iostream>

void increaseByTenRef(int &n) {
  n += 10;
  std::cout << "Inside function (by reference): " << n << std::endl;
}

int main() {
  int num = 5;
  std::cout << "Before (by reference): " << num << std::endl;
  increaseByTenRef(num);
  std::cout << "After (by reference): " << num << std::endl;
  return 0;
}