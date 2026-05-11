//NAME = Abdul Ahad
// ID = 0692
#include <iostream>  //tells the compiler to include input output stream library
using namespace std;  // tells to use standard namespace std:: for each

int main() {   // main function starts from here or starting point
	
	for(int a=7; a>0; a--){   // outer loop which controlls the no.rows with initialised value of 7
		
		for(int i=1; i<=a; i++){  // inner loop responsible for no. columns  initialized value 1
			
			cout<<i<<" ";  // prints the value of i each time when the loop runs
			}cout<<endl;   // moves  the compiler to next line when loop completes
	}
return 0;   // tells the compiler that program has ended seccessfully
}
