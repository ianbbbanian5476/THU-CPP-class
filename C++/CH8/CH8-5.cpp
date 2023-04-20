#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int lotto[6] = {0};
    int index = 0;

    while (index < 6)
    {
        int num = rand() % 49 + 1;
        bool duplicate = false;

        for (int i = 0; i < index; i++)
        {
            if (num == lotto[i])
            {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
        {
            lotto[index] = num;
            index++;
        }
    }

    int n = sizeof(lotto) / sizeof(lotto[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (lotto[j] > lotto[j + 1])
            {
                int temp = lotto[j];
                lotto[j] = lotto[j + 1];
                lotto[j + 1] = temp;
            }
        }
    }

    cout << "大樂透：";
    for (int i = 0; i < 6; i++)
    {
        cout << lotto[i] << " ";
    }
    cout << endl;

    return 0;
}
