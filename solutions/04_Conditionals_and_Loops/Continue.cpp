#include <iostream>

int main() {
    for (int i = 1; i <= 9; i++) {
        if (i % 2 == 0)
           continue;
        std::cout << i << " ";
    }
}

