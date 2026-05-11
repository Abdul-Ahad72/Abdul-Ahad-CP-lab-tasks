#include <iostream>  // Includes the library for input and output operations
using namespace std; // Uses the standard namespace for easier access to cout

int main()           // The entry point where the program begins
{
    int sum = 0;     // Creates a variable to store the running total, starting at 0

    // Loop starts at 1, runs while num is 10 or less, and adds 1 to num each time
    for (int num = 1; num <= 10; num++)
    {
        sum = sum + num; // Adds the current value of 'num' to the 'sum'
    }

    cout << "The sum is: " << sum << endl; // Prints the final calculated total

    return 0;        // Signals that the program ended correctly
}
