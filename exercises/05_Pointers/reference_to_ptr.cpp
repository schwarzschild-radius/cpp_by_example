#include <iostream>

// TODO 1: Define a function `swapPointers` that takes two arguments of type
// `int*&`
//         That is, each parameter is a reference to a pointer to int
//         This allows the function to modify the actual pointers passed to
//         it.

int main() {
  int a = 10;
  int b = 20;

  int *p1 = &a;
  int *p2 = &b;

  // TODO 2: Print the values and addresses BEFORE the swap
  // Expected output:
  //   *p1 = 10, *p2 = 20
  //   p1 points to address of a, p2 to address of b

  // TODO 3: Call the `swapPointers(p1, p2)` function
  // This should cause p1 to point to b and p2 to point to a

  // TODO 4: Print the values and addresses AFTER the swap
  // Expected output:
  //   *p1 = 20, *p2 = 10
  //   p1 now points to address of b, p2 to address of a

  return 0;
}
