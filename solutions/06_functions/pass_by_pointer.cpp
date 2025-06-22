#include <iostream>
using namespace std;

void increaseByTenPtr(int *n) {
  *n += 10;
  cout << "Inside function (by pointer): " << *n << endl;
}

int main() {
  int num = 5;
  cout << "Before (by pointer): " << num << endl;
  increaseByTenPtr(&num);
  cout << "After (by pointer): " << num << endl;
  return 0;
}