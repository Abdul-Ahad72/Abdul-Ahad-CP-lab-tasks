

#include <iostream>
using namespace std;
int main()
    {

/* 
  student grade calculator
  mid sessional or final ka marks ko add kar ka grade bataaya ga
*/




    // Variable Declaration
    float sessional, mid, final;
    double seper, midper, finalper, totalsum;

    //  Input Section 
    cout << "Total sessional marks are : 20\nEnter your sessional marks : ";
   
    
    cin >> sessional;
    while (sessional>20){
	

		cout<<"enter correct numbers : ";
		
		cin>>sessional;}
    
    cout << "--------------------------------------------------------------";
    
    cout << "\nTotal mid term marks are : 80\nEnter your mid term marks : ";
    cin >> mid;
    
    while (mid>80){
	

		cout<<"enter correct numbers : ";
		
		cin>>mid;}
    
    cout << "--------------------------------------------------------------";
    
    cout << "\nTotal final term marks are : 100\nEnter your final term marks : ";
    cin >> final;
    
   while (final>100
   ){
		cout<<"enter correct numbers : ";	
		cin>>final;}
		
    
    cout << "--------------------------------------------------------------";

    //  formulas
    // Formula: (Obtained / Total) * Weightage
    
    seper = sessional / 20 * 20;     // Sessional weightage: 20%
    midper = mid / 80 * 30;          // Midterm weightage: 30%
    finalper = final / 100 * 50;     // Final weightage: 50%
    
    totalsum = seper + midper + finalper; // sab ko add kara ga 

    //  Output Section 
    cout << "\nYour sessional marks are : " << seper << "%";
    cout << "\nYour mid term marks are  : " << midper << "%";
    cout << "\nYour final term marks are: " << finalper << "%";
    cout << "\n--------------------------------------------------------------";
    cout << "\nYour total percentage is : " << totalsum << "%";
    cout << "\n--------------------------------------------------------------";

    
    if(totalsum >= 85) {					//funtion ha grading ka liya 
        cout << "\nYour grade is : A\n";
    }
    else if(totalsum >= 80) {
        cout << "\nYour grade is : A-\n";
    }
    else if(totalsum >= 75) {
        cout << "\nYour grade is : B+\n";
    }
    else if(totalsum >= 70) {
        cout << "\nYour grade is : B\n";
    }
    else if(totalsum >= 65) {
        cout << "\nYour grade is : B-\n";
    }
    else if(totalsum >= 61) {
        cout << "\nYour grade is : C+\n";
    }
    else if(totalsum >= 58) {
        cout << "\nYour grade is : C\n";
    }
    else if(totalsum >= 55) {
        cout << "\nYour grade is : C-\n";
    }
    else if(totalsum >= 50) {
        cout << "\nYour grade is : D\n";
    }
    else {
        // agr percentage 50 sa kam ho to ya output pa show ho ga
        cout << "\nYou have to repeat this subject";
    }

    cout << "\n---------------THE -- END-------------------------";


return 0;
}
