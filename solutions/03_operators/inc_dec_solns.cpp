

#include <iostream>
using namespace std;

int main() {
    // Example 1: Pre-Increment
    int i = 0;
    int a = ++i;
    cout << "a = " << a << endl;  // Output: 1

    // Example 2: Pre-Increment with pointer
    int arr1[] = {10, 20, 30};
    int* ptr1 = arr1;
    cout << *++ptr1 << endl; // Output: 20

    // Example 3: Post-Increment with pointer
    int arr2[] = {100, 200, 300};
    int* ptr2 = arr2;
    cout << *ptr2++ << endl; // Output: 100

    // Example 4: Pre-Decrement in loop
    int n = 5;
    while (--n > 0) {
        cout << n << " ";  // Output: 4 3 2 1
    }
    cout << endl;

    // Example 5: Pre-Decrement with pointer
    int arr3[] = {5, 10, 15};
    int* ptr3 = &arr3[2];
    cout << *--ptr3 << endl; // Output: 10

    // Example 6: Post-Decrement
    int arr4[] = {10, 20, 30};
    int top = 2;
    cout << arr4[top--] << endl; // Output: 30

    return 0;
}

/*
Final Output:
a = 1
20
100
4 3 2 1
10
30
*/
