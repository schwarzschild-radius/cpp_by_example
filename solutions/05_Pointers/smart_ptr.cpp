#include <iostream>
#include <memory> // For std::shared_ptr

int main() {
  // 1. Declare smart pointer
  std::shared_ptr<int> sp;

  {
    // 2. Allocate inside a block using make_shared
    sp = std::make_shared<int>(99);
    std::cout << "[Inside block] *sp = " << *sp << '\n';
  } // Block ends, but memory is still managed by shared_ptr

  // 3. Safe to access — shared_ptr keeps the memory alive
  std::cout << "[Outside block] *sp = " << *sp << '\n';

  // 4. Print reference count
  std::cout << "Reference count: " << sp.use_count() << '\n';

  return 0;
}
