#include <iostream>
// Global scope for constexpr pointer
constexpr int cx = 42;
constexpr int cy = 24;

// TODO 5: Declare a constexpr pointer to a constexpr int, named p5.
//         - The pointer and the value must both be constant

int main() {
  int x = 5;
  int y = 10;

  // Normal pointer (p1): Can modify both the pointer and the value
  // TODO 1 : Declare a normal int pointer named p1 that initially points to x.
  //       - Change the value of x using *p1
  //       - Reassign p1 to point to y and change y's value through it

  // Pointer to const (p2): Can change where it points, but not the value
  // TODO 2: Declare a pointer to const int named p2, pointing to x.
  //       - Try changing the value through *p2 (should give error)
  //       - Reassign p2 to point to y

  // Const pointer (p3): Cannot change what it points to, but can change the
  // value
  // TODO 3: Declare a const pointer to int named p3, pointing to x.
  //       - Modify the value at p3
  //       - Try changing p3 to point to y (should give error)

  // Const pointer to const (p4): Neither pointer nor value can be changed
  // TODO 4: Declare a const pointer to const int named p4, pointing to x.
  //       - Try modifying the value or reassigning the pointer (should give
  //       error)

  // Constexpr pointer (p5): Evaluated at compile time; neither the pointer nor
  // the value it points to can be modified at runtime
  //  TODO 5:
  //       - Try modifying the value or reassigning the pointer (should give
  //       error)

  // TODO: For each pointer above, print:
  //       - the value it points to using *p
  //       - the address it stores using just p

  return 0;
}
