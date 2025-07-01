#include <iostream>

// 1. Addition (+)
void addition_examples() {
    int arr[] = {10, 20, 30, 40};
    int index = 1 + 2; // 3
    std::cout << arr[index] << "\n"; // Output: 40

    char a = 'A';
    char b = 'B';
    int c = a + b; // 65 + 66 = 131
    std::cout << c << "\n"; // Output: 131
}

// 2. Subtraction (-)
void subtraction_examples() {
    int arr[] = {10, 20, 30, 40};
    int* p1 = &arr[3];
    int* p2 = &arr[1];
    int diff = p1 - p2; // (address diff) / sizeof(int) = 2
    std::cout << diff << "\n"; // Output: 2
}

// 3. Multiplication (*)
void multiplication_examples() {
    int a = 100000;
    int b = 100000;
    int c = a * b; // May overflow
    std::cout << c << "\n"; // Output: Implementation-defined (likely overflowed)

    long long la = 100000;
    long long lb = 100000;
    long long lc = la * lb;
    std::cout << lc << "\n"; // Output: 10000000000
}

// 4. Division (/)
void division_examples() {
    int a = 5, b = 6;
    float avg = (a + b) / 2.0; // Promote to float
    std::cout << avg << "\n"; // Output: 5.5
}

// 5. Modulus (%)
void modulus_examples() {
    int num = 13;
    if (num % 2 == 0) {
        std::cout << "Even\n";
    } else {
        std::cout << "Odd\n"; // Output: Odd
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
