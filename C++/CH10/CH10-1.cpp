#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str)
{

    string reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());

    return str == reverse_str;
}

int main()
{
    string str;
    while (cin >> str)
    {
        if (str == "0")
        {
            return 0;
        }
        bool result = isPalindrome(str);

        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
