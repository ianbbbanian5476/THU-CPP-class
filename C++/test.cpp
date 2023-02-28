#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double f = 456.789;
    cout << fixed << setprecision(4);
    cout << "|" << setw(3) << f << "|" << endl;
    cout << "|" << setw(8) << f << "|" << endl;
    cout << setfill('*');
    cout << "|" << setw(8) << f << "|" << endl;
    cout << left;
    cout << "|" << setw(8) << f << "|" << endl;
    cout << setfill(' ');
    cout << resetiosflags(ios::left);
    cout << "|" << setw(8) << f << "|" << endl;

    return 0;
}
