// This program should calculate the sum of even numbers from 1 to 10.
// BUG: The current implementation adds all numbers from 1 to 10.
// TODO: Modify the logic to include only even numbers in the sum.

#include <iostream>
int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i; // Incorrect: includes both even and odd numbers
    }
    std::cout << sum << "\n";
}
