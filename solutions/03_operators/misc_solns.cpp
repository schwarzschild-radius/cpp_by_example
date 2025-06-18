// =====================
// Miscellaneous Operators - Solution
// =====================
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int marks;
};
int val1 = 5;
namespace MySpace {
    int val1 = 10;
}

int main() {
    int x = 10;
    cout << "sizeof(x): " << sizeof(x) << endl;

    int age = 17;
    string result = (age >= 18) ? "Adult" : "Minor";
    cout << "Ternary result: " << result << endl;

    int y = (cout << "Hi, ", 20);
    cout << "Value of y using comma operator: " << y << endl;

    int val = 42;
    int* ptr = &val;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    cout << "Address of val: " << &val << endl;

    Student s = {85};
    Student* s_ptr = &s;
    cout << "s_ptr->marks: " << s_ptr->marks << endl;

    int val1 = 5;
    cout << "Global val1 using ::val1: " << ::val1 << endl;
    cout << "Namespace MySpace::val1: " << MySpace::val1 << endl;

    return 0;
}
