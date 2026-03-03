// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B


#include <iostream>
using namespace std;
int main()
    {
    
    	char grade=0;
    	cout<<"enter your grade (A,B,C,D,E,F)"<<endl;
    	cin>>grade;
    	
    	switch(grade)
    {
			case 'A':
			case 'a':
cout<<"excellent";
break;

	
    	case'B':
    		case 'b':
cout<<"very good";
break;

	case 'C':
		case 'c':
cout<<"good";
break;

	case 'D':
		case 'd':
cout<<"Pass";
break;

	case 'E':
		case 'e':
cout<<"barely passed";
break;

	case 'F':
		case 'f':
cout<<"repeat again";
break;



default:
	cout<<"enter correct grade";
	
}

return 0;
}

