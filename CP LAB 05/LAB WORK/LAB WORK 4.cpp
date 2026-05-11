#include <iostream>  // Includes the library for input and output operations
using namespace std; // Uses the standard namespace to simplify code syntax

int main()           // The main function where program execution starts
{
    int k = 1;       // Declares integer 'k' and initializes it to 1

    while (k <= 10)  // Loop continues as long as 'k' is 10 or less
    {
        cout << k << endl; // Prints the current value of 'k' and moves to a new line
        k = k + 2;   // Increases 'k' by 2 in each step (skips to the next odd number)
    }

    return 0;        // Returns 0 to indicate the program ran successfully
}
