#include <iostream>            // tells the compiler to include input output stream library 
using namespace std;  // allows us to use standard namespace without having to write std:: for each cin and cout  
 
int main() {               // start of main function
	     double radius,circumfarence;    // declaration of variable
	    const double pi=3.14159;                // putting the value of constant
	     cout<<"enter radius = ";     // prompt for user
	     cin>>radius;                         // input for radius 
	     
	     circumfarence=2*pi*radius;               // formula for calculating circumfarence
	     
	     cout<<"circumfarence = "<<circumfarence<<endl;  // output of circumfarence after calculation
	     cout<<"redius = "<<radius<<endl;                  // output of radius
	     
	     return 0;                // tells the computer that program has ended successfully

}
