#include <iostream>
using namespace std;

int main()
{
    int num1 = 1, num2 = 3, num3 = 2;
    cout << "num2 大於 num1 且 num2 大於 num3: "
         << ((num1 < num2) && (num2 > num3)) << endl;
    cout << "num2 大於 num1 或 num2 大於 num3: "
         << ((num1 < num2) || (num2 > num3)) << endl;

    return 0;
}
