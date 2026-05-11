#include <iostream>  // Includes the library needed for input and output
using namespace std; // Allows the use of standard elements like cout without the std:: prefix

int main()           // Defines the main function where the program starts running
{
    int k = 5;       // Creates an integer variable 'k' and starts it at 5

    while (k > 0)    // Checks if 'k' is greater than 0; if true, the loop continues
    {
        cout << k << endl; // Prints the current value of 'k' followed by a line break
        k--;         // Decreases the value of 'k' by 1 (decrement)
    }

    return 0;        // Signals that the program has finished successfully
}
