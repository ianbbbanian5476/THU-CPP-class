#include <iostream>
#include <string>
using namespace std;

int binToDec(string bin)
{
    int dex = 0;
    int index = 1;
    for (int j = bin.length() - 1; j >= 0; j--)
    {
        dex += (bin[j] - '0') * index;
        index *= 2;
    }
    return dex;
}

int gdb(int dex_x, int dex_y)
{
    int c;
    if (dex_x > dex_y)
    {
        c = dex_x;
    }
    else
    {
        c = dex_y;
    }
    for (int k = c; k >= 2; k--)
    {
        if ((dex_x % k == 0) && (dex_y % k == 0))
        {
            return k;
        }
    }
    return 1;
}

int main()
{
    int round;
    cin >> round;
    for (int i = 0; i < round; i++)
    {
        string bin_x, bin_y;
        cin >> bin_x;
        cin >> bin_y;
        if (gdb(binToDec(bin_x), binToDec(bin_y)) > 1)
        {
            cout << "Pair #" << i + 1 << ": All you need is love!" << endl;
        }
        else
        {
            cout << "Pair #" << i + 1 << ": Love is not all you need!" << endl;
        }
    }
}
