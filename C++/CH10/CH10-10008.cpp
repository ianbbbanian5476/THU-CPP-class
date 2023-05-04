#include <iostream>
#include <map>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    map<char, int> dict;
    int round;
    cin >> round;
    for (int i = 0; i < round; i++)
    {
        string txt;
        cin >> txt;
        for (char letter : txt)
        {
            if (isalpha(letter))
            {
                letter = toupper(letter);
                dict[letter]++;
            }
        }
    }
    for (const auto &p : dict)
    {
        cout << p.first << " " << p.second << endl;
    }
}