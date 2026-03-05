// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B

#include <iostream> // Preprocessor directive to include input-output stream library
using namespace std; // Using standard namespace to avoid prefixing 'std::'

int main() // Main function where program execution begins
{
    int a = 0; // Declare integer variable 'a' to store user's menu choice
    
    // Display menu options to the user
    cout << "select one option\n 1.convert kilometers to meters\n 2.convert meters to centimeters\n 3convert kilogram to gram\n 4.convert celcius to fahrenheit\n";
    cin >> a; // Take input from user and store it in variable 'a'
    
    switch (a) { // Switch statement to execute code based on the value of 'a'
    	
        case 1: { // Case for Kilometers to Meters conversion
            float kilometers = 0; // Declare float for input value
            float meters = 0; // Declare float for result value
            cout << "enter kilometers" << endl; // Prompt for input
            cin >> kilometers; // Read kilometer value
            meters = kilometers * 1000; // Formula: 1 km = 1000 m
            cout << "there are " << meters << " meters in " << kilometers << " kilometers "; // Output result
            break; // Exit the switch block
        }

        case (2): { // Case for Meters to Centimeters conversion
            float meters = 0; // Declare float for input value
            float centimeters = 0; // Declare float for result value
            cout << "enter meters" << endl; // Prompt for input
            cin >> meters; // Read meter value
            centimeters = meters * 100; // Formula: 1 m = 100 cm
            cout << "there are " << centimeters << " centimeters in " << meters << " meters "; // Output result
            break; // Exit the switch block
        }
    
        case (3): { // Case for Kilograms to Grams conversion
            float kilogram = 0; // Declare float for input value
            float grams = 0; // Declare float for result value
            cout << "enter kilograms" << endl; // Prompt for input
            cin >> kilogram; // Read kilogram value
            grams = kilogram * 1000; // Formula: 1 kg = 1000 g
            cout << "there are " << grams << " grams in " << kilogram << " kilograms "; // Output result
            break; // Exit the switch block
        }
    
        case (4): { // Case for Celsius to Fahrenheit conversion
            float celcius = 0; // Declare float for input value
            float fahrenheit = 0; // Declare float for result value
            cout << "enter celcius" << endl; // Prompt for input
            cin >> celcius; // Read celsius value
            fahrenheit = (celcius * 9 / 5) + 32; // Standard conversion formula
            cout << "there are " << fahrenheit << " fahrenheit in " << celcius << " celcius "; // Output result
            break; // Exit the switch block
        }
    } // End of switch statement

    return 0; // Signal that the program ended successfully
} // End of main function
