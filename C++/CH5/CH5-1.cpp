#include <iostream>
#include <string>
using namespace std;

int hour(string hour)
{
    if (hour[1] == ':')
    {
        return stoi(hour.substr(0, 1));
    }
    else
    {
        return stoi(hour.substr(0, 2));
    }
}

int main()
{
    int length, gsum, nsum;
    string code, time;
    cout << "請輸入打電話的時間及長度:";
    cin >> code >> time >> length;
    int hourc = hour(time);
    gsum = 0.4 * length;
    if (code == "AM")
    {
        if (hourc < 8)
        {
            nsum = 0.5 * gsum;
        }
        else
        {
            nsum = gsum;
        }
    }
    else if (code == "PM")
    {
        if (hourc >= 6)
        {
            nsum = 0.5 * gsum;
        }
        else
        {
            nsum = gsum;
        }
    };
    if (length > 60)
    {
        nsum = 0.85 * nsum;
    }
    nsum = 1.04 * nsum;
    cout << nsum << endl;
}