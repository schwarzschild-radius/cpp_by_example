
#include <iostream>


/*
Assignment:
Complete each TODO by filling in the missing code.
Do not modify the existing logic. The output should match the expected results.
*/

// 1. Addition (+)
void addition_examples() {
    // TODO: Use addition to access the 3rd index (value 40) from the array
    int arr[] = {10, 20, 30, 40};
    int index = 0; // change this
    std::cout << arr[index] << "\n"; // Expected: 40

    // TODO: Add ASCII values of 'A' and 'B' and store in an int
    char a = 'A';
    char b = 'B';
    int c = 0; // change this
    std::cout << c << "\n"; // Expected: 131
}

// 2. Subtraction (-)
void subtraction_examples() {
    // TODO: Use pointer subtraction to find distance in array
    int arr[] = {10, 20, 30, 40};
    int* p1 = nullptr; // change this
    int* p2 = nullptr; // change this
    int diff = 0; // change this
    std::cout << diff << "\n"; // Expected: 2
}

// 3. Multiplication (*)
void multiplication_examples() {
    // TODO: Multiply large numbers and observe overflow
    int a = 100000;
    int b = 100000;
    int c = 0; // change this
    std::cout << c << "\n"; // Expected (overflow): implementation-defined

    // TODO: Use long long to store the correct result
    long long la = 100000;
    long long lb = 100000;
    long long lc = 0; // change this
    std::cout << lc << "\n"; // Expected: 10000000000
}

// 4. Division (/)
void division_examples() {
    // TODO: Perform float division to find average
    int a = 5, b = 6;
    float avg = 0; // change this
    std::cout << avg << "\n"; // Expected: 5.5
}

// 5. Modulus (%)
void modulus_examples() {
    // TODO: Check even or odd using modulus
    int num = 13;
    if ( /* condition */ ) {
        std::cout << "Even" << "\n";
    } else {
        std::cout << "Odd" << "\n"; // Expected: Odd
    }
}

int main() {
    addition_examples();
    subtraction_examples();
    multiplication_examples();
    division_examples();
    modulus_examples();
    return 0;
}
