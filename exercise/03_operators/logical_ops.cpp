// ===============================
// EXERCISE FILE: logical_operators.cpp
// ===============================

#include <iostream>
using namespace std;

/*
Task:
Use the correct logical operator in each conditional to match the expected output.
*/

int main() {
    int age = 20;
    bool hasID = true;

    if (/* TODO: check if age is 18 or older AND hasID */)
        cout << "Entry allowed\n"; // &&

    bool hasCoupon = false;
    bool isStudent = true;

    if (/* TODO: check if hasCoupon OR isStudent */)
        cout << "Discount applicable\n"; // ||

    bool isLoggedIn = false;

    if (/* TODO: check if NOT isLoggedIn */)
        cout << "Please log in first\n"; // !

    return 0;
}

/*
Expected Output:
Entry allowed
Discount applicable
Please log in first
*/
