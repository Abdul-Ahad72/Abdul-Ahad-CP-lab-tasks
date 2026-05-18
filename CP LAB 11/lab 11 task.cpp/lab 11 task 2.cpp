#include <iostream>      // tells the compiler to iclude input output stream library
#include<string>         // tells the compiler to include cstring library
using namespace std;     // tells the compiler to use standard namespace std

int main() {                       // main functions starting point
	
	string firstname="Abdul";        // string variable declaration and initialization by string value
	string lastname="Ahad";         // 2nd string variable declaration and initialization by string value
	
	string name=firstname+lastname;    // adds first string variable value and second string variable value
	cout<<"full name is = "<<name<<endl;  // prints the value of name to display
	
	return 0;             // tells the computer that program has ended successfully
	

}
