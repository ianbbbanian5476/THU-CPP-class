#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        if (i > 5)
        {
            cout << string(10 - i, '*') << endl;
        }
        else
        {
            cout << string(i, '*') << endl;
        }
    }
    return 0;
}