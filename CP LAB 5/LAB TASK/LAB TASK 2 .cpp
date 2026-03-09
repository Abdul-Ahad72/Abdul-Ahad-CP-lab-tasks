#include <iostream>
using namespace std;
int main()
{
	int e; // int e decleare kiys ha user sa value lana ka liya
	cout<<"enter positive integer : ";
	cin>>e;
	
	int sum= 0; // sum karna ka liya 
int q= 0;
while(q<=e) //while loop ha  /*jab tak q ki value e ka equal nhi ho giya loop chalta raha ga       */

{
sum += q;
q++;	
}
cout<<"sum from 1 to :"	<< e <<" is "<<sum; // output show kara ga
}