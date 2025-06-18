// ===============================
// SOLUTION FILE: relational_operators_solution.cpp
// ===============================

#include <iostream>
using namespace std;

int main() {
    string password = "admin";
    string input = "admin";
    if (input == password)
        cout << "Login Success\n";  // ==

    int user_input = 4, correct = 5;
    if (user_input != correct)
        cout << "Try again!\n";     // !=

    int score = 105, highscore = 100;
    if (score > highscore)
        cout << "New High Score!\n"; // >

    int age = 16;
    if (age < 18)
        cout << "Not eligible to vote\n"; // <

    int marks = 70;
    if (marks >= 50)
        cout << "You passed!\n"; // >=

    int attempts = 3;
    if (attempts <= 3)
        cout << "You still have chances\n"; // <=

    return 0;
}

/*
Final Output:
Login Success
Try again!
New High Score!
Not eligible to vote
You passed!
You still have chances
*/
