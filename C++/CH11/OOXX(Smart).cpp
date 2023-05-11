// author 晏呈
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
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

void notSmartMode(char board[3][3])
{
    srand(static_cast<unsigned int>(time(0)));
    int r_x = getRandomNumber();
    int r_y = getRandomNumber();
    while (board[r_x][r_y] == 'O' || board[r_x][r_y] == 'X')
    {
        r_x = getRandomNumber();
        r_y = getRandomNumber();
    }
    board[r_x][r_y] = 'X';
    cout << "電腦下" << r_x << "," << r_y << endl;
    cout_table(board);
    cout << endl;
}

pair<int, int> mustMovement(char table[3][3])
{
    char data_a, data_b, data_c;
    for (int row = 0; row < 3; ++row)
    {
        data_a = table[row][0];
        data_b = table[row][1];
        data_c = table[row][2];
        if (data_a == 'X' && data_b == 'X' && data_c == ' ')
        {
            return make_pair(row, 2);
        }
        else if (data_b == 'X' && data_c == 'X' && data_a == ' ')
        {
            return make_pair(row, 0);
        }
        else if (data_a == 'X' && data_c == 'X' && data_b == ' ')
        {
            return make_pair(row, 1);
        }
    }

    for (int col = 0; col < 3; ++col)
    {
        data_a = table[0][col];
        data_b = table[1][col];
        data_c = table[2][col];
        if (data_a == 'X' && data_b == 'X' && data_c == ' ')
        {
            return make_pair(2, col);
        }
        else if (data_b == 'X' && data_c == 'X' && data_a == ' ')
        {
            return make_pair(0, col);
        }
        else if (data_a == 'X' && data_c == 'X' && data_b == ' ')
        {
            return make_pair(1, col);
        }
    }

    char hypo_a = table[0][0];
    char hypo_b = table[0][2];
    char hypo_c = table[2][0];
    char hypo_d = table[2][2];
    char hypo_e = table[1][1];
    if (hypo_e == 'X')
    {
        if (hypo_a == 'X' && hypo_d == ' ')
        {
            return make_pair(2, 2);
        }
        else if (hypo_b == 'X' && hypo_c == ' ')
        {
            return make_pair(2, 0);
        }
        else if (hypo_c == 'X' && hypo_b == ' ')
        {
            return make_pair(0, 2);
        }
        else if (hypo_d == 'X' && hypo_a == ' ')
        {
            return make_pair(0, 0);
        }
    }
    else if (((hypo_a == 'X' && hypo_d == 'X') || (hypo_c == 'X' && hypo_b == 'X')) && hypo_e == ' ')
    {
        return make_pair(1, 1);
    }
    return make_pair(9, 9);
}

pair<int, int> detectBestMovement(char table[3][3])
{
    int c_x, c_y;
    pair<int, int> bestMove = mustMovement(table);
    c_x = bestMove.first;
    c_y = bestMove.second;
    if (c_x != 9)
    {
        return make_pair(c_x, c_y);
    }
    char data_a, data_b, data_c;
    if (table[1][1] == ' ')
    {
        return make_pair(1, 1);
    }
    for (int row = 0; row < 3; ++row)
    {
        data_a = table[row][0];
        data_b = table[row][1];
        data_c = table[row][2];
        if (data_a == 'O' && data_b == 'O' && data_c == ' ')
        {
            return make_pair(row, 2);
        }
        else if (data_b == 'O' && data_c == 'O' && data_a == ' ')
        {
            return make_pair(row, 0);
        }
        else if (data_a == 'O' && data_c == 'O' && data_b == ' ')
        {
            return make_pair(row, 1);
        }
    }

    for (int col = 0; col < 3; ++col)
    {
        data_a = table[0][col];
        data_b = table[1][col];
        data_c = table[2][col];
        if (data_a == 'O' && data_b == 'O' && data_c == ' ')
        {
            return make_pair(2, col);
        }
        else if (data_b == 'O' && data_c == 'O' && data_a == ' ')
        {
            return make_pair(0, col);
        }
        else if (data_a == 'O' && data_c == 'O' && data_b == ' ')
        {
            return make_pair(1, col);
        }
    }

    char hypo_a = table[0][0];
    char hypo_b = table[0][2];
    char hypo_c = table[2][0];
    char hypo_d = table[2][2];
    char hypo_e = table[1][1];
    if (hypo_e == 'O')
    {
        if (hypo_a == 'O' && hypo_d == ' ')
        {
            return make_pair(2, 2);
        }
        else if (hypo_b == 'O' && hypo_c == ' ')
        {
            return make_pair(2, 0);
        }
        else if (hypo_c == 'O' && hypo_b == ' ')
        {
            return make_pair(0, 2);
        }
        else if (hypo_d == 'O' && hypo_a == ' ')
        {
            return make_pair(0, 0);
        }
    }
    else if (((hypo_a == 'O' && hypo_d == 'O') || (hypo_c == 'O' && hypo_b == 'O')) && hypo_e == ' ')
    {
        return make_pair(1, 1);
    }

    char border_a = table[0][1];
    char border_b = table[1][0];
    char border_c = table[1][2];
    char border_d = table[2][1];
    if (border_a == 'O' && border_b == 'O' && table[0][0] == ' ')
        return make_pair(0, 0);
    else if (border_b == 'O' && border_d == 'O' && table[2][0] == ' ')
        return make_pair(2, 0);
    else if (border_c == 'O' && border_d == 'O' && table[2][2] == ' ')
        return make_pair(2, 2);
    else if (border_c == 'O' && border_a == 'O' && table[0][2] == ' ')
        return make_pair(0, 2);

    srand(static_cast<unsigned int>(time(0)));
    int r_x = getRandomNumber();
    int r_y = getRandomNumber();
    while (table[r_x][r_y] == 'O' || table[r_x][r_y] == 'X')
    {
        r_x = getRandomNumber();
        r_y = getRandomNumber();
    }
    return make_pair(r_x, r_y);
}

void smartModeMovement(char board[3][3], int timesCin, int x, int y)
{
    srand(static_cast<unsigned int>(time(0)));
    int r_x, r_y;
    if (timesCin == 1)
    {
        if (x == 1 && y == 1)
        {
            r_x = (rand() % 2) * 2;
            r_y = (rand() % 2) * 2;
        }
        else
        {
            r_x = 1;
            r_y = 1;
        }
        board[r_x][r_y] = 'X';
        cout << "電腦下" << r_x << "," << r_y << endl;
        cout_table(board);
        cout << endl;
    }
    else
    {
        pair<int, int> bestMove = detectBestMovement(board);
        r_x = bestMove.first;
        r_y = bestMove.second;
        board[r_x][r_y] = 'X';
        cout << "電腦下" << r_x << "," << r_y << endl;
        cout_table(board);
        cout << endl;
    }
}

int main()
{
    // define the table
    char checkerboard[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    // setting
    bool smartMode = false;
    int timesCin = 0;

    // asking
    string asking;
    cout << "Open Smart Mode? (Y/n)";
    cin >> asking;

    if (asking == "Y" || asking == "y")
    {
        smartMode = true;
        cout << "Smart Mode On." << endl;
    }

    while (isNull(checkerboard))
    {
        string input;
        cout << "玩家位置 ------>";
        cin >> input;

        int x = input[0] - '0';
        int y = input[2] - '0';
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
            timesCin++; // count the times of cin
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
            if (smartMode)
            {
                smartModeMovement(checkerboard, timesCin, x, y);
            }
            else
            {
                notSmartMode(checkerboard);
            }
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
    return 0;
}