#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
char player = 'X', opponent = 'O';
int values[3][3] = {{4, 2, 4},
                    {2, 8, 2},
                    {4, 2, 4}};

int utility(char board[3][3])
{
    int temp, ans;
    int mx_utility_for_X = -10000;
    int mx_utility_for_O = -10000;
    bool flag = false;
    // row utility for player X:
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == 'X' and board[i][1] == 'X' and board[i][2] == 'X')
        {
            flag = true;
            temp = values[i][0] * pow(2, 0) + values[i][1] * pow(2, 1) + values[i][2] * pow(2, 2);
            mx_utility_for_X = max(temp, mx_utility_for_X);
        }
        else if (board[i][0] == 'X' and board[i][1] == 'X')
        {
            flag = true;
            temp = max(values[i][0], values[i][1]) * pow(2, 1) + min(values[i][0], values[i][1]) * pow(2, 0);
            mx_utility_for_X = max(temp, mx_utility_for_X);
        }
        else if (board[i][1] == 'X' and board[i][2] == 'X')
        {
            flag = true;
            temp = max(values[i][1], values[i][2]) * pow(2, 1) + min(values[i][1], values[i][2]) * pow(2, 0);
            mx_utility_for_X = max(temp, mx_utility_for_X);
        }
    }
    // row utility for opponent O:
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == 'O' and board[i][1] == 'O' and board[i][2] == 'O')
        {
            flag = true;
            temp = values[i][0] * pow(2, 0) + values[i][1] * pow(2, 1) + values[i][2] * pow(2, 2);
            mx_utility_for_O = max(temp, mx_utility_for_O);
        }
        else if (board[i][0] == 'O' and board[i][1] == 'O')
        {
            flag = true;
            temp = max(values[i][0], values[i][1]) * pow(2, 1) + min(values[i][0], values[i][1]) * pow(2, 0);
            mx_utility_for_O = max(temp, mx_utility_for_O);
        }
        else if (board[i][1] == 'O' and board[i][2] == 'O')
        {
            flag = true;
            temp = max(values[i][1], values[i][2]) * pow(2, 1) + min(values[i][1], values[i][2]) * pow(2, 0);
            mx_utility_for_O = max(temp, mx_utility_for_O);
        }
    }

    // column utility for player X:
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == 'X' and board[1][i] == 'X' and board[2][i] == 'X')
        {
            flag = true;
            temp = values[0][i] * pow(2, 0) + values[1][i] * pow(2, 1) + values[2][i] * pow(2, 2);
            mx_utility_for_X = max(temp, mx_utility_for_X);
        }
        else if (board[0][i] == 'X' and board[1][i] == 'X')
        {
            flag = true;
            temp = max(values[0][i], values[1][i]) * pow(2, 1) + min(values[0][i], values[1][i]) * pow(2, 0);
            mx_utility_for_X = max(temp, mx_utility_for_X);
        }
        else if (board[1][i] == 'X' and board[2][i] == 'X')
        {
            flag = true;
            temp = max(values[1][i], values[2][i]) * pow(2, 1) + min(values[1][i], values[2][i]) * pow(2, 0);
            mx_utility_for_X = max(temp, mx_utility_for_X);
        }
    }
    // column utility for opponent O:
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == 'O' and board[1][i] == 'O' and board[2][i] == 'O')
        {
            flag = true;
            temp = values[0][i] * pow(2, 0) + values[1][i] * pow(2, 1) + values[2][i] * pow(2, 2);
            mx_utility_for_O = max(temp, mx_utility_for_O);
        }
        else if (board[0][i] == 'O' and board[1][i] == 'O')
        {
            flag = true;
            temp = max(values[0][i], values[1][i]) * pow(2, 1) + min(values[0][i], values[1][i]) * pow(2, 0);
            mx_utility_for_O = max(temp, mx_utility_for_O);
        }
        else if (board[1][i] == 'O' and board[2][i] == 'O')
        {
            flag = true;
            temp = max(values[1][i], values[2][i]) * pow(2, 1) + min(values[1][i], values[2][i]) * pow(2, 0);
            mx_utility_for_O = max(temp, mx_utility_for_O);
        }
    }

    // Diagonal utility for player X:
    if (board[0][0] == 'X' and board[1][1] == 'X' and board[2][2] == 'X')
    {
        flag = true;
        temp = values[0][0] * pow(2, 0) + values[1][1] * pow(2, 1) + values[2][2] * pow(2, 2);
        mx_utility_for_X = max(temp, mx_utility_for_X);
    }
    else if (board[0][0] == 'X' and board[1][1] == 'X')
    {
        flag = true;
        temp = max(values[0][0], values[1][1]) * pow(2, 1) + min(values[0][0], values[1][1]) * pow(2, 0);
        mx_utility_for_X = max(temp, mx_utility_for_X);
    }
    else if (board[1][1] == 'X' and board[2][2] == 'X')
    {
        flag = true;
        temp = max(values[1][1], values[2][2]) * pow(2, 1) + min(values[1][1], values[2][2]) * pow(2, 0);
        mx_utility_for_X = max(temp, mx_utility_for_X);
    }

    // Diagonal utility for opponent O:

    if (board[0][0] == 'O' and board[1][1] == 'O' and board[2][2] == 'O')
    {
        flag = true;
        temp = values[0][0] * pow(2, 0) + values[1][1] * pow(2, 1) + values[2][2] * pow(2, 2);
        mx_utility_for_O = max(temp, mx_utility_for_O);
    }
    else if (board[1][1] == 'O' and board[0][0] == 'O')
    {
        flag = true;
        temp = max(values[0][0], values[1][1]) * pow(2, 1) + min(values[0][0], values[1][1]) * pow(2, 0);
        mx_utility_for_O = max(temp, mx_utility_for_O);
    }
    else if (board[1][1] == 'O' and board[2][2] == 'O')
    {
        flag = true;
        temp = max(values[1][1], values[2][2]) * pow(2, 1) + min(values[1][1], values[2][2]) * pow(2, 0);
        mx_utility_for_O = max(temp, mx_utility_for_O);
    }

    // Diagonal utility for player X:(opposite)
    if (board[0][2] == 'X' and board[1][1] == 'X' and board[2][0] == 'X')
    {
        flag = true;
        temp = values[0][2] * pow(2, 0) + values[1][1] * pow(2, 1) + values[2][0] * pow(2, 2);
        mx_utility_for_X = max(temp, mx_utility_for_X);
    }
    else if (board[0][2] == 'X' and board[1][1] == 'X')
    {
        flag = true;
        temp = max(values[0][2], values[1][1]) * pow(2, 1) + min(values[0][2], values[1][1]) * pow(2, 0);
        mx_utility_for_X = max(temp, mx_utility_for_X);
    }
    else if (board[1][1] == 'X' and board[2][0] == 'X')
    {
        flag = true;
        temp = max(values[1][1], values[2][0]) * pow(2, 1) + min(values[1][1], values[2][0]) * pow(2, 0);
        mx_utility_for_X = max(temp, mx_utility_for_X);
    }

    // Diagonal utility for opponent O:(opposite)

    if (board[0][2] == 'O' and board[1][1] == 'O' and board[2][0] == 'O')
    {
        flag = true;
        temp = values[0][2] * pow(2, 0) + values[1][1] * pow(2, 1) + values[2][0] * pow(2, 2);
        mx_utility_for_O = max(temp, mx_utility_for_O);
    }
    else if (board[1][1] == 'O' and board[2][0] == 'O')
    {
        flag = true;
        temp = max(values[1][1], values[2][0]) * pow(2, 1) + min(values[1][1], values[2][0]) * pow(2, 0);
        mx_utility_for_O = max(temp, mx_utility_for_O);
    }
    else if (board[0][2] == 'O' and board[1][1] == 'O')
    {
        flag = true;
        temp = max(values[1][1], values[0][2]) * pow(2, 1) + min(values[1][1], values[0][2]) * pow(2, 0);
        mx_utility_for_O = max(temp, mx_utility_for_O);
    }

    return mx_utility_for_X - mx_utility_for_O;
}

bool isMovesLeft(char board[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == '_')
                return true;
    return false;
}

int minimax(char board[3][3], bool isMax)
{
    if (isMovesLeft(board) == false)
        return utility(board);
    if (isMax)
    {
        int best = -1000;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '_')
                {
                    board[i][j] = player;
                    best = max(best,
                               minimax(board, !isMax));
                    board[i][j] = '_';
                }
            }
        }
        return best;
    }
    else
    {
        int best = 1000;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '_')
                {
                    board[i][j] = opponent;
                    best = min(best,
                               minimax(board, !isMax));
                    board[i][j] = '_';
                }
            }
        }
        return best;
    }
}
int main()
{
    int bestVal = -1000;
    char board[3][3] = {
        {'_', '_', '_'},
        {'_', '_', '_'},
        {'_', '_', '_'}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == '_')
            {
                board[i][j] = player;
                int moveVal = minimax(board, false);
                board[i][j] = '_';
                bestVal = max(bestVal, moveVal);
            }
        }
    }
    cout << bestVal << "\n";
}