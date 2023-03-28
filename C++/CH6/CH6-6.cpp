#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int in, check = 0;
        cin >> in;
        if (in == 2)
        {
            cout << "True" << endl;
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
                cout << "True" << endl;
            }
            else
            {
                cout << "False" << endl;
            };
        };
    };
    return 0;
}
