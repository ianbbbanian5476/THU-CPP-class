#include <iostream>
using namespace std;

int main()
{
    int n, r = 1;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        r *= 2;
    }
    cout << r - 1 << endl;
    return 0;
}
