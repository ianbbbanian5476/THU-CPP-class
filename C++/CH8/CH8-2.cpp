#include <iostream>
using namespace std;

int main()
{
    char num[5] = {'A', 'B', 'C', 'D', 'E'};
    int correct = 0;
    int error = 0;

    for (int i = 0; i < 5; i++)
    {
        char ans;
        cout << "第" << i + 1 << "題：";
        cin >> ans;
        if (ans == num[i])
        {
            correct++;
        }
        else
        {
            error++;
        }
    }
    cout << "correct: " << correct << " error:" << error << endl;
}