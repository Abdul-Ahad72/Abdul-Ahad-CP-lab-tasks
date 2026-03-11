#include <iostream>               // tells the compiler to include input output stream library 
using namespace std;   // allows us to use standard namespace without having to write std:: for each cin and cout 

int main() {       // starting point from where programming execution begins
	 float R1,R2,total,I1,I2; // declaration of floating point  variables 
	 
	 cout<<"Enter resistances  R1  ";  // prompt sent to display for user to enter R1
	 cin>>R1;                               // takes input data and stores it in variable R1
	 cout<<"Enter resistance R2 ";    // prompt sent to display for user to enter R2
	 cin>>R2;                                 // takes input from user and stores it in variable R2
	 cout<<"enter total current ";            //prompt sent to display for user to enter total current
	 cin>>total;                     // takes input from user and stores it in variable total
	 
	 I1=total*(R2/(R1+R2));            // current divider rule I1 is proportional to R1
	 I2=total*(R1/(R1+R2));            // current divider rule I2 is proportional to R2
	 
	 cout<<"Branche current I1 = "<<I1<<endl;   // displays the calculated current for branch 1
	 cout<<"Branch current I2 = "<<I2<<endl;    // displays the calculated current for branch 2
	 
	 return 0;                         // tells the computer that program has ended successfully
	 

}
