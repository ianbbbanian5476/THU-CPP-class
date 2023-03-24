#include <iostream>
using namespace std;

int main()
{
    int ud, dd, h;
    cout << "梯形上底：";
    cin >> ud;
    cout << "梯形下底：";
    cin >> dd;
    cout << "梯形高：";
    cin >> h;
    cout << (ud + dd) * h / 2 << endl;

    return 0;
}