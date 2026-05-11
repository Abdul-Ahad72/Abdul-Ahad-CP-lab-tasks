//NAME = Abdul Ahad
// ID = 0692
// printing a triangle
#include <iostream>     // tells the compiler to include input output stream library
using namespace std;    // tells the compier to use standard namespace std:: for each cin and cout

int main() {            // main function beginns from here with opning braces
	int a;       // variable declaration 
	cout<<"enter a number to form a triangle = ";     // output prompt for user to enter  a number
	cin>>a;                                         // takes input from user and stores it in variable a
	   
	for(int i=1;i<=a; i++){       // outer  loop  that runs untile i reaches the value of given a
		
		for(int j=1; j<=i; j++){   // inner loop that is responsible for controlling columns the number of columns
		                            // initially is 1 increases every time loop runs
				cout<<"*";   // displays star instead of numbers
		}cout<<endl;         // moves the compiler to next line
	}
	
	return 0; // tells the compiler that program has ended successfully

}
