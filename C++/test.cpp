#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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

int main()
{
    string txt = "hello world";
    string delimiter = " ";
    cout << split_string(txt, delimiter) << endl;

    return 0;
}
