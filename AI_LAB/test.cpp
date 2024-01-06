#include <iostream>
#include <vector>

using namespace std;

const int BOARD_SIZE = 3;
const int ULTIMATE_BOARD_SIZE = 3;

vector<vector<vector<char>>> ultimateBoard(ULTIMATE_BOARD_SIZE, vector<vector<char>>(ULTIMATE_BOARD_SIZE, vector<char>(BOARD_SIZE *BOARD_SIZE, '_')));
vector<vector<bool>> localBoardFilled(ULTIMATE_BOARD_SIZE, vector<bool>(ULTIMATE_BOARD_SIZE, false));
char currentPlayer = 'X';
int lastCellX = -1, lastCellY = -1;

bool isValidMove(int boardX, int boardY, int cellX, int cellY)
{
    if (localBoardFilled[boardX][boardY])
    {
        return false; // If the local board is already filled or won, move is invalid
    }
    return (boardX >= 0 && boardX < ULTIMATE_BOARD_SIZE &&
            boardY >= 0 && boardY < ULTIMATE_BOARD_SIZE &&
            cellX >= 0 && cellX < BOARD_SIZE &&
            cellY >= 0 && cellY < BOARD_SIZE &&
            ultimateBoard[boardX][boardY][cellX * BOARD_SIZE + cellY] == '_');
}

void printBoard()
{
    for (int i = 0; i < ULTIMATE_BOARD_SIZE; ++i)
    {
        for (int k = 0; k < BOARD_SIZE; ++k)
        {
            for (int j = 0; j < ULTIMATE_BOARD_SIZE; ++j)
            {
                for (int l = 0; l < BOARD_SIZE; ++l)
                {
                    char cellValue = ultimateBoard[i][j][k * BOARD_SIZE + l];
                    cout << cellValue << " ";
                }
                cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

bool isLocalBoardFull(int boardX, int boardY)
{
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            if (ultimateBoard[boardX][boardY][i * BOARD_SIZE + j] == '_')
            {
                return false;
            }
        }
    }
    return true;
}

bool isLocalBoardWinner(char player, int boardX, int boardY)
{
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        if (ultimateBoard[boardX][boardY][i * BOARD_SIZE] == player &&
            ultimateBoard[boardX][boardY][i * BOARD_SIZE + 1] == player &&
            ultimateBoard[boardX][boardY][i * BOARD_SIZE + 2] == player)
        {
            return true; // Row win
        }
        if (ultimateBoard[boardX][boardY][i] == player &&
            ultimateBoard[boardX][boardY][i + BOARD_SIZE] == player &&
            ultimateBoard[boardX][boardY][i + 2 * BOARD_SIZE] == player)
        {
            return true; // Column win
        }
    }
    if (ultimateBoard[boardX][boardY][0] == player &&
        ultimateBoard[boardX][boardY][4] == player &&
        ultimateBoard[boardX][boardY][8] == player)
    {
        return true; // Diagonal win (top-left to bottom-right)
    }
    if (ultimateBoard[boardX][boardY][2] == player &&
        ultimateBoard[boardX][boardY][4] == player &&
        ultimateBoard[boardX][boardY][6] == player)
    {
        return true; // Diagonal win (top-right to bottom-left)
    }
    return false;
}

bool makeMove(int boardX, int boardY, int cellX, int cellY)
{
    if (isValidMove(boardX, boardY, cellX, cellY))
    {
        ultimateBoard[boardX][boardY][cellX * BOARD_SIZE + cellY] = currentPlayer;
        lastCellX = cellX;
        lastCellY = cellY;

        // Check if the local board is won or filled
        if (isLocalBoardWinner(currentPlayer, boardX, boardY))
        {
            localBoardFilled[boardX][boardY] = true;
        }
        else if (isLocalBoardFull(boardX, boardY))
        {
            localBoardFilled[boardX][boardY] = true;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        return true;
    }
    return false;
}

bool isUltimateGridWinner(char player)
{
    for (int i = 0; i < ULTIMATE_BOARD_SIZE; ++i)
    {
        if (ultimateBoard[i][0][0] == player &&
            ultimateBoard[i][1][0] == player &&
            ultimateBoard[i][2][0] == player)
        {
            return true; // Column win
        }
        if (ultimateBoard[0][i][0] == player &&
            ultimateBoard[1][i][0] == player &&
            ultimateBoard[2][i][0] == player)
        {
            return true; // Row win
        }
    }
    if (ultimateBoard[0][0][0] == player &&
        ultimateBoard[1][1][0] == player &&
        ultimateBoard[2][2][0] == player)
    {
        return true; // Diagonal win (top-left to bottom-right)
    }
    if (ultimateBoard[0][2][0] == player &&
        ultimateBoard[1][1][0] == player &&
        ultimateBoard[2][0][0] == player)
    {
        return true; // Diagonal win (top-right to bottom-left)
    }
    return false;
}

bool isGameOver()
{
    // return isUltimateGridWinner('X') || isUltimateGridWinner('O') || lastCellX == -1 || lastCellY == -1 || localBoardFilled[lastCellX][lastCellY];
    return false;
}

int main()
{
    int boardX, boardY, cellX, cellY;
    // cout<<isGameOver()<<"\n";
    while (!isGameOver())
    {
        // cout<<"hi";
        printBoard();

        if (lastCellX == -1 || lastCellY == -1)
        {
            cout << "Player " << currentPlayer << ", you can choose any local board." << endl;
        }
        else
        {
            cout << "Player " << currentPlayer << ", you must play in the local board corresponding to [" << lastCellX << "][" << lastCellY << "]" << endl;
        }

        cout << "Enter Ultimate Board coordinates (X Y): ";
        cin >> boardX >> boardY;

        if (lastCellX != -1 && lastCellY != -1 && (boardX != lastCellX || boardY != lastCellY || localBoardFilled[boardX][boardY]))
        {
            cout << "Invalid choice. Please choose the correct local board." << endl;
            continue;
        }

        cout << "Enter Cell coordinates (X Y): ";
        cin >> cellX >> cellY;

        if (makeMove(boardX, boardY, cellX, cellY))
        {
            cout << "Move accepted." << endl;
        }
        else
        {
            cout << "Invalid move. Try again." << endl;
        }
    }

    printBoard();

    if (isUltimateGridWinner('X'))
    {
        cout << "Player X wins the ultimate grid!" << endl;
    }
    else if (isUltimateGridWinner('O'))
    {
        cout << "Player O wins the ultimate grid!" << endl;
    }
    else
    {
        cout << "It's a draw!" << endl;
    }

    return 0;
}
