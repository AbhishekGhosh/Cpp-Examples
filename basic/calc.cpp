#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2;

    // Display menu and prompt for operator choice
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Prompt for two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform operation based on operator choice
    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero!";
            break;
        default:
            // Display error for invalid operator
            cout << "Error! Invalid operator.";
            break;
    }

    return 0;
}
