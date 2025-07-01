#include <iostream>

// 1. swapPointers takes references to pointers (int*&),
// allowing it to modify the original pointers from the caller.
void swapPointers(int *&p1, int *&p2) {
  int *temp = p1;
  p1 = p2;
  p2 = temp;
}

int main() {
  int a = 10;
  int b = 20;

  int *p1 = &a;
  int *p2 = &b;

  // 2.Print the values and addresses BEFORE the swap
  std::cout << "Before swap:\n";
  std::cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << '\n';
  std::cout << "p1 = " << p1 << ", p2 = " << p2 << '\n';

  // 3. Call the function to swap the actual pointers
  swapPointers(p1, p2);

  // 4. Print the values and addresses AFTER the swap
  std::cout << "\nAfter swap:\n";
  std::cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << '\n';
  std::cout << "p1 = " << p1 << ", p2 = " << p2 << '\n';

  return 0;
}
