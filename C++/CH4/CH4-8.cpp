#include <iostream>
using namespace std;

int main()
{
    int hw, ping, zhong, mo, shang;
    cout << "C++平時作業:";
    cin >> hw;
    cout << "C++平時考:";
    cin >> ping;
    cout << "C++期中考:";
    cin >> zhong;
    cout << "C++期末考:";
    cin >> mo;
    cout << "C++上機測試:";
    cin >> shang;
    cout << (hw + ping + shang) * 0.2 + zhong * 0.25 + mo * 0.15 << endl;

    return 0;
}