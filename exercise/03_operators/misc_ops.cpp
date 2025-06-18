// =====================
// Miscellaneous Operators - Exercise
// =====================
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int marks;
};

int main() {
    // Task 1: Print size of int variable using sizeof
    int x = 10;
    // TODO: Use sizeof to print size of x

    // Task 2: Use ternary operator to set result as "Adult" if age >= 18, else "Minor"
    int age = 17;
    // TODO: Use ternary operator to set and print result

    // Task 3: Use comma operator to print "Hi, " and assign 20 to y
    // TODO: Use comma operator correctly

    // Task 4: Use dereference operator to print value of val using pointer
    int val = 42;
    int* ptr = &val;
    // TODO: Use * operator to print the value pointed to by ptr

    // Task 5: Print address of val using '&' operator
    // TODO: Use & operator to print address

    // Task 6: Use '->' to print marks of student using pointer
    Student s = {85};
    Student* s_ptr = &s;
    // TODO: Use -> to access and print marks

    // Task 7: Use scope resolution operator to print global and namespace variable
    int val1 = 5;
    // TODO: Print ::val1 and MySpace::val1

    return 0;
}

/*
Expected Output:
sizeof(x): 4
Ternary result: Minor
Hi, Value of y using comma operator: 20
Value pointed to by ptr: 42
Address of val: 0x... (will vary)
s_ptr->marks: 85
Global val1 using ::val1: 5
Namespace MySpace::val1: 10
*/
