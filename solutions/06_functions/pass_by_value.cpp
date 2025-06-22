#include <iostream>
using namespace std;

void increaseByTen(int n) {
  n += 10;
  cout << "Inside function (by value): " << n << endl;
}

int main() {
  int num = 5;
  cout << "Before (by value): " << num << endl;
  increaseByTen(num);
  cout << "After (by value): " << num << endl;
  return 0;
}