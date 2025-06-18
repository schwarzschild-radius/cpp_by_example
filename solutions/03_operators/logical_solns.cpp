// ===============================
// SOLUTION FILE: logical_operators_solution.cpp
// ===============================

#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasID = true;

    if (age >= 18 && hasID)
        cout << "Entry allowed\n"; // &&

    bool hasCoupon = false;
    bool isStudent = true;

    if (hasCoupon || isStudent)
        cout << "Discount applicable\n"; // ||

    bool isLoggedIn = false;

    if (!isLoggedIn)
        cout << "Please log in first\n"; // !

    return 0;
}

/*
Final Output:
Entry allowed
Discount applicable
Please log in first
*/
