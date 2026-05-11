#include <iostream> // Preprocessor directive to include input-output stream library
using namespace std; // Use the standard namespace to avoid prefixing std::

int main()
{
    int num1, num2; // Declare integer variables to store the two operands
    char op;        // Declare a character variable to store the arithmetic operator

    // Prompt user and read two numbers from standard input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Prompt user and read the operator character
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Evaluate the operator using a switch statement
    switch(op)
    {
        case '+': // Addition logic
            cout << "Result = " << num1 + num2;
            break;

        case '-': // Subtraction logic
            cout << "Result = " << num1 - num2;
            break;

        case '*': // Multiplication logic
            cout << "Result = " << num1 * num2;
            break;

        case '/': // Division logic with safety check
            if (num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error: Division by zero!"; // Prevent runtime crash
            break;

        default: // Handle any input that isn't one of the four operators
            cout << "Invalid operator!";
    }

    return 0; // Return 0 to indicate successful program execution
}
