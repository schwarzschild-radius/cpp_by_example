#include <iostream>
class Shape {
public:
  virtual void draw() { std::cout << "Drawing a shape." << '\n'; }
};
class Circle : public Shape {
public:
  void draw() override { std::cout << "Drawing a circle." << '\n'; }
};
int main() {
  Shape *s = new Circle(); // returns a pointer to the derived class Circle
  s->draw();               // Output: Drawing a circle.
  delete s;
  return 0;
}
