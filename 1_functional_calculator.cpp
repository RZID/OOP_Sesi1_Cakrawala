#include <iostream>

using namespace std;

// Function pointers map operations to functions
using Operation = double (*)(double, double);

// Basic math operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? (a / b) : 0; } // Prevent division by zero

// Function to perform the operation
double calculate(double a, double b, char op)
{
    // Map operators to functions
    Operation operations[] = {add, subtract, multiply, divide};
    char symbols[] = {'+', '-', '*', '/'};

    for (int i = 0; i < 4; i++)
    {
        if (op == symbols[i])
            return operations[i](a, b);
    }

    cout << "Invalid operation!" << endl;
    return 0;
}

int main()
{
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Result: " << calculate(num1, num2, operation) << endl;
    return 0;
}
