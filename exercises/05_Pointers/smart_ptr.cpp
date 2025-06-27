#include <iostream>
#include <memory> // For std::shared_ptr

int main() {
  // TODO 1:
  // Declare a std::shared_ptr<int> named `sp`

  // TODO 2:
  // Create a local block using { }
  // Inside the block:
  //   a) Allocate memory using std::make_shared<int>(99)
  //   b) Assign the result to `sp`
  //   c) Print the value pointed to by `sp`

  // TODO 3: Outside the block, print the value pointed to by `sp` again

  // TODO 4: Use sp.use_count() to print the current reference count

  return 0;
}
