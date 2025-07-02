// TODO: Use `continue` to skip even numbers and only print odd numbers from 1 to 9

#include <iostream>
int main() {
    for (int i = 1; i <= 9; i++) {
        if (i % 2 == 0)
             // <-- This does nothing, but doesn't skip the print
        std::cout << i << " ";
    }
}
