#include <iostream>
#include <limits>

int main() {
    const int arraySize = 10;
    int numbers[arraySize];

    // Get user input for array elements
    std::cout << "Enter 10 integers:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cin >> numbers[i];
    }

    // Initialize largest number with minimum possible integer value
    int largestNumber = std::numeric_limits<int>::min();

    // Find the largest number using a loop
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] > largestNumber) {
            largestNumber = numbers[i];
        }
    }

    // Print the largest number
    std::cout << "The largest number is: " << largestNumber << std::endl;

    return 0;
}