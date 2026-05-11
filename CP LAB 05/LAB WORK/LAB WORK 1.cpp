#include <iostream>  // Includes the library for input and output operations
using namespace std; // Uses the standard namespace to avoid typing std::

int main()           // The starting point where the program execution begins
{
    int k = 1;       // Declares an integer variable 'k' and initializes it to 1

    while (k <= 5)   // Starts a loop that runs as long as 'k' is less than or equal to 5
    {
        cout << "Print this line\n"; // Prints the text to the console followed by a new line
        k++;         // Increases the value of 'k' by 1 in each iteration
    }

    return 0;        // Ends the main function and returns 0 to indicate success
}
