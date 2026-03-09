#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int num = 1; num <= 10; num++)
    {
        sum = sum + num;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
