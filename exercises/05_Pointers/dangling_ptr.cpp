#include <iostream>

int main() {
  // TODO 1: Declare an int pointer `dp`

  // TODO 2: Create a block scope (use `{ ... }`)
  // Inside that block:
  //   a) Declare a local int variable `temp` and assign it a value (e.g., 99)
  //   b) Assign the address of `temp` to `dp`
  //   c) Print the value pointed to by `dp` — this should be safe inside the
  //   block

  // TODO 3: After the block, attempt to print `*dp` again (outside the block)
  //  `dp` is now a dangling pointer and will lead to undefined behavior

  // TODO 4: Handle the dangling pointer `dp`
  return 0;
}
