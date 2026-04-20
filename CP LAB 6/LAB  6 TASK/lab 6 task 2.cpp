//NAME = Abdul Ahad
// ID = 0692
#include <iostream>    //tells the compiler to include input output stream librry
using namespace std;   // tells the compiler to use standard namespace std:: for each cin and cout 
                         // without having need to write separately

int main() {          //main functions start and body of main function
	
	for(int a=1; a<=10; a++){   // outer loop which controlls the number of rows (10 rows)
		
		for(int i=1; i<=10; i++){  // inner loop which controlls the number of colums (10)
			
			cout<<a<<"x"<<i<<"="<<a*i<<" "; // output sent to dispaly with multiplication of i and 1
		}cout<<"\n";   // moves th code to next line
	}
	
	return 0;  // tells the compiler that program has ended successfully
	

}     
