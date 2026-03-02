// name : abdulahad ; etea :5124772
#include <iostream>
using namespace std; 


      
    // function main begins program execution
int main()
    {
    int num1;  // first number to be read from user
    int num2;  // second number to be read from user
    cout << "Enter two integers, and I will tell you\n"
            << "the relationships they satisfy: ";//dispaly on screen
    cin >> num1 >> num2;   // read two integers
    
    if ( num1 == num2 )          //if condition is apply for equal                     
        cout << num1 << " is equal to " << num2 << endl;
    
    if ( num1 != num2 ) //if condition is apply for not equal
        cout << num1 << " is not equal to " << num2 << endl;
    
    if ( num1 < num2 )  //if condition is apply for less 
        cout << num1 << " is less than " << num2 << endl;
    
    if ( num1 > num2 )  //if condition is apply  for greater
        cout << num1 << " is greater than " << num2 << endl;
    
    if ( num1 <= num2 )    //if condition is apply less than or equal
        cout << num1 << " is less than or equal to "
               << num2 << endl;
    
    if ( num1 >= num2)//if condition is apply  graeater than or eqaul
        cout << num1 << " is greater than or equal to "
               << num2 << endl;
    
    return 0;   // indicate that program ended successfully
    
    } // end function main


