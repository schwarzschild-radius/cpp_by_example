#include <iostream>

// TODO: Fix the inner loop condition. It currently prints nothing or repeats wrong.
// HINT: Check what controls the number of stars per row.

int main() {
    int height = 5;
    for (int i = 1; i <= height; ++i) {
        for (int j = height; j <= i; ++j) {  // BUG: j starts too high
            std::cout << "*";
        }
        std::cout << std::"\n";
    }
}

