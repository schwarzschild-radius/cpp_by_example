#include <iostream>
void increaseByTen(int n) {
  n += 10;
  std::cout << "Inside function (by value): " << n << '\n';
}
int main() {
  int num = 5;
  std::cout << "Before (by value): " << num << '\n';
  increaseByTen(num);
  std::cout << "After (by value): " << num << '\n';
  return 0;
}
