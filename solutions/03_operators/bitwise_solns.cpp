
#include <iostream>
using namespace std;

int main() {
    // 1. Bitwise AND
    int permissions = 6;    // binary: 110
    int READ = 4;           // binary: 100
    if (permissions & READ)
        cout << "Read access granted\n";

    // 2. Bitwise OR
    int settings = 0;       // binary: 000
    int DARK_MODE = 1;      // binary: 001
    settings = settings | DARK_MODE;
    cout << "Settings now: " << settings << endl;

    // 3. Bitwise XOR
    int status = 1;         // binary: 001
    status = status ^ 1;
    cout << "Status is now: " << status << endl;

    // 4. Bitwise NOT
    int x = 0;
    cout << "~x = " << ~x << endl;

    // 5. Left Shift
    int val1 = 3;
    cout << (val1 << 1) << endl;  // 3 * 2 = 6

    // 6. Right Shift
    int val2 = 8;
    cout << (val2 >> 1) << endl;  // 8 / 2 = 4

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
