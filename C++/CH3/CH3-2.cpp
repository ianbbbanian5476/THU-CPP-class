// CH3-2.cpp
#include <iostream>
#include <iomanip> //for setprecision and setw
using namespace std;

int main()
{
    int a = 1234, b = 12, c = 1234567;
    cout << "\nUsing width" << endl;
    cout << "123456789012345678901234567890" << endl;
    cout << setw(10) << a << setw(10) << b << setw(10) << c << endl;
    cout << setw(10) << b << setw(10) << c << setw(10) << a << endl;
    cout << setw(10) << c << setw(10) << a << setw(10) << b << endl;
    cout << "\nUsing left and width" << endl;
    cout << "123456789012345678901234567890" << endl;
    cout << left;
    cout << setw(10) << a << setw(10) << b << setw(10) << c << endl;
    cout << setw(10) << b << setw(10) << c << setw(10) << a << endl;
    cout << setw(10) << c << setw(10) << a << setw(10) << b << endl;

    return 0;
}