#include <iostream>
using namespace std;

int main()
{
    int num1 = 10, num2 = 20;
    // 以下若真傳回 1, 若假則傳回 0
    cout << "num1 小於或等於 num2: " << (num1 < num2) << endl;
    cout << "num1 大於或等於 num2: " << (num1 > num2) << endl;
    cout << "num1 等於 num2: " << (num1 == num2) << endl;
    cout << "num1 不等於 num2: " << (num1 != num2) << endl;

    return 0;
}
