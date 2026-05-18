
// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B

#include <iostream>    // tells the compiler to include input output stream library
using namespace std;    // tells he compiler to use standard namespace std for each cin and cout

int main() {         // main functions starting point
	
	int numbers[5] = {10, 20, 30, 40, 50};    // arraydeclaration and initialization
	
    int *ptr = numbers;      // pointer declaration and assigning it vriable numbers
    cout << *ptr << endl;         // prints 1st value at 0 position
    cout << *(ptr+1) << endl;     // prints 2nd value at 1 position
    cout << *(ptr+ 2) << endl;    // prints 3rd value at 2 position


  return 0;              // tells the computer that program has ended
}
