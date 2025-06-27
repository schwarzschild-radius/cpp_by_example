#include <iostream>

int main() {
  int value = 42;

  int *ptr1 = &value;
  int **ptr2 = &ptr1;

  // TODO 1: Print value using all three forms: value, *ptr1, **ptr2
  // Expected output: 42, 42, 42

  // TODO 2: Modify the value to 77 using *ptr1 and print value
  // What happens to value and **ptr2?
  // Expected output: 77, 77

  // TODO 3: Modify the value to 100 using **ptr2 and print value
  // Does ptr1 also reflect the change?
  // Expected output: 100, 100

  // TODO 4: Declare an int x = 99 and reassign ptr1 to point to x using ptr2
  // Then print *ptr1 and **ptr2. What does value now contain?
  // Expected output: 99, 99, 100

  return 0;
}
