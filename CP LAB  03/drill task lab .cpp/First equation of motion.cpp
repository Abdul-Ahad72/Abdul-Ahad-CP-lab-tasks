#include <iostream>          // this tells the compiler to include standard input output library
using namespace std;   // this allows us to use standard namespace instead of writing std:: for each cin and cout

int main() {                    // START OF MAIN FUNCTION
	
	double v,u,a,t;             // variable declaration
	
	cout<<"enter u ";            // prompt for initial velocity
	cin>>u;                   // takes input value and stores it in variable
	cout<<"enter a ";            // prompt for acceleration
	cin>>a;                     // takes input value and stores it in variable
	cout<<"enter t ";    // prompt for time
	cin>>t;
	
	v=u+a*t;               // calculate final velocity using equation
	
	cout<<"initial velocity = "<<u<<" m/s"<<endl;   // initial velocity and unit displaying 
	cout<<"acceleration = "<<a<<"m/s^2"<<endl;      // acceleration and its unit  displayng
	cout<<"time = "<<t<<" s" <<endl;               // time and unit displaying
	cout<<"final velocity = "<<v<<" m/s"<<endl;    // final velocity  and its unit displaying
 
 
 return 0;  // this tells the computer that program has ended successfully
}
