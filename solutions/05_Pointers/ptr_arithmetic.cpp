#include <iostream>
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int *ptr = arr;

  // 1: print and move forward using post-increment
  // ptr = arr (arr[0] = 1)
  // *(ptr++) → prints 1, then ptr becomes arr + 1
  std::cout << *(ptr++) << std::endl; // Output: 1

  // 2: print element two ahead from current position using pointer + offset
  // (arr[1+2] = arr[3])
  // ptr now = arr + 1 (points to arr[1])
  // ptr + 2 = arr[3] → prints 4
  std::cout << *(ptr + 2) << std::endl; // Output: 4

  // 3: pre-increment, now ptr points to arr[2], print it
  // ++ptr → ptr becomes arr + 2
  // *(++ptr) → arr[2] = 3
  std::cout << *(++ptr) << std::endl; // Output: 3

  // 4: print current, then move back
  // *(ptr--) → prints arr[2] = 3, then ptr becomes arr + 1
  std::cout << *(ptr--) << std::endl; // Output: 3

  return 0;
}
