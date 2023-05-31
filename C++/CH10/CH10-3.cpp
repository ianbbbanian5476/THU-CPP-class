#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is8DigitUp(string str)
{
    return str.length() >= 8;
}

bool isLetterDigit(string str)
{
    for (char letter : str)
    {
        if (!isalnum(letter))
        {
            return false;
        }
    }
    return true;
}

bool is2DigitUp(string str)
{
    int count = 0;
    for (char digit : str)
    {
        if (isdigit(digit))
        {
            count++;
        }
    }
    return count >= 2;
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
        bool result1 = is8DigitUp(str);
        bool result2 = isLetterDigit(str);
        bool result3 = is2DigitUp(str);

        if (result1 && result2 && result3)
        {
            cout << "有效密碼" << endl;
        }
        else
        {
            cout << "無效密碼" << endl;
        }
    }

    return 0;
}
