// This function categorizes a person as either "Adult" or "Minor" based on their age.

// TODO: Fix the logic inside the categorize() function.
// Currently, it runs both if blocks — even when the first one is true!
// Use `if-else` to fix this issue so only one category is assigned.

#include <iostream>
#include <string>

std::string categorize(int age) {
    std::string category;
    if (age > 18)
        category = "Adult";
    if (age <= 18)
        category = "Minor";
    return category;
}

int main() {
    std::cout << "Age 16: " << categorize(16) << "\n"; // Expect: Minor
    std::cout << "Age 25: " << categorize(25) << "\n"; // Expect: Adult
}

