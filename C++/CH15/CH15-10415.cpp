#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main()
{
    map<char, vector<int>> mp;
    mp['c'] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    mp['d'] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['e'] = {0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['f'] = {0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['g'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['a'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['b'] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    mp['C'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['D'] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['E'] = {1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['F'] = {1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['G'] = {1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['A'] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['B'] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0};

    int round;
    cin >> round;
    cin.ignore();
    for (int testcase = 0; testcase < round; testcase++)
    {
        string fin;
        getline(cin, fin);
        int finger[10] = {0};
        int current[10] = {0};
        for (int i = 0; i < fin.size(); i++)
        {
            for (int f = 0; f < 10; f++)
            {
                if (current[f] == 0 && mp[fin[i]][f] == 1)
                {
                    current[f] = 1;
                    finger[f] += 1;
                }
                else if (current[f] == 1 && mp[fin[i]][f] == 0)
                {
                    current[f] = 0;
                }
            }
        }
        for (int k = 0; k < 10; k++)
        {
            cout << finger[k] << " ";
        }
        cout << endl;
    }
}