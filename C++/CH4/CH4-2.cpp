// opeDebug4-2.cpp
#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    num += 100;
    cout << "num 加上 100，並指定給 num 後為 " << num << endl;
    num -= 100;
    cout << "num 減去 100，並指定給 num 後為 " << num << endl;
    num *= 100;
    cout << "num 乘上 100，並指定給 num 後為 " << num << endl;
    num /= 100;
    cout << "num 除以 100，並指定給 num 後為 " << num << endl;

    return 0;
}
