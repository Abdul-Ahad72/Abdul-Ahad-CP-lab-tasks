#include <iostream>     // tells the compiler to iclude input output stream library
#include <cstring>      // tells the compiler to include cstring library
using namespace std;    // tells the compiler to use standard namespace std
 
int main() {                                 // main functions starting point
    char message[100] = "my name is Naeem";   // character array with characters inside it
    
    cout << "Message: " << message << endl;    // prints all characters inside the array  
    cout << "Length = " << strlen(message) << endl;   // prints the number of characters in the array

    return 0;              // tells the computer that program has ended successfully
}
