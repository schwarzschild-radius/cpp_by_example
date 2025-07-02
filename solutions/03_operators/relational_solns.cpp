#include <iostream>
#include <string>

int main() {
    std::string password = "admin";
    std::string input = "admin";
    if (input == password)
        std::cout << "Login Success\n";  // ==

    int user_input = 4, correct = 5;
    if (user_input != correct)
        std::cout << "Try again!\n";     // !=

    int score = 105, highscore = 100;
    if (score > highscore)
        std::cout << "New High Score!\n"; // >

    int age = 16;
    if (age < 18)
        std::cout << "Not eligible to vote\n"; // <

    int marks = 70;
    if (marks >= 50)
        std::cout << "You passed!\n"; // >=

    int attempts = 3;
    if (attempts <= 3)
        std::cout << "You still have chances\n"; // <=

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
