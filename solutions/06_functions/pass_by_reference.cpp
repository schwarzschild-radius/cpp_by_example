#include <iostream>
void increaseByTenRef(int &n) {
  n += 10;
  std::cout << "Inside function (by reference): " << n << '\n';
}
int main() {
  int num = 5;
  std::cout << "Before (by reference): " << num << '\n';
  increaseByTenRef(num);
  std::cout << "After (by reference): " << num << '\n';
  return 0;
}
