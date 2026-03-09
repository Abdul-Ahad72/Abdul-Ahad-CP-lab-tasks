#include <iostream>
using namespace std;

int main()
{
    for (int num = 1; num <= 10; num++)
    {
        if (num == 5)
            continue;

        cout << num << "\t";
    }

    return 0;
}
