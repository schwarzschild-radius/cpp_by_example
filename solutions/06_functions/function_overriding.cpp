#include <iostream>
using namespace std;

class Shape {
public:
  virtual void draw() { cout << "Drawing a shape." << endl; }
};

class Circle : public Shape {
public:
  void draw() override { cout << "Drawing a circle." << endl; }
};

int main() {
  Shape *s = new Circle(); // returns a pointer to the derived class Circle
  s->draw();               // Output: Drawing a circle.
  delete s;
  return 0;
}
