// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B
#include<iostream>    // tells the compiler to include input output stream library
using namespace std;    // tells the compiler to use standard namespace std:: for each cin and cout

int main(){   // main function beginns from here
	
int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};  // declartaion of 2d array and initialization

for(int i=0;i<3;i++){    // for loop with initialization of 0  and runs to 3(outer loop controls columns)
	
for(int j=0;j<3;j++){    // for loop with initialization of 0  and runs to (inner loop controls rows)
	
cout<<matrix[i][j]<<" ";  // sends element in row i and column j to display

}
cout<<endl;               // moves the compiler to next line
}

return 0;  //tells the computer that program has ended successfully
}
