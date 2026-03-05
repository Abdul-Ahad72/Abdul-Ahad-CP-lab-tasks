

#include <iostream>                                     // Header file for input and output functions
using namespace std;                                    // Using standard namespace to simplify code
int main()                                              // Start of the main execution function
    {                                                   // Opening brace of main function
    	int day=0;                                      // Declare and initialize integer variable 'day'
    	cout<<"enter a number ( 1 - 7)"<<endl;          // Print instructions to the user
    	cin>>day;                                       // Take integer input from user
    	
    	switch(day)                                     // Start switch logic based on 'day' value
    {                                                   // Opening brace of switch block
			case (1):                                   // Check if input value is 1
cout<<"monday";                                         // Display "monday" if case 1 is true
break;                                                  // Stop execution and exit the switch

	
    	case(2):                                        // Check if input value is 2
cout<<"tuesday";                                        // Display "tuesday" if case 2 is true
break;                                                  // Stop execution and exit the switch

	case(3):                                            // Check if input value is 3
cout<<"wednesday";                                      // Display "wednesday" if case 3 is true
break;                                                  // Stop execution and exit the switch

	case(4):                                            // Check if input value is 4
cout<<"thursday";                                       // Display "thursday" if case 4 is true
break;                                                  // Stop execution and exit the switch

	case(5):                                            // Check if input value is 5
cout<<"friday";                                         // Display "friday" if case 5 is true
break;                                                  // Stop execution and exit the switch

	case(6):                                            // Check if input value is 6
cout<<"saturday";                                       // Display "saturday" if case 6 is true
break;                                                  // Stop execution and exit the switch

	case(7):                                            // Check if input value is 7
cout<<"sunday";                                         // Display "sunday" if case 7 is true
break;                                                  // Stop execution and exit the switch

default:                                                // Executed if none of the cases (1-7) match
	cout<<"enter a valid number";                       // Error message for incorrect input
	                                                    // No break needed for the final default case
}                                                       // Closing brace of switch block

return 0;                                               // Return 0 to OS indicating successful run
}                                                       // Closing brace of main function
