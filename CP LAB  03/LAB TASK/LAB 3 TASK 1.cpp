// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B



#include <iostream>
using namespace std;
int main()
    {
    	int num1;  //DECLARTION OF VARIABLE
    	int num2;
    	cout<<"Enter First Number :\n"; //DISPALY OR PRINT
    	cin>>num1; // INPUT FROM USER
    	
    	cout<<"Enter Second Number :\n";  //OUTPUT
    	cin>>num2;

if (num1< num2){  //IF USED FOR COMPARISON BTW TWO NUMBERS
	cout<<num1<<"  is smaller than  "<<num2<<endl;
}

else if (num1>num2){   //ELSE IF USED FOR OTHER THAN IF CONDITION
	cout<<num1<<"  is greater than  "<<num2<<endl;
}
else {  // USED IF THE FORST CONDITION DEOS NOT SATISFY
	cout<<num1<<"  is equal to  "<<num2;
}

return 0;
}
