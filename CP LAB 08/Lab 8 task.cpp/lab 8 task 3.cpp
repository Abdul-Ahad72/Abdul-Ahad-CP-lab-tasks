// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B
#include<iostream>        // tells the compiler to include input output stream library
using namespace std;     // tells the compiler to use standard namespace std:: for each cin and cout

int main(){       // main function beginns from here
	
int arr[4][4]={{12,7,25,9},{3,18,14,6},{22,5,11,30},{8,16,19,4}};   // 2d array declaration and initialization
int maxVal=arr[0][0];   // initialization and declaration of maxval array and initialization of 12

for(int i=0;i<4;i++)       // outer loop which controls number of rows =4
{
for(int j=0;j<4;j++){       // inner loop which controlls number of columns =4
if(arr[i][j]>maxVal) // if condition which cheaks max value
maxVal=arr[i][j];   // if condition becomes true value is printed to display
}
}
cout<<"Maximum value="<<maxVal;   // outputs maximum value to display
return 0; // tells the computer that program has ended successfully
}
