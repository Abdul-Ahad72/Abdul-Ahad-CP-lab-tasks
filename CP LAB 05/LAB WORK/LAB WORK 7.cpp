#include <iostream>  // Includes the library for input and output operations
using namespace std; // Uses the standard namespace to simplify code syntax

int main()           // The main function where program execution begins
{
    int i = 1;       // Declares an integer variable 'i' and initializes it to 1

    do               // Starts a 'do-while' loop (guaranteed to run at least once)
    {
        cout << i << endl; // Prints the current value of 'i' and moves to a new line
        i++;         // Increments the value of 'i' by 1
    }
    while (i < 0);   // Loop condition: continues only if 'i' is less than 0 (False here)

    return 0;        // Signals that the program has finished successfully
}
