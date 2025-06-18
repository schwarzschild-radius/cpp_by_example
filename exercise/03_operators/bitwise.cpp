// ===============================
// EXERCISE FILE: bitwise_operators_exercise.cpp
// ===============================

#include <iostream>
using namespace std;

int main() {
    // 1. Bitwise AND
    int permissions = 6;    // binary: 110
    int READ = 4;           // binary: 100
    // TODO: Use bitwise AND to check if READ permission exists
    

    // 2. Bitwise OR
    int settings = 0;       // binary: 000
    int DARK_MODE = 1;      // binary: 001
    // TODO: Use bitwise OR to enable DARK_MODE and print settings

    // 3. Bitwise XOR
    int status = 1;         // binary: 001
    // TODO: Toggle the lowest bit using XOR and print result

    // 4. Bitwise NOT
    int x = 0;
    // TODO: Use bitwise NOT to flip all bits of x and print

    // 5. Left Shift
    int val1 = 3;
    // TODO: Left shift val1 by 1 and print result

    // 6. Right Shift
    int val2 = 8;
    // TODO: Right shift val2 by 1 and print result

    return 0;
}

/*
Expected Final Output:
Read access granted
Settings now: 1
Status is now: 0
~x = -1
6
4
*/
