//NAME=Abdul Ahad
//ID= 0692
#include <iostream>    // tells the compiler to include input output stream library
using namespace std;   // tells the compiler to use standard namespace std:: for each cin and cout

int main() {    // main function beginns from here
	
   int sum=0;    // vriable declaration and initialization 
	int arr[5];  // array declaration
	
	cout<<"enter 5 numbers to get sum"<<endl; // output message sent to display
	
	for(int i=0; i<5; i++){        // for loop with initialization of 0  and runs to 4
		cout<<"enter the 5 numbers to get sum = "<<i+1<<endl;  // output prompt for user
		cin>>arr[i];    // takes input from user and stores it in variable i
		sum=sum+arr[i];  // takes value of i and adds it with value of sum
	}
cout<<"the sum is = "<<sum+1;   // outputs the sum to display
return 0; // tells the computer that program has ended successfully
}
