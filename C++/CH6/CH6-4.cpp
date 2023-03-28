#include <iostream>
using namespace std;

int main()
{
    int odd = 0, even = 0, in;
    for (int i = 1; i <= 20; i++)
    {
        cin >> in;
        if (in % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        };
    };
    cout << "odd: " << odd << ",even: " << even << endl;
    return 0;
}
