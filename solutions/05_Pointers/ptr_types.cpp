#include <iostream>
// Global scope for constant expression
constexpr int cx = 42;
constexpr int cy = 24;

// 5. p5 is a constexpr pointer to a const int
constexpr const int *p5 = &cx;

int main() {
  int x = 5;
  int y = 10;

  // 1. Normal pointer: Can modify both pointer and the value
  int *p1 = &x;
  *p1 = 100; //  change value of x
  p1 = &y;   //  change pointer to y
  *p1 = 200; //  change value of y
  std::cout << "Normal pointer: *p1 = " << *p1 << ", address = " << p1 << '\n';

  // 2. Pointer to const: can change pointer, not value
  const int *p2 = &x;
  // *p2 = 300; //  Error: cannot change value
  p2 = &y; //  pointer can be reassigned
  std::cout << "Pointer to const: *p2 = " << *p2 << ", address = " << p2
            << '\n';

  // 3. Const pointer: can change value, not pointer
  int *const p3 = &x;
  *p3 = 400; // can change the value
  // p3 = &y;  //  Error: cannot reassign pointer
  std::cout << "Const pointer: *p3 = " << *p3 << ", address = " << p3 << '\n';

  // 4. Const pointer to const: can't change pointer or value
  const int *const p4 = &x;
  // *p4 = 500; // Error: cannot change value
  // p4 = &y;   //  Error: cannot reassign pointer
  std::cout << "Const pointer to const: *p4 = " << *p4 << ", address = " << p4
            << '\n';

  // 5. Constexpr pointer

  std::cout << "Constexpr pointer : *p5 = " << *p5 << ", address = " << p5
            << '\n';
  // *p5 = 11;   // Error: cannot modify a const object
  // p5 = &cy;   //  Error: cannot assign to constexpr pointer
  return 0;
}
