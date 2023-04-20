#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL)); // 設定亂數種子為目前的時間

    int lotto[6] = {0}; // 6個大樂透號碼，初始化為0
    int index = 0;      // 目前已經產生的號碼數量

    // 產生不重複的號碼，重複則重新產生
    while (index < 6)
    {
        int num = rand() % 49 + 1; // 產生1~49的亂數
        bool duplicate = false;    // 是否重複標記，初始值為false

        // 檢查產生的號碼是否已經在lotto中出現過
        for (int i = 0; i < index; i++)
        {
            if (num == lotto[i])
            {
                duplicate = true;
                break;
            }
        }

        // 如果沒有重複，則將號碼存入lotto中
        if (!duplicate)
        {
            lotto[index] = num;
            index++;
        }
    }

    // 顯示產生的6個大樂透號碼
    cout << "大樂透號碼為：";
    for (int i = 0; i < 6; i++)
    {
        cout << lotto[i] << " ";
    }
    cout << endl;

    return 0;
}
