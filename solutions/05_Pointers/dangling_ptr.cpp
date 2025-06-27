#include <iostream>

int main() {
  int *dp; // 1. Declare an int pointer

  // 2. Define a block level scope
  {
    int temp = 99; // a) Local variable
    dp = &temp;    // b) Assign its address to dp
    std::cout << "Inside block: *dp = " << *dp
              << '\n'; //  Safe: temp is still alive here
  } // temp goes out of scope here

  // 3. Now dp is a dangling pointer (points to destroyed memory)

  // std::cout << "Outside block: *dp = " << *dp << '\n';
  //   Uncommenting above line leads to undefined behavior because:
  //       - The variable `temp` was allocated on the stack.
  //       - Once the block ended, `temp` was destroyed.
  //       - `dp` still holds the old address, but it no longer points to valid
  //       memory.

  // 4. Fix Option 1: Assign nullptr to avoid accidental usage
  dp = nullptr;

  // Safe check before usage
  if (dp != nullptr) {
    std::cout << "Safe access: *dp = " << *dp << '\n';
  } else {
    std::cout << "dp is nullptr — avoiding undefined behavior.\n";
  }

  // Fix Option 2: Using smart pointers to manage memory safely
  // See `smart_ptr.cpp`
  return 0;
}
