// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B




#include <iostream> // header file 
using namespace std;
int main() //function start idher sa ho ga
{
	int e; // int e decleare kiys ha user sa value lana ka liya
	cout<<"enter positive integer : ";
	cin>>e;
	
	int sum= 0; // sum karna ka liya 
int q= 1;
while(q<=e) //while loop ha  /*jab tak q ki value e ka equal nhi ho giya loop chalta raha ga       */

{
sum += q; // sum karna ka liya ha sum+= q is ka matlib ha sum =sum +q
q++;	 // q ki value incriment
}
cout<<"sum from 1 to :"	<< e <<" is "<<sum; // output show kara ga

}

