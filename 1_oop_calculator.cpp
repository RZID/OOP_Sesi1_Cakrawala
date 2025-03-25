#include <iostream>

using namespace std;

// Calculator class
class Calculator
{
public:
    // Methods for basic operations
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b)
    {
        return (b != 0) ? (a / b) : 0; // Prevent division by zero
    }
};

int main()
{
    Calculator calc; // Create Calculator object
    double num1, num2;
    char operation;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    double result;

    // Perform the operation based on user input
    switch (operation)
    {
    case '+':
        result = calc.add(num1, num2);
        break;
    case '-':
        result = calc.subtract(num1, num2);
        break;
    case '*':
        result = calc.multiply(num1, num2);
        break;
    case '/':
        result = calc.divide(num1, num2);
        break;
    default:
        cout << "Invalid operation!" << endl;
        return 1; // Exit with error
    }

    // Output the result
    cout << "Result: " << result << endl;
    return 0;
}
