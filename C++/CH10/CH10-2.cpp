#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverse(string str)
{

    string reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());

    return reverse_str;
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
        string result = reverse(str);
        cout << result << endl;
    }

    return 0;
}
