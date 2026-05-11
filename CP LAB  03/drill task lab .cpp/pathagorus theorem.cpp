#include <iostream>                // this tells the compiler to include standard input output library 
#include <cmath>                   // required to use mathematical functions like sqrt()
using namespace std;   // this allows us to use standard namespace instead of writing std:: for each cin and cout 

int main() {                                    // beginning of main function 
    double base, perpendicular, hypotenuse;      // declares three variables toallow for decimal values

    cout << "Enter base: ";                    // prompts the user to type in the lenghth of the base 
    cin >> base;                               //reads the users input and stores it in the variable base

    cout << "Enter perpendicular: ";           // prompts the user for the vertical side of the triangle
    cin >> perpendicular;                    // reads the input and stores it in the variable

    hypotenuse = sqrt(base * base + perpendicular * perpendicular);  //  uses sqrt to find the square root

    cout << "Hypotenuse = " << hypotenuse;            //  prints the final calculated result to the console

    return 0;         // ends the program and signals successful completion to the computer
}
