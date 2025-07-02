#include <iostream>

// This program maps grade to performance using switch-case.
// TODO: Add break statements to prevent fall-through behavior.
// TODO: Add default case to handle unknown inputs properly.

int main() {
    int option = 2;    //should print Two

    switch (option) {
        case 1:
            std::cout << "One\n";
        case 2:
            std::cout << "Two\n";
        case 3:
            std::cout << "Three\n";
        // No default fallback — unexpected inputs return nothing!
    }
}
