// This program is intended to print the digits of a number in reverse order.
// For example, if the input is 1234, the output should be: 4 3 2 1
// BUG: The current implementation incorrectly extracts and prints digits.
// TODO: Fix the digit extraction logic and loop condition.

#include <iostream>
int main() {
    int n = 1234;
    while (n > 0) {
        std::cout << n / 10 << " ";  // Incorrect logic: prints partial values
        n = n % 10;                  // This sets n to the last digit only
    }
}
