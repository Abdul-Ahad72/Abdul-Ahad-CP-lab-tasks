// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B


#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op)
    {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if (num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}