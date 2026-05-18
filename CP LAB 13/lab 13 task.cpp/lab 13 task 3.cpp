// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B

#include <iostream>       // tells the compiler to iclude input output stream library
#include <string>         // tells the compiler to include string library
using namespace std;      // tells the compiler to use standard namespace std:: for each cin and cout

struct Book {          // defines a structure named book to group related data
    string title;      // string variable declaration by name title
    string author;      // string variable declaration by name author
    float price;       // declaration of variable of data type float
    int pages;         // integral variable declaration 
};

int main() {                                             // main functions starting point

    Book book1 = {"C++ Basics", "AbdulAhad", 450.50, 300};     // create an instance of variable book 1 and initializes it
    Book book2 = {"Data Structures", "Shahab", 600.00, 500};     // create an instance of variable book 2 and initializes it

    cout << "Book 1 Title: " << book1.title << endl;      // prints the value of tiltle1 todisplay
    cout << "Book 1 Author: " << book1.author << endl;    // prints the value of author1 todisplay
    cout << "Book 1 Price: " << book1.price << endl;     // prints the value of price1 todisplay
    cout << "Book 1 Pages: " << book1.pages << endl;     // prints the value of pages1 todisplay

    cout << "Book 2 Title: " << book2.title << endl;     // prints the value of tiltle2 todisplay
    cout << "Book 2 Author: " << book2.author << endl;   // prints the value of author2 todisplay
    cout << "Book 2 Price: " << book2.price << endl;    // prints the value of price2 todisplay
    cout << "Book 2 Pages: " << book2.pages << endl;    // prints the value of pages2 todisplay

    return 0;                              // tells the computer that program has ended
}
