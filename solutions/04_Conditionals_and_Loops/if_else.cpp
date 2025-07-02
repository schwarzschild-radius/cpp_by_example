#include <iostream>
#include <string>

// Categorizes based on age using proper if-else
std::string categorize(int age) {
    std::string category;
    if (age > 18)
        category = "Adult";
    else
        category = "Minor";
    return category;
}

int main() {
    std::cout << "Age 16: " << categorize(16) << "\n"; // Minor
    std::cout << "Age 25: " << categorize(25) << "\n"; // Adult
}
