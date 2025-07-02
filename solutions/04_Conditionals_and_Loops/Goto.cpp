#include <iostream>

int main() {
    int round = 1;

start:
    if (round > 3) {
        std::cout << "Done\n";
        return 0;
    }

    std::cout << "Round " << round << "\n";
    round++;
    goto start;
}
