#include <iostream>
#include <string>

struct Student {
    int marks;
};
int val1 = 5;
namespace MySpace {
    int val1 = 10;
}

int main() {
    int x = 10;
    std::cout << "sizeof(x): " << sizeof(x) << "\n";

    int age = 17;
    std::string result = (age >= 18) ? "Adult" : "Minor";
    std::cout << "Ternary result: " << result << "\n";

    int y = (std::cout << "Hi, ", 20);
    std::cout << "Value of y using comma operator: " << y << "\n";

    int val = 42;
    int* ptr = &val;
    std::cout << "Value pointed to by ptr: " << *ptr << "\n";

    std::cout << "Address of val: " << &val << "\n";

    Student s = {85};
    Student* s_ptr = &s;
    std::cout << "s_ptr->marks: " << s_ptr->marks << "\n";

    // int val1 = 5;
    std::cout << "Global val1 using ::val1: " << ::val1 << "\n";
    std::cout << "Namespace MySpace::val1: " << MySpace::val1 << "\n";

    return 0;
}
