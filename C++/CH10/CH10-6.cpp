#include <iostream>
#include <vector>
using namespace std;

vector<int> stringToVector(string str)
{
    vector<int> vec;
    for (char c : str)
    {
        vec.push_back(c - '0');
    }
    return vec;
}

int cal(vector<int> isbn)
{
    int d = 3, sum = 0;
    for (char num : isbn)
    {
        if (d == 3)
        {
            d = 1;
        }
        else
        {
            d = 3;
        }
        sum += num * d;
    }
    return sum;
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
        vector<int> isbn = stringToVector(str);
        int sum = cal(isbn);
        cout << 10 - (sum % 10) << endl;
    }
    return 0;
}