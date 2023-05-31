#include <iostream>
using namespace std;

int main()
{
    int round;
    cin >> round;
    for (int testcase = 0; testcase < round; testcase++)
    {
        int m, d, cd = 0;
        cin >> m >> d;
        for (int lm = 1; lm < m; lm++)
        {
            switch (lm)
            {
            case 4:
            case 6:
            case 9:
            case 11:
                cd += 30;
                break;

            case 2:
                cd += 28;
                break;

            default:
                cd += 31;
                break;
            }
        }
        cd += d;
        switch (cd % 7)
        {
        case 1:
            cout << "Saturday" << endl;
            break;
        case 2:
            cout << "Sunday" << endl;
            break;
        case 3:
            cout << "Monday" << endl;
            break;
        case 4:
            cout << "Tuesday" << endl;
            break;
        case 5:
            cout << "Wednesday" << endl;
            break;
        case 6:
            cout << "Thursday" << endl;
            break;
        default:
            cout << "Friday" << endl;
            break;
        }
    }
}