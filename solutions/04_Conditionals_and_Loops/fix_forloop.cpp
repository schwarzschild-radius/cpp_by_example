#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            sum += i;  // Only add even numbers
        }
    }
    std::cout << sum << "\n";
}
