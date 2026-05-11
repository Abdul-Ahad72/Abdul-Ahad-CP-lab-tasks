//NAME = Abdul Ahad
// ID = 0692
#include <iostream>  //tells the compiler to include input output stream librry
using namespace std; // tells the compiler to use standard namespace std:: for each cin and cout

int main() {     //main functions start and body of main function
	
	int a,sum=0;   // initialization  and declaration of variables
	
	cout<<"enter a positive number = ";  // output prompt for user to enter a number
	cin>>a;                    // takes input from user and stores it in variable a
	
	for(int i=1; i<=a; i++ )   //  for loop that runs from 1 to the entered value of the user
	{
		sum+=i;      // takes i and adds it with initial sum to give final sum
	}
cout<<"the sum from 1 to "<<a<<" is = "<<sum<<endl;  // displays final sum to the user

return 0;    // tells the compiler that program has ended successfully
}
