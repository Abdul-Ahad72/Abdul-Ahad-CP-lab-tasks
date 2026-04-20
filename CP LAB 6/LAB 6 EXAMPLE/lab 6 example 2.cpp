//NAME = Abdul Ahad
// ID = 0692
#include <iostream>    //tells the compiler to include input output stream library
using namespace std;   // tells to use standard namespace std:: for each

int main() {    // main function beginns from here
	int num;    // variable declaration
	cout<<"enter a number please = ";   // prompt for user to enter a number
	cin>>num;        // takes input from user and stores it in avriable num
	
	int flag=0;      // variable flag declaration and initializing value of zero;
	for(int i=2;i<num;i++)  // for loop initialized with 2 
	{
		if(num%i==0)        // cheak if num is divisible by i reminder is zero
		{flag=1; break;}         // if it divides perfectly it stops the loop by break
	        
	}
	if(flag==1){        //     after the loop the program checks if value is changed to 1
		cout<<num<<" is not a prime number \n";  // if switch is 1 this message is displayed
	}
else{cout<<num<<" is prime number \n";}   // if switch is 0 this message is printed
return 0;    // tells the compiler that program has ended successfully
}
