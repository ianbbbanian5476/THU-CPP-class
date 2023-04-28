#include <iostream>
using namespace std;

void add(int sum[3][3], int num1[3][3], int num2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = num1[i][j] + num2[i][j];
        }
    }
}

int main()
{
    int num1[3][3], num2[3][3], sum[3][3];

    cout << "輸入第一個 3x3 的矩陣：" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "輸入first[" << i << "][" << j << "]: ";
            cin >> num1[i][j];
        }
    }

    cout << "輸入第二個 3x3 的矩陣：" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "輸入second[" << i << "][" << j << "]: ";
            cin >> num2[i][j];
        }
    }

    add(sum, num1, num2);

    cout << "sum[3][3]" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
