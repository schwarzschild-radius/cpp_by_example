// =====================
// Advanced Assignment Operators - Solution
// =====================
#include <iostream>
using namespace std;

int main() {
    // Task 1: Use chained assignment to assign the same value to three variables a, b, and c.
    int a, b, c;
    a = b = c = 10;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // Task 2: Use compound assignment operators to reduce redundancy in updating a variable.
    int score = 20;
    int bonus = 5;
    score += bonus;
    score += bonus;
    cout << "score = " << score << endl;

    // Task 3: Use *= to compute power (e.g., square a number) with compact syntax.
    int num = 4;
    num *= num;
    cout << "num = " << num << endl;

    // Task 4: Swap values of x and y without using a temp variable and using only assignment operators.
    int x = 3, y = 7;
    x += y; // x = 10
    y = x - y; // y = 3
    x -= y; // x = 7
    cout << "x = " << x << ", y = " << y << endl;

    // Task 5: Given an equation result = (val + 10) * 2, convert to use only compound assignments
    int val = 5;
    int result = val;
    result += 10;
    result *= 2;
    cout << "result = " << result << endl;

    return 0;
}
