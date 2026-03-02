// name : abdulahad ; etea :5124772
#include <iostream>
using namespace std;
int main()
    {
int age; //DECLARATION OF VARIABLE
char hasId; //STORING CHARACTER

cout << "Enter your age:";  //DISPLAY OR PRINT
cin >> age;   // INOUT FROM USER

cout << "Do you have an ID card? (Y/N):"; 
cin >> hasId;

if(age >=18 && hasId=='Y'){    // IF CONDITION ha agr dono true hon gi to if ki body show ho gi user ko
	cout << "You can enter" <<endl;  //DISPLAY
}
else { //nhi to else ki body show ho gi   
	cout<<"Entry not allowed";
}

return 0;
}

