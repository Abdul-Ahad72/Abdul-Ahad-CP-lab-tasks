#include <iostream>  // Includes the standard library for input and output operations
using namespace std; // Uses the standard namespace so we can use cin and cout directly

int main()           // The main function where the program begins its execution
{
    int k = 1;       // Declares an integer variable 'k' and sets its initial value to 1

    while (k <= 5)   // Starts a loop that repeats as long as 'k' is less than or equal to 5
    {
        cout << k << endl; // Prints the current value of 'k' followed by a new line
        k++;         // Increments (increases) the value of 'k' by 1 for the next loop
    }

    return 0;        // Tells the operating system that the program finished successfully
}
