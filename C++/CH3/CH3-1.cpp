// CH3-1.cpp
#include <iostream>
#include <iomanip> //for setprecision and setw
using namespace std;

int main()
{
    double a2 = 12.345, b2 = 1234.567, c2 = 1.23;
    cout << "\nUsing fixed and precision" << endl;
    cout << "123456789012345678901234567890" << endl;
    cout << fixed << setprecision(2);
    cout << setw(9) << a2 << setw(9) << b2 << setw(9) << c2 << endl;
    cout << setw(9) << b2 << setw(9) << c2 << setw(9) << a2 << endl;
    cout << setw(9) << c2 << setw(9) << a2 << setw(9) << b2 << endl;
    cout << "\nUsing fixed, left and precision" << endl;
    cout << "123456789012345678901234567890" << endl;
    cout << left;
    cout << setw(9) << a2 << setw(9) << b2 << setw(9) << c2 << endl;
    cout << setw(9) << b2 << setw(9) << c2 << setw(9) << a2 << endl;
    cout << setw(9) << c2 << setw(9) << a2 << setw(9) << b2 << endl;

    return 0;
}