// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B



#include <iostream>
using namespace std;
int main()
    {
    	
    int a=0;
    cout<<"select one option\n 1.convert kilometers to meters\n 2.convert meters to centimeters\n 3convert kilogram to gram\n 4.convert celcius to fahrenheit\n";
    cin>>a;
    
    switch (a){
    	
    	case 1:{
			
    	float kilometers=0;
    	float meters=0;
    	cout<<"enter kilometers"<<endl;
    	cin>>kilometers;
    	meters=kilometers*1000;
    	cout<<"there are  "<< meters<<"  meters in  "<<kilometers<<"  kilometers  ";
    	break;
}
    	case (2):{
    	float meters=0;
    	float centimeters=0;
    	cout<<"enter meters"<<endl;
    	cin>>meters;
    	centimeters=meters*100;
    	cout<<"there are  "<< centimeters<<"  centimeters in  "<<meters<<"  meters  ";
    	break;
    }
    
    case (3):{
    	float kilogram=0;
    	float grams=0;
    	cout<<"enter kilograms"<<endl;
    	cin>>kilogram;
    	grams=kilogram*1000;
    	cout<<"there are  "<< grams<<"  grams in  "<<kilogram<<"  kilograms  ";
    	break;
    }
    
    case (4):{
    	float celcius=0;
    	float fahrenheit=0;
    	cout<<"enter celcius"<<endl;
    	cin>>celcius;
    	fahrenheit=(celcius*9/5) + 32;
    	cout<<"there are  "<< fahrenheit<<"   fahrenheit in  "<<celcius<<"  celcius  ";
    	break;
    
    
    
    
	}
}

return 0;
}
