// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B

#include <iostream>         // tells the compiler to include input output stream library
using namespace std;         // tells the compiler to use standard namespace std:: for each cin and cout

int main()                    // main function beginns from here
{
    char message[6]={'H','e','l','l','o','\0'}; // declare and initialize character array

    // loop through each character
    for(int i=0;i<5;i++)     // run loop from 0 to 4
    {
        cout<<message[i]<<endl; // print each character on new line
    }

    return 0;               // tells the compiler that program has ended successfully
}
