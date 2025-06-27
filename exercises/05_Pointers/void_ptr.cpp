#include <cstring> // For memcpy
#include <iostream>

int main() {

  int x = 7;
  void *vp = &x;

  // TODO 1: Use static_cast to dereference void pointer and print x

  // TODO 2: Use C-style cast (int*) to do the same as above and print x

  // TODO 3: Copy memory from void pointer into another int variable using
  // memcpy

  double d = 3.14;
  vp = &d;

  // TODO 4: Cast the void pointer to double* and print the value

  return 0;
}
