// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B




#include <iostream>   
using namespace std;  // allows using cout and cin directly

int main()
{
    int number;  // variable to store number

    cout << "Enter an integer: ";  // prompt user
    cin >> number;  // read input

    if (number >= 0)  // check if positive
        cout << "You entered a positive integer: " << number << endl;
    else              // otherwise negative
        cout << "You entered a negative integer: " << number << endl;

    return 0;  
}
