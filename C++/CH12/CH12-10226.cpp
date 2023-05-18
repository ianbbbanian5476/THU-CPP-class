#include <iostream>
#include <iomanip>
#include <map>
#include <string>
using namespace std;

int main()
{
    int round;
    cin >> round;
    cin.ignore();
    cin.ignore();

    for (int t = 0; t < round; t++)
    {
        string tree;
        int totalTrees = 0;
        map<string, int> speciesCount;

        while (getline(cin, tree) && !tree.empty())
        {
            speciesCount[tree]++;
            totalTrees++;
        }

        for (const auto &species : speciesCount)
        {
            double percentage = (static_cast<double>(species.second) / totalTrees) * 100;
            cout << species.first << " " << fixed << setprecision(4) << percentage << endl;
        }

        if (t < round - 1)
        {
            cout << endl;
        }
    }

    return 0;
}
