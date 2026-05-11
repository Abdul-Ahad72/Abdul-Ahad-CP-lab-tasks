#include <iostream>  // Includes the library for input and output operations
using namespace std; // Uses the standard namespace for easier access to cout

int main()           // The main function where program execution starts
{
    int i = 1;       // Declares integer 'i' and sets its starting value to 1

    do               // Starts the 'do' block; this code runs BEFORE checking the condition
    {
        cout << i << endl; // Prints the current value of 'i' followed by a new line
        i++;         // Adds 1 to the value of 'i'
    }
    while (i <= 5);  // Condition: the loop repeats as long as 'i' is 5 or less

    return 0;        // Signals that the program has finished successfully
}
