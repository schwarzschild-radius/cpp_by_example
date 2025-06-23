#include <iostream>
void increaseByTenPtr(int *n) {
  *n += 10;
  std::cout << "Inside function (by pointer): " << *n << '\n';
}
int main() {
  int num = 5;
  std::cout << "Before (by pointer): " << num << '\n';
  increaseByTenPtr(&num);
  std::cout << "After (by pointer): " << num << '\n';
  return 0;
}
