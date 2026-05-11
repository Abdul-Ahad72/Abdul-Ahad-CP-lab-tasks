#include <iostream>   // tells the compiler to include input output stream library
using namespace std;    // use standard namespace without having the need to type std:: for  every cin and cout

int main() {        // main function starting point
    char op;          // Variable to store operator (+, -, *, /)
    double num1, num2; // Variables to store two numbers

       // Input first number
    cout << "Enter first number: ";
    cin >> num1;

   // Input operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Input second number
    cout << "Enter second number: ";
    cin >> num2;

    // Switch statement to perform operation based on operator
    switch(op) {
        case '+':   // Addition
            cout << "Result: " << num1 + num2 << endl;
            break;

        case '-':   // Subtraction
            cout << "Result: " << num1 - num2 << endl;
            break;

        case '*':   // Multiplication
            cout << "Result: " << num1 * num2 << endl;
            break;

        case '/':   // Division
            if(num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;

        default:    // Invalid operator
            cout << "Error: Invalid operator!" << endl;
            break;
    }

    return 0;  //tells the computer that program has ended successfully
}