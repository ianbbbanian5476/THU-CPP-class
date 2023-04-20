#include <iostream>
using namespace std;

int main()
{
    int num[5] = {18, 2, 20, 34, 12};
    int n = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < n - 1; i++)
    {
        cout << "=== i:" << i << " ===" << endl;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (int z = 0; z < n; z++)
        cout << num[z] << " ";
    cout << endl;
}