#include <iostream>
#include <sstream>
#include <string>
#include <vector>
template <typename T>
int smaller(int a, int b);
using namespace std;

vector<string> split_string(const string &str, const string &delimiter)
{
    vector<string> substrings;
    size_t start = 0;
    size_t end = str.find(delimiter);
    while (end != string::npos)
    {
        substrings.push_back(str.substr(start, end - start));
        start = end + delimiter.length();
        end = str.find(delimiter, start);
    }
    substrings.push_back(str.substr(start));
    return substrings;
}

int smaller(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    string str1 = "Honda CR-V";
    string str2 = "Toyota RAV4";
    string st = smaller(str1, str2);
    cout << "smaller of (" << str1 << ", " << str2 << ") is "
         << st << endl;
}
