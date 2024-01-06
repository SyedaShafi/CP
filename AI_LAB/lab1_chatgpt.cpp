#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

bool isMoveValid(const vector<vector<char>>& board, int row, int col) {
    return row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ';
}

bool isWinner(const vector<vector<char>>& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;  // Check rows
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;  // Check columns
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;      // Check diagonals
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;      // Check diagonals
    return false;
}

bool isGameOver(const vector<vector<char>>& board) {
    return isWinner(board, 'X') || isWinner(board, 'O');
}

pair<int, int> findOptimalMove(const vector<vector<char>>& board) {
    // Check for winning move or blocking opponent's winning move
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == ' ') {
            return make_pair(i, 2);
        }
        if (board[i][0] == 'O' && board[i][1] == ' ' && board[i][2] == 'O') {
            return make_pair(i, 1);
        }
        if (board[i][0] == ' ' && board[i][1] == 'O' && board[i][2] == 'O') {
            return make_pair(i, 0);
        }

        if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == ' ') {
            return make_pair(2, i);
        }
        if (board[0][i] == 'O' && board[1][i] == ' ' && board[2][i] == 'O') {
            return make_pair(1, i);
        }
        if (board[0][i] == ' ' && board[1][i] == 'O' && board[2][i] == 'O') {
            return make_pair(0, i);
        }
    }

    // Choose a random available move
    vector<pair<int, int>> availableMoves;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                availableMoves.push_back(make_pair(i, j));
            }
        }
    }

    if (!availableMoves.empty()) {
        srand(time(0)); // Seed the random number generator
        int randomIndex = rand() % availableMoves.size();
        return availableMoves[randomIndex];
    }

    return make_pair(-1, -1); // No available moves
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));

    while (!isGameOver(board)) {
        // Player's move
        int playerRow, playerCol;
        cout << "Enter your move (row column): ";
        cin >> playerRow >> playerCol;
        if (!isMoveValid(board, playerRow, playerCol)) {
            cout << "Invalid move. Try again." << endl;
            continue;
        }
        board[playerRow][playerCol] = 'O';

        if (isGameOver(board)) {
            break;
        }

        // Agent's move
        pair<int, int> agentMove = findOptimalMove(board);
        if (agentMove.first == -1) {
            cout << "It's a draw!" << endl;
            break;
        }
        board[agentMove.first][agentMove.second] = 'X';

        cout << "Agent's move:" << endl;
        printBoard(board);
    }

    if (isWinner(board, 'O')) {
        cout << "Congratulations! You win!" << endl;
    } else if (isWinner(board, 'X')) {
        cout << "Agent wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}
