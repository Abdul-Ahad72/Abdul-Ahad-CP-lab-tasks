#include <iostream>  // Includes the library for input and output operations
using namespace std; // Uses the standard namespace to simplify code syntax

int main()           // The main function where program execution starts
{
    int num = 0;     // Declares an integer 'num' and initializes it to 0

    while (num <= 10) // Continues the loop as long as 'num' is 10 or less
    {
        num++;       // Increments 'num' by 1 at the start of each iteration

        if (num == 7) // Checks if 'num' has reached the value of 7
        {
            continue; // Skips the 'cout' below and jumps back to the while condition
        }

        cout << num << "\t"; // Prints the value of 'num' followed by a tab space
    }

    return 0;        // Signals that the program has finished successfully
}
