Dip Singha
#include <iostream>
#include <cstdlib>
#include <ctime>

    using namespace std;

int board[8][8];   // chessboard
int attacks[8][8]; // number of attacks on each square
int rowAttacks[8]; // number of attacks on each row
int colAttacks[8]; // number of attacks on each column

// initialize chessboard with queens randomly placed on different rows
void initializeBoard()
{
    for (int i = 0; i < 8; i++)
    {
        int j = rand() % 8;
        board[i][j] = 1;
        rowAttacks[i]++;
        colAttacks[j]++;
        for (int k = 1; k < 8; k++)
        {
            if (i - k >= 0 && j - k >= 0)
                attacks[i - k][j - k]++;
            if (i - k >= 0 && j + k < 😎 attacks[i-k][j+k]++;
            if (i + k < 8 && j - k >= 0) attacks[i+k][j-k]++;
            if (i + k < 8 && j + k < 😎 attacks[i+k][j+k]++;
        }
    }
}

// calculate number of attacks on each square
void calculateAttacks()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            attacks[i][j] = rowAttacks[i] + colAttacks[j];
            for (int k = 1; k < 8; k++)
            {
                if (i - k >= 0 && j - k >= 0)
                    attacks[i][j] += board[i - k][j - k];
                if (i - k >= 0 && j + k < 😎 attacks[i][j] += board[i-k][j+k];
                if (i + k < 8 && j - k >= 0) attacks[i][j] += board[i+k][j-k];
                if (i + k < 8 && j + k < 😎 attacks[i][j] += board[i+k][j+k];
            }
        }
    }
}

// move queen in row to minimize number of attacks
void moveQueen(int row)
{
    int minAttacks = attacks[row][0];
    int col = 0;
    for (int j = 1; j < 8; j++)
    {
        if (attacks[row][j] < minAttacks)
        {
            minAttacks = attacks[row][j];
            col = j;
        }
    }
    board[row][col] = 1;
    colAttacks[col]++;
    for (int k = 1; k < 8; k++)
    {
        if (row - k >= 0 && col - k >= 0)
            attacks[row - k][col - k]++;
        if (row - k >= 0 && col + k < 😎 attacks[row-k][col+k]++;
        if (row + k < 8 && col - k >= 0) attacks[row+k][col-k]++;
        if (row + k < 8 && col + k < 😎 attacks[row+k][col+k]++;
    }
}

// print chessboard
void printBoard()
{