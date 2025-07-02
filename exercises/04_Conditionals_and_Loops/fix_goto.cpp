// This program is intended to print numbers from 1 to 10, skipping the multiples of 3.
// Expected Output: 1 2 4 5 7 8 10

// BUG: The current program prints incorrect output.
// TODO: Fix the logic so that the print statement is skipped for multiples of 3,
// while ensuring the loop continues correctly without entering an infinite loop.

#include <iostream>

int main() {
    int i = 1;
start:
    if (i > 10) return 0;

    if (i % 3 == 0)
        goto skip; // Incorrect placement causes skipped increment

    std::cout << i << " ";

skip:
    std::cout << ""; // Misleading placeholder
    goto start;
    i++; // This is never executed due to goto
}

