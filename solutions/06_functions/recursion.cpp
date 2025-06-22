#include <iostream>

// Recursive function
int sum(int n) {
  if (n <= 1)
    return n;
  return n + sum(n - 1);
}

int main() {
  int n = 5;
  std::cout << "Sum from 1 to " << n << " is " << sum(n) << std::endl;
  return 0;
}