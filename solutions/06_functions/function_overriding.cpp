#include <iostream>

class Shape {
public:
  virtual void draw() { std::cout << "Drawing a shape." << std::endl; }
};

class Circle : public Shape {
public:
  void draw() override { std::cout << "Drawing a circle." << std::endl; }
};

int main() {
  Shape *s = new Circle(); // returns a pointer to the derived class Circle
  s->draw();               // Output: Drawing a circle.
  delete s;
  return 0;
}