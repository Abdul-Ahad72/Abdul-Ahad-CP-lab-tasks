// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B
#include <iostream>  // tells the compiler to include input output stream library
using namespace std; // tells the compiler to use standard namespace std for each cin and cout

float  multiply(int num1, int num2){  // function declaration with multiply name and parameters num1 and num2

	  return num1*num2;	   // multiply num1 with num2 and returns its value
}

int main() {   // main function beginns from here
	int num1 ,num2;   // variables declaration num1 and num 2
	cout<<"enter two numbers to get product = ";  // output prompt for user
	cin>>num1>>num2;  // takes values from user and stores it in num1 and num2 
	
int	product =multiply(num1,num2);  // function call used to get product
	cout<<"product of num1 and num2 is = "<<product; // output message to display with value of product
	
	return 0;  // tells the computer that program has ended successfully
	

}
