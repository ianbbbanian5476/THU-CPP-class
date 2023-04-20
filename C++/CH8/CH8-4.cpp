#include <iostream>
using namespace std;

int main()
{
    int num1[2][3], num2[3][2], product[2][2];

    cout << "輸入第一個 2x3 的矩陣：" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "輸入first[" << i << "][" << j << "]: ";
            cin >> num1[i][j];
        }
    }

    cout << "輸入第二個 3x2 的矩陣：" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "輸入second[" << i << "][" << j << "]: ";
            cin >> num2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++)
                product[i][j] += num1[i][k] * num2[k][j];
        }
    }

    cout << "product[2][2]" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
