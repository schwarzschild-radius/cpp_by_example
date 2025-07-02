#include <iostream>

int main() {
    int n = 1234;
    while (n > 0) {
        std::cout << n % 10 << " ";  // Correctly extracts the last digit
        n = n / 10;                  // Removes the last digit
    }
}
