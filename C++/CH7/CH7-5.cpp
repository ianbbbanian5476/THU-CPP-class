#include <iostream>
using namespace std;

int f(int x, int y)
{
    if (x < 0 || y < 0)
    {
        return x - y;
    }
    else
    {
        return f(x - 1, y) + f(x, y - 1);
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << f(x, y) << endl;
}