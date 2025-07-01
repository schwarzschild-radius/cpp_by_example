#include <iostream>
#include <string>

/*
Assignment:
Fill in the missing conditional expressions for each relational operator
so the output matches the expected result.
*/

int main()
{
    std::string password = "admin";
    std::string input = "admin";
    if (/* TODO: check if input is equal to password */)
        std::cout << "Login Success\n"; // ==

    int user_input = 4, correct = 5;
    if (/* TODO: check if user_input is not equal to correct */)
        std::cout << "Try again!\n"; // !=

    int score = 105, highscore = 100;
    if (/* TODO: check if score is greater than highscore */)
        std::cout << "New High Score!\n"; // >

    int age = 16;
    if (/* TODO: check if age is less than 18 */)
        std::cout << "Not eligible to vote\n"; // <

    int marks = 70;
    if (/* TODO: check if marks is greater than or equal to 50 */)
        std::cout << "You passed!\n"; // >=

    int attempts = 3;
    if (/* TODO: check if attempts is less than or equal to 3 */)
        std::cout << "You still have chances\n"; // <=

    return 0;
}

/*
Expected Output:
Login Success
Try again!
New High Score!
Not eligible to vote
You passed!
You still have chances
*/
