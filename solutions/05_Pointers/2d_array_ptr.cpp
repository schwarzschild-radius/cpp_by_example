#include <iostream>

int main() {
  int a[2][4] = {{3, 6, 9, 12}, {15, 18, 21, 24}};

  // 1. Standard array indexing
  std::cout << a[1][2] << "\n"; // Output: 21

  // 2. Pointer-style access: *(a + 1) points to row 1, add 2 for column
  std::cout << *(*(a + 1) + 2) << "\n"; // Output: 21

  // 3. Using  notation: [1[a]] (1[a] is same as a[1])
  std::cout << 1 [a][2] << "\n"; // Output: 21

  return 0;
}
