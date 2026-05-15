// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B
#include <iostream>  // tells the compiler to include input output stream library
using namespace std; // tells the compiler to use standard namespace std for each cin and cout


int getsquare(int number){  // function declaration with getsquare name and parameter number
	
	 int squarenumber=number*number; //multiply number by number to get square
	return squarenumber; // returns value of square
	
}
int main() {   // main functions beginning or starting point
	int number;  // variaable declaration
	cout<<"enter a number to get the square of that number = "; // output prompt for user
	cin>>number;       // takes input from user and stores it in variable number
	int squarenumber=getsquare(number);  // function call to get squarenumber
	cout<<"square of the number "<<number<<" is = "<<squarenumber; // output message which shows the squared value
	
	return 0;  // tells the computer that program has ended successfully
}
	
	

