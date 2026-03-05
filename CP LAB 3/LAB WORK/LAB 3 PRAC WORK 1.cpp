// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B


#include <iostream>
using namespace std;

int main(){
	int age;  // DECLARATION OF VARIABLE
	cout << "Enter your age:";    // DISPALY TO USER
	cin >> age;  //INPUT K LIYE
	if(age >=18){     //CONDITION DENY K LIYE
		cout << "You are elligible to vote." <<endl; // DISPLAY
	}
	else {  // ELSE CONDITION DENY K LIYE
		cout << "You are not elligible to vote." <<endl; //DISPLAY
	}
	return 0;
}