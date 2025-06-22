#include <iostream>
using namespace std;

// Function declaration
int multiply(int a, int b);

int main() {
  int a = 3, b = 4;
  cout << "Product: " << multiply(a, b) << endl;
  return 0;
}

// Function definition
int multiply(int a, int b) { return a * b; }