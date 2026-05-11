// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B
#include <iostream> // tells the compiler to include input output stream library
using namespace std; // tells the compiler to use standard namespace std for each cin and cout

int totalsum(int arr[],int a){ // declares function and takes parameters array and its size a
	int sum=0;           // initial value of sum
	for(int i=0; i<a;i++){ // for loop that runs a times
	sum=sum+arr[i];}     // adds arr[i] with sum every time loop runs
	return sum;    //returns value of sum
}
int main() {   //main function beginns from here
	
	int a;   // variable declaration a
	cout<<"enter 10 integers = ";  // output prompt for user
	cin>>a;  // takes input and stores it in a
	cout<<endl;  // moves to next line
	int arr[a];  // array declaration
	for(int i=0; i<a; i++){   //for lopp that runs a times
		cout<<"enter integer no "<<i+1<<"= ";  // output prompt for user
		cin>>arr[i];}   // takes input from user every time loop runs
	int sum =totalsum(arr,a);   // function call to find sum
	float average = sum/a;   // divides sum by value of a to get average
			
	cout<<"total sum is = "<<sum<<endl;  // message sent to display with value of sum
	cout<<"average is = "<<average<<endl; // output message sent to display with value of average

    return 0;       // tells the computer that program has ended successfully
}
