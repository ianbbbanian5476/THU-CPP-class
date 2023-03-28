#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 100 != 0 && year % 4 == 0)
    {
        cout << "閏年" << endl;
    }
    else if (year % 100 == 0 && year % 400 == 0)
    {
        cout << "閏年" << endl;
    }
    else
    {
        cout << "平年" << endl;
    };
}