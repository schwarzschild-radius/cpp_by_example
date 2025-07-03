#include <iostream>

int main() {
    int height = 5;
    for (int i = 1; i <= height; ++i) {
    for (int j = 1; j <= i; ++j) {  // print i stars
        std::cout << "*";
    }
    std::cout << std::"\n";
}

}
