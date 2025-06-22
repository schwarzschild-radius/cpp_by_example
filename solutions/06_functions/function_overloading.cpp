#include <iostream>
using namespace std;

// Function overloads

void display(int value) { cout << "Int: " << value << endl; }

void display(std::string text) { cout << "String: " << text << endl; }

int main() {
  int x = 10;
  string y = "C++";
  // Call the overloaded display functions
  display(x);
  display(y);
  return 0;
}
