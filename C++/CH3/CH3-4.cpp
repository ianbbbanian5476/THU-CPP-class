// CH3-4.cpp
#include <iostream>
#include <iomanip> //for setprecision and setw
using namespace std;

int main()
{
    string sub1, sub2, sub3;
    double score1, score2, score3;
    cout << "請輸入第一個科目名稱和成績: ";
    cin >> sub1 >> score1;
    cout << "請輸入第二個科目名稱和成績: ";
    cin >> sub2 >> score2;
    cout << "請輸入第三個科目和成績: ";
    cin >> sub3 >> score3;
    cout << fixed << setprecision(1);
    cout << left << setw(18) << sub1 << score1 << endl;
    cout << left << setw(18) << sub2 << score2 << endl;
    cout << left << setw(18) << sub3 << score3 << endl;

    return 0;
}