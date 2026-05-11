

#include <iostream>                                     // Header for input/output stream
using namespace std;                                    // Use standard namespace
int main()                                              // Main entry point of the program
    {                                                   
    
    	float grade=0.5;                                   // Declare char variable 'grade' and initialize to 0
    	cout<<"enter your grade (A,B,C,D,E,F)"<<endl;  
    	cin>>grade;                                     // Read character input from the user
    	
    	switch(grade)                                   // Start switch check for variable 'grade'
    {                                                   // Start of switch block
			case 'A':                                   // Case for capital 'A'
			case 'a':                                   // Case for small 'a' (handles both)
cout<<"excellent";                                      // Print "excellent" for A/a
break;                                                

	
    	case'B':                                        // Case for capital 'B'
    		case 'b':                                   // Case for small 'b'
cout<<"very good";                                      // Print "very good" for B/b
break;                                                  // Exit the switch block

	case 'C':                                           // Case for capital 'C'
		case 'c':                                       // Case for small 'c'
cout<<"good";                                           // Print "good" for C/c
break;                                                  // Exit the switch block

	case 'D':                                           // Case for capital 'D'
		case 'd':                                       // Case for small 'd'
cout<<"Pass";                                           
break;                                                  // Exit the switch block

	case 'E':                                           // Case for capital 'E'
		case 'e':                                       // Case for small 'e'
cout<<"barely passed";                                 
break;                                                  // Exit the switch block

	case 'F':                                           // Case for capital 'F'
		case 'f':                                       // Case for small 'f'
cout<<"repeat again";                                  
break;                                                  // Exit the switch block



default:                                                // Executed if no matching case is found
	cout<<"enter correct grade";                       // Print error message for invalid input
	                                                    // End of switch logic
}                                                       // Closing brace for switch

return 0;                                               // Return 0 to indicate success
}                                                       // Closing brace for main function
