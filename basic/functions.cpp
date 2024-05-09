#include <iostream>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 5;

    // Call factorial function
    int result = factorial(num);

    // Output result
    std::cout << "Factorial of " << num << " is " << result << std::endl;

    return 0;
}
