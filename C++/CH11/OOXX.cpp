#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isNull(char board[3][3])
{
    bool allElementsNonNull = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'O' && board[i][j] != 'X')
            {
                allElementsNonNull = true;
                break;
            }
        }
    }
    return allElementsNonNull;
}

int getRandomNumber()
{
    return rand() % 3;
}

void cout_table(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j];
            if (j != 2)
            {
                cout << " | ";
            }
        }
        cout << endl;
        if (i != 2)
        {
            cout << "----------" << endl;
        }
    }
}

int check_winner(char table[3][3])
{
    for (int row = 0; row < 3; ++row)
    {
        if (table[row][0] == table[row][1] && table[row][1] == table[row][2])
        {
            if (table[row][0] == 'O')
            {
                return 1;
            }
            else if (table[row][0] == 'X')
            {
                return 2;
            }
        }
    }

    for (int col = 0; col < 3; ++col)
    {
        if (table[0][col] == table[1][col] && table[1][col] == table[2][col])
        {
            if (table[0][col] == 'O')
            {
                return 1;
            }
            else if (table[0][col] == 'X')
            {
                return 2;
            }
        }
    }

    if ((table[0][0] == table[1][1] && table[1][1] == table[2][2]) ||
        (table[0][2] == table[1][1] && table[1][1] == table[2][0]))
    {
        if (table[1][1] == 'O')
        {
            return 1;
        }
        else if (table[1][1] == 'X')
        {
            return 2;
        }
    }
    return 0;
}

int main()
{
    char checkerboard[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    while (isNull(checkerboard))
    {
        int x, y;
        cout << "玩家位置 ------>";
        cin >> x;
        cin.ignore();
        cin >> y;
        if (checkerboard[x][y] == 'O' || checkerboard[x][y] == 'X')
        {
            cout << "輸入錯誤！請重新輸入！" << endl;
        }
        else if ((x > 2 || x < 0) || (y > 2 || y < 0))
        {
            cout << "輸入錯誤！請重新輸入！" << endl;
        }
        else
        {
            checkerboard[x][y] = 'O';
            cout_table(checkerboard);
            cout << endl;
            if (check_winner(checkerboard) != 0)
            {
                if (check_winner(checkerboard) == 1)
                {
                    cout << "你勝利!" << endl;
                }
                else
                {
                    cout << "電腦勝利!" << endl;
                }
                cout_table(checkerboard);
                return 0;
            }
            else if (!isNull(checkerboard))
            {
                cout << "遊戲結束，無人勝利" << endl;
                cout_table(checkerboard);
                return 0;
            }
            srand(static_cast<unsigned int>(time(0)));
            int r_x = getRandomNumber();
            int r_y = getRandomNumber();
            while (checkerboard[r_x][r_y] == 'O' || checkerboard[r_x][r_y] == 'X')
            {
                r_x = getRandomNumber();
                r_y = getRandomNumber();
            }
            checkerboard[r_x][r_y] = 'X';
            cout << "電腦下" << r_x << "," << r_y << endl;
            cout_table(checkerboard);
            if (check_winner(checkerboard) != 0)
            {
                if (check_winner(checkerboard) == 1)
                {
                    cout << "你勝利!" << endl;
                }
                else
                {
                    cout << "電腦勝利!" << endl;
                }
                cout_table(checkerboard);
                return 0;
            }
        }
    }
    cout << "遊戲結束，無人勝利" << endl;
    cout_table(checkerboard);
    return 0;
}