#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int sum(string x)
{
    int s = 0;
    for (char c : x)
    {
        s += c - '0';
    }
    return s;
}

int isMultiple(int s)
{
    if (!(s % 9))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    string n;
    while (cin >> n)
    {
        if (n == "0")
        {
            return 0;
        }

        int degree = 0;
        if (sum(n) % 9 == 0)
        {
            degree = 1;
        }
        int s = sum(n);
        while (isMultiple(s) != -1 && s > 9)
        {
            degree++;
            s = sum(to_string(s));
        }

        if (degree != 0)
        {
            cout << n << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        }
        else
        {
            cout << n << " is not a multiple of 9." << endl;
        }
    }
}