//NAME=Abdul Ahad
//ID= 0692
#include<iostream>     // tells the compiler to include input output stream library
using namespace std;    // tells the compiler to use standard namespace std:: for each cin and cout

int main(){     // main function beginns from here
	
int source[5]={10,20,30,40,50};   // array declaration in one dimension and initialization
int destination[5];         // destination with size 5


for(int i=0;i<5;i++){         // for loop with initialization of 0  and runs to 4
destination[i]=source[i];}    // assigning value of source to destination

cout<<"source "<<" ";        // source message sent to display
for(int i=0;i<5;i++){        // for loop with initialization of 0  and runs to 4
cout<<source[i]<<" ";}      // value printed to dispaly
cout<<endl;                 // moves the compiler to next line

cout<<"destination"<<" ";    // destination message sent to display
for(int i=0;i<5;i++){        // for loop with initialization of 0  and runs to 4
cout<<destination[i]<<" ";}  // output value sent to display

return 0;               // tells the compiler that program has ended successfully

}
