// TODO: Stop loop when i reaches 7 using `break`.

#include <iostream>
int main() {
    for (int i = 1; i <= 10; i++) {
        std::cout << i << " ";
        break;                       // <-- Currently breaks immediately, fix placement
    }
}
