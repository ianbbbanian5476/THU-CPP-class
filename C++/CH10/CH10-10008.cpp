#include <iostream>
#include <map>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
    map<char, int> dict;
    int round;
    cin >> round;
    cin.ignore();

    for (int i = 0; i < round; i++)
    {
        string txt;
        getline(cin, txt);
        for (char letter : txt)
        {
            if (isalpha(letter))
            {
                letter = toupper(letter);
                dict[letter]++;
            }
        }
    }
    vector<pair<char, int>> result;
    for (auto p : dict)
    {
        result.push_back(p);
    }
    sort(result.begin(), result.end(), [](auto &left, auto &right)
         {
        if (left.second != right.second) {
            return left.second > right.second;
        } else {
            return left.first < right.first;
        } });

    for (auto p : result)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}