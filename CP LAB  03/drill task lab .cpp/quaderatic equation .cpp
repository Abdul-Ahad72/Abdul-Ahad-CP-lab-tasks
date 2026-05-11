#include <iostream>                 // this tells the compiler to include standard input output library 
#include <cmath>                   // includes the math library to use functions like sqrt()
using namespace std;  // this allows us to use standard namespace instead of writing std:: for each cin and cout 

int main() {                                     // the starting point from where programming execution begins
    double a, b, c, discriminant, root1, root2;   // declares decimal type variables to store coefficients and results

    cout << "Enter coefficient a: ";            // prints a message asking the user to enter the value of a
    cin >> a;                                 // takes the users input and stores it in variable a

    cout << "Enter coefficient b: ";         // prints a message to the user asking for the value of b
    cin >> b;                               // takes the users input and stores it in variable b

    cout << "Enter coefficient c: ";         // prits message asking the user to enter the value of c
    cin >> c;                              // takes the users input and stores it in variable c

    discriminant = b*b - 4*a*c;            //calculates the discriminant

    if(discriminant > 0) {                     // checks if the discriminant is positive
        root1 = (-b + sqrt(discriminant)) / (2*a);  // calculates the first root
        root2 = (-b - sqrt(discriminant)) / (2*a);    // calculates the 2nd root

        cout << "Roots are real and different." << endl;       //informs the user that the roots are real and unique
        cout << "Root 1 = " << root1 << endl;            // root one output
        cout << "Root 2 = " << root2 << endl;        // root 2 output
    }
    else if(discriminant == 0) {                       // checks if the discriminant is exactly zero 
        root1 = -b / (2*a);                            // root formula

        cout << "Roots are real and equal." << endl;    // informs the user that both roots are same value
        cout << "Root = " << root1 << endl;             // displays single root value
    }
    else {                                              //  this block runs if the discriminant is zero
        cout << "Roots are imaginary (no real roots)." << endl; // tells the user the solution involves complex numbers
    }

    return 0;         // ends the program and signals successful completion to the computer
}
