#include <iostream>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 7)
            break;
        std::cout << i << " ";
    }
}

