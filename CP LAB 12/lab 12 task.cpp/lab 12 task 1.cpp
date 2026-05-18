#include <iostream>     // tells the compiler to include input output stream library
using namespace std;    // tells he compiler to use standard namespace std for each cin and cout

int main() {           // main functions starting point 
	
	int num=10;       // variable declaration and initialization
	int *ptr;         // pointer declaration
	
	ptr=&num;        // gives the memory adress of num to ptr
	
	cout << "Value of num: " << num << endl;                  // prints the value of num to display
    cout << "Value pointed to by ptr: " << *ptr << endl;     // prints the value to display because of pointer

   return 0;               // tells the computer that program has ended successfully

}
