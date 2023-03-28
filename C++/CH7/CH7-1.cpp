#include <iostream>
using namespace std;

int check(int in)
{
    int check = 0;
    if (in == 2)
    {
        return true;
    }
    else
    {
        for (int i = 2; i < in; i++)
        {
            if (in % i == 0)
            {
                check = 1;
                break;
            }
            else
            {
                continue;
            }
        };
        if (check == 0)
        {
            return true;
        }
        else
        {
            return false;
        };
    };
}

int false_link(int in)
{
    for (int i = 1; i <= in; i++)
    {
        if (in % i == 0)
        {
            cout << i << " ";
        }
        else
        {
            continue;
        }
    };
    cout << endl;
}

int main()
{
    while (true)
    {
        int in;
        cin >> in;
        if (check(in))
        {
            cout << "True" << endl;
        }
        else
        {
            false_link(in);
        }
    };
    return 0;
}
