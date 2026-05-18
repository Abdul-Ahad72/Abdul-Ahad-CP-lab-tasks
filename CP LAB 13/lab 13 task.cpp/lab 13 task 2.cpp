// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B

#include <iostream>    // tells the compiler to iclude input output stream library
#include <string>      // tells the compiler to include string library
using namespace std;   // tells the compiler to use standard namespace std:: for each cin and cout

struct Student {       // defines a structure named student to group related data
    string name;        // string variable declaration
    int age;            // integer variable declaration
    char grade;         // string variable   declaration
};

int main() {                                     // main functions starting point
    Student student1 = {"AbdulAhad", 19, 'A'};    // create an instance of variable student1 and initializes it

    cout << "Name: " << student1.name << endl;   // prints the value of name to display 
    cout << "Age: " << student1.age << endl;     // prints the value of age to display
    cout << "Grade: " << student1.grade << endl;  // prints the value of grade to display

    return 0;                                    // tells the computer that program has ended
}
