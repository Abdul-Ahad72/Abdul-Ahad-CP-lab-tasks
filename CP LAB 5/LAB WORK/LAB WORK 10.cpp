#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    while (num <= 10)
    {
        num++;

        if (num == 7)
        {
            continue;
        }

        cout << num << "\t";
    }

    return 0;
}
