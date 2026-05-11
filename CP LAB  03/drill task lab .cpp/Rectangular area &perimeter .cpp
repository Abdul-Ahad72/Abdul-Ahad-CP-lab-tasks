#include <iostream>           // this tells the compiler to include standard input output library 
using namespace std;     // this allows us to use standard namespace instead of writing std:: for each cin and cout 

int main() {                             // start of main function from where execution begins
        float length,wedth,area,perimeter;  // declaration of variable and data type
        
        cout<<"enter lenght ";        // prompt for user
        cin>>length;                      // input from user
        cout<<"enter wedth ";           // 2nd prompt from user
        cin>>wedth;                          // input data from user
           
        area=length*wedth;                // area formula for calculation
        perimeter=2*(length+wedth);       // perimeter formula for calculation
        
        cout<<"area = "<<area<<endl;      // output data for user after execution(area)
        cout<<"perimeter = "<<area<<endl;      //output data for user after execution(perimeter)
        
        return 0;      // ends the program and signals successful completion to the computer
}
