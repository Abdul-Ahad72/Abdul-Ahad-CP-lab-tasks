


#include <iostream>           // tells the compiler to include input output stream library                   
using namespace std;    // allows us to use standard namespace without having to write std:: for each cin and cout

int main() {                    // start of main function 

          double a,b,c,d,e,ave;   //declaration of variable and data type
          
          cout<<"enter marks for 5 subjects ";   // prompt for user enter 5 subjects
          cin>>a>>b>>c>>d>>e;                  //input data from user 5 inputs
          	
          	ave=(a+b+c+d+e)/5;                   //average formula equation
          	
          	cout<<"average marks ="<<ave<<endl;    // output value of average
          	
          	return 0;                    // tells the computer that program has ended successfully
          	

}
