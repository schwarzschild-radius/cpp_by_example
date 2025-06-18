// ===============================
// EXERCISE FILE: inc_dec_operators.cpp
// ===============================

#include <iostream>
using namespace std;

int main() {
    // Example 1: Pre-Increment
    int i = 0;
    int a = /* TODO: use pre-increment on i */ ;
    cout << "a = " << a << endl;  // Expected: 1

    // Example 2: Pre-Increment with pointer
    int arr1[] = {10, 20, 30};
    int* ptr1 = arr1;
    cout << * /*TODO: pre-increment the pointer */ << endl; // Expected: 20

    // Example 3: Post-Increment with pointer
    int arr2[] = {100, 200, 300};
    int* ptr2 = arr2;
    cout << * /* TODO: post-increment the pointer */ << endl; // Expected: 100

    // Example 4: Pre-Decrement in loop
    int n = 5;
    while (/* TODO: use pre-decrement in condition */) {
        cout << n << " ";  // Expected: 4 3 2 1
    }
    cout << endl;

    // Example 5: Pre-Decrement with pointer
    int arr3[] = {5, 10, 15};
    int* ptr3 = &arr3[2];
    cout << * /* TODO: pre-decrement pointer */ << endl; // Expected: 10

    // Example 6: Post-Decrement
    int arr4[] = {10, 20, 30};
    int top = 2;
    cout << arr4[top--] << endl; // Expected: 30

    return 0;
}

/*
Expected Output:
a = 1
20
100
4 3 2 1
10
30
*/
