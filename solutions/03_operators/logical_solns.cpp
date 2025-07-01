#include <iostream>

int main() {
    int age = 20;
    bool hasID = true;

    if (age >= 18 && hasID)
        std::cout << "Entry allowed\n"; // &&

    bool hasCoupon = false;
    bool isStudent = true;

    if (hasCoupon || isStudent)
        std::cout << "Discount applicable\n"; // ||

    bool isLoggedIn = false;

    if (!isLoggedIn)
        std::cout << "Please log in first\n"; // !

    return 0;
}

/*
Final Output:
Entry allowed
Discount applicable
Please log in first
*/
