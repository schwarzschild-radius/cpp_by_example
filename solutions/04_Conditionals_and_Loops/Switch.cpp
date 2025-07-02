#include <iostream>

int main() {
    int option = 2;

   switch (option) {
    case 1:
        std::cout << "One\n";
        break;
    case 2:
        std::cout << "Two\n";
        break;
    case 3:
        std::cout << "Three\n";
        break;
    default:
        std::cout << "Unknown Numbers\n";
        break;
    }
}
