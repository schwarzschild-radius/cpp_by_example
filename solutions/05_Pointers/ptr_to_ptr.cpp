#include <iostream>

int main() {
  int value = 42;
  int *ptr1 = &value;
  int **ptr2 = &ptr1;

  // 1 . Print in all three ways
  std::cout << "Before modifying \n";
  std::cout << "value = " << value << '\n';   // 42
  std::cout << "*ptr1 = " << *ptr1 << '\n';   // 42
  std::cout << "**ptr2 = " << **ptr2 << '\n'; // 42

  // 2.Modify via *ptr1
  *ptr1 = 77;
  std::cout << "\nModify value via *ptr1\n";
  std::cout << "value = " << value << '\n';   // 77
  std::cout << "**ptr2 = " << **ptr2 << '\n'; // 77

  // 3. Modify via **ptr2
  **ptr2 = 100;
  std::cout << "\nModify value via **ptr2\n";
  std::cout << "value = " << value << '\n'; // 100
  std::cout << "*ptr1 = " << *ptr1 << '\n'; // 100

  // 4.Reassign ptr1 to point to new variable 'x' via ptr2
  int x = 99;
  *ptr2 = &x; // Changing ptr1 via ptr2

  std::cout << "\nChanging ptr1 via ptr2\n";
  std::cout << "*ptr1 = " << *ptr1 << '\n';   // 99
  std::cout << "**ptr2 = " << **ptr2 << '\n'; // 99
  std::cout << "value = " << value << '\n';   // 100 (unchanged now)

  return 0;
}
