
// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B

#include <iostream>  // tells the compiler to iclude input output stream library
#include <string>    // tells the compiler to include string library
using namespace std;  // tells the compiler to use standard namespace std:: for each cin and cout

struct Person {       // defines a structure named person to group related data
    string name;     // string variable declaration
    int age;         // integer variable declaration
    string address;   // string variable   declaration
};

int main() {                                      // main functions starting point
    Person person1 = {"Naeem", 19, "Swat"};       // create an instance of variable person and initializes it

    cout<<"Name: " << person1.name << endl;       // prints the value of name to display
    cout<<"Age: " << person1.age << endl;          // prints the value of age to display
    cout<<"Address: " << person1.address << endl;  // prints the value of address

    return 0;                                      // tells the computer that program has ended
} 
