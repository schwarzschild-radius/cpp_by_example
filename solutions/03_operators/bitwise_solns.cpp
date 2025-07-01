#include <iostream>

int main() {
    // 1. Bitwise AND
    int permissions = 6;    // binary: 110
    int READ = 4;           // binary: 100
    if (permissions & READ)
        std::cout << "Read access granted\n";

    // 2. Bitwise OR
    int settings = 0;       // binary: 000
    int DARK_MODE = 1;      // binary: 001
    settings = settings | DARK_MODE;
    std::cout << "Settings now: " << settings << "\n";

    // 3. Bitwise XOR
    int status = 1;         // binary: 001
    status = status ^ 1;
    std::cout << "Status is now: " << status << "\n";

    // 4. Bitwise NOT
    int x = 0;
    std::cout << "~x = " << ~x << "\n";

    // 5. Left Shift
    int val1 = 3;
    std::cout << (val1 << 1) << "\n";  // 3 * 2 = 6

    // 6. Right Shift
    int val2 = 8;
    std::cout << (val2 >> 1) << "\n";  // 8 / 2 = 4

    return 0;
}

/*
Final Output:
Read access granted
Settings now: 1
Status is now: 0
~x = -1
6
4
*/
