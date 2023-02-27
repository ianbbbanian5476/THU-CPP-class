#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num = 12345;
    cout << "|" << num << "|" << endl;
    cout << "|" << setw(8) << num << "|" << endl;
    cout << "|" << left << setw(8) << num << "|" << endl;
    cout << "|" << right << setw(8) << num << "|" << endl;
    // cout << resetiosflags(ios::left);
    cout << setw(8) << num << endl;

    return 0;
}
