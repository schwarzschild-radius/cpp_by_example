#include <iostream>

void increaseByTenPtr(int *n) {
  *n += 10;
  std::cout << "Inside function (by pointer): " << *n << std::endl;
}

int main() {
  int num = 5;
  std::cout << "Before (by pointer): " << num << std::endl;
  increaseByTenPtr(&num);
  std::cout << "After (by pointer): " << num << std::endl;
  return 0;
}