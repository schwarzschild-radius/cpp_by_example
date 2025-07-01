#include <cstring>
#include <iostream>

int main() {

  int x = 7;
  void *vp = &x;

  // 1. Static cast
  std::cout << "static_cast: " << *(static_cast<int *>(vp)) << '\n';

  // 2. C-style cast
  std::cout << "C-style cast: " << *((int *)vp) << '\n';

  // 3. Using memcpy
  int y;
  std::memcpy(&y, vp, sizeof(int));
  std::cout << "memcpy copy: y = " << y << '\n';

  // 4. Using void pointer with double
  double d = 3.14;
  vp = &d;
  std::cout << "Double from void*: " << *(static_cast<double *>(vp)) << '\n';

  return 0;
}