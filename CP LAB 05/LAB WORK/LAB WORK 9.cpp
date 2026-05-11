#include <iostream>  // Includes the library for input and output operations
using namespace std; // Uses the standard namespace to simplify code syntax

int main()           // The main function where program execution starts
{
    // A for loop that starts num at 1 and runs until num is 10
    for (int num = 1; num <= 10; num++)
    {
        if (num == 5) // Checks if the current value of num is equal to 5
            continue; // Skips the rest of the loop for this iteration and goes to the next number

        cout << num << "\t"; // Prints the current number followed by a tab space
    }

    return 0;        // Signals that the program has finished successfully
}
