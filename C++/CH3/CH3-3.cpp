// CH3-3.cpp
#include <iostream>
#include <iomanip> //for setprecision and setw
using namespace std;

int main()
{
    int sid = 0, quiz = 0, mid = 0, fin = 0;
    cout << "請輸入學號: ";
    cin >> sid;
    cout << "C++ 平時考成績: ";
    cin >> quiz;
    cout << "C++ 期中考成績: ";
    cin >> mid;
    cout << "C++ 期末考成績: ";
    cin >> fin;
    cout << "\n學號: " << sid << endl;
    cout << "平時考: " << quiz << endl;
    cout << "期中考: " << mid << endl;
    cout << "期末考: " << fin << endl;

    return 0;
}