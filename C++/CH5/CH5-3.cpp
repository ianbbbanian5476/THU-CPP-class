#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "2的倍數" << endl;
    }
    if (num % 3 == 0)
    {
        cout << "3的倍數" << endl;
    }
    if (num % 5 == 0)
    {
        cout << "5的倍數" << endl;
    }
}