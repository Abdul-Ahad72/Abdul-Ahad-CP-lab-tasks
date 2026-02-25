#include <iostream>
using namespace std;

int main() {
    //DIFFERENT TYPES K VARIABLE DICLARE KRNY K LIYE
    int a = 10;
    float floatVar = 5.5f;  //DECIMAL VALUES  K LIYE
    double doubleVar = 20.99; //LONG DECIMAL VALUE K LIYE
    char charVar = 'A'; //  CHARACTER LIKHNY K LIYR
    bool boolVar = true;

    // Printing values, sizes, and memory locations
    cout << "INT VARIABLE" << endl;
    cout << "Value: " << a << endl;
    cout << "Size: " << sizeof(a) << " bytes" << endl;
    cout << "Memory Address: " << &floatVar << endl << endl;

    cout << "FLOAT VARIABLE" << endl;
    cout << "Value: " << floatVar << endl;
    cout << "Size: " << sizeof(floatVar) << " bytes" << endl;
    cout << "Memory Address: " << &floatVar << endl << endl;

    cout << "DOUBLE VARIABLE" << endl;
    cout << "Value: " << doubleVar << endl;
    cout << "Size: " << sizeof(doubleVar) << " bytes" << endl;
    cout << "Memory Address: " << &doubleVar << endl << endl;

    cout << "CHAR VARIABLE" << endl;
    cout << "Value: " << charVar << endl;
    cout << "Size: " << sizeof(charVar) << " bytes" << endl;
    cout << "Memory Address: " << (void*)&charVar << endl << endl;

    cout << "BOOL VARIABLE" << endl;
    cout << "Value: " << boolVar << endl;
    cout << "Size: " << sizeof(boolVar) << " bytes" << endl;
    cout << "Memory Address: " << &boolVar << endl;

    return 0;
}
