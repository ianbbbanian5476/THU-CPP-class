// opeDebug4-3.cpp
#include <iostream>
using namespace std;

int main()
{
    int total = 20, num = 10;
    total += ++num;
    // 輸出結果應為 total = 31
    cout << "total = " << total << endl;

    return 0;
}
