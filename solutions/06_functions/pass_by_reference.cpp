#include <iostream>
using namespace std;

void increaseByTenRef(int &n) {
  n += 10;
  cout << "Inside function (by reference): " << n << endl;
}

int main() {
  int num = 5;
  cout << "Before (by reference): " << num << endl;
  increaseByTenRef(num);
  cout << "After (by reference): " << num << endl;
  return 0;
}