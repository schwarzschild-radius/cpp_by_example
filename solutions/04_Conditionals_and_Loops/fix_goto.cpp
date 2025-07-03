#include <iostream>

int main() {
    int i = 1;
start:
    if (i > 10) return 0;

    if (i % 3 == 0) {
        i++;
        goto start; // Skip printing and continue loop
    }

    std::cout << i << " ";
    i++;
    goto start;
}

