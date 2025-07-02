// This program should simulate a loop using goto:
// BUG: It prints "Round 1" forever (infinite loop)
// TODO: Fix the logic so it counts up to 3 rounds then exits
// HINT: Use a condition and increment before jumping back to start

#include <iostream>

int main() {
    int round = 1;

start:
    std::cout << "Round " << round << "\n";
    goto start;

    std::cout << "Done\n";
}

