#include <iostream>
using namespace std;

int multiple(int num)
{
    if (num % 7 == 0)
    {
        cout << num << "是7的倍數" << endl;
    }
    if (num % 11 == 0)
    {
        cout << num << "是11的倍數" << endl;
    }
    if (num % 13 == 0)
    {
        cout << num << "是13的倍數" << endl;
    };
    return 0;
}

int square(int num)
{
    return num * num;
}

int main()
{
    while (true)
    {
        int num;
        cin >> num;
        multiple(num);
        cout << num << "的平方根" << square(num) << endl;
    };
    return 0;
}
