#include <iostream>
#include <string>

int main() {
    int number = 9;
    std::string result;
    result = number % 2 == 0 ? "Even" : "Odd";
    std::cout << result << "\n";
}
