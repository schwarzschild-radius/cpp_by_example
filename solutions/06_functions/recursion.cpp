#include <iostream>
using namespace std;

// Recursive function
int sum(int n) {
  if (n <= 1)
    return n;
  return n + sum(n - 1);
}

int main() {
  int n = 5;
  cout << "Sum from 1 to " << n << " is " << sum(n) << endl;
  return 0;
}
