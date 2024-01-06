#include <iostream>
#include <vector>

using namespace std;

const int BOARD_SIZE = 3;
const int ULTIMATE_BOARD_SIZE = 3;

bool subGrid[3][3] = {
                        {false, false, false},
                        {false, false, false},
                        {false, false, false}
                     };

char opponent[3][3] = {
                        {'_' , '_', '_'},
                        {'_' , '_', '_'},
                        {'_' , '_', '_'}
                      };

char current[3][3] = {
                        {'_' , '_', '_'},
                        {'_' , '_', '_'},
                        {'_' , '_', '_'}
                      };

vector<vector<vector<char>>> ultimateBoard(ULTIMATE_BOARD_SIZE, vector<vector<char>>(ULTIMATE_BOARD_SIZE, vector<char>(BOARD_SIZE * BOARD_SIZE, ' ')));
char currentPlayer = 'X';

bool isValidMove(int boardX, int boardY, int cellX, int cellY) {
    return (boardX >= 0 && boardX < ULTIMATE_BOARD_SIZE &&
            boardY >= 0 && boardY < ULTIMATE_BOARD_SIZE &&
            cellX >= 0 && cellX < BOARD_SIZE &&
            cellY >= 0 && cellY < BOARD_SIZE &&
            ultimateBoard[boardX][boardY][cellX * BOARD_SIZE + cellY] == ' ');
}

void printBoard() {
    for (int i = 0; i < ULTIMATE_BOARD_SIZE; ++i) {
        for (int k = 0; k < BOARD_SIZE; ++k) {
            for (int j = 0; j < ULTIMATE_BOARD_SIZE; ++j) {
                for (int l = 0; l < BOARD_SIZE; ++l) {
                    char cellValue = ultimateBoard[i][j][k * BOARD_SIZE + l];
                    if (cellValue == ' ') {
                        cout << "_ ";
                    } else {
                        cout << cellValue << " ";
                    }
                }
                cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

bool is_sub_grid_game(int boardX, int boardY){

    if((ultimateBoard[boardX][boardY][0] != ' ') and (ultimateBoard[boardX][boardY][0] == ultimateBoard[boardX][boardY][1]) and (ultimateBoard[boardX][boardY][1] == ultimateBoard[boardX][boardY][2]))
        return true;
    else if((ultimateBoard[boardX][boardY][3] != ' ') and (ultimateBoard[boardX][boardY][3] == ultimateBoard[boardX][boardY][4]) and (ultimateBoard[boardX][boardY][4] == ultimateBoard[boardX][boardY][5]))
        return true;
    else if((ultimateBoard[boardX][boardY][6] != ' ') and (ultimateBoard[boardX][boardY][6] == ultimateBoard[boardX][boardY][7]) and (ultimateBoard[boardX][boardY][7] == ultimateBoard[boardX][boardY][8]))
        return true;
    else if((ultimateBoard[boardX][boardY][0] != ' ') and (ultimateBoard[boardX][boardY][0] == ultimateBoard[boardX][boardY][3]) and (ultimateBoard[boardX][boardY][3] == ultimateBoard[boardX][boardY][6]))
        return true;
    else if((ultimateBoard[boardX][boardY][1] != ' ') and (ultimateBoard[boardX][boardY][1] == ultimateBoard[boardX][boardY][4]) and (ultimateBoard[boardX][boardY][4] == ultimateBoard[boardX][boardY][7]))
        return true;
    else if((ultimateBoard[boardX][boardY][2] != ' ') and (ultimateBoard[boardX][boardY][2] == ultimateBoard[boardX][boardY][5]) and (ultimateBoard[boardX][boardY][5] == ultimateBoard[boardX][boardY][8]))
        return true;
    else if((ultimateBoard[boardX][boardY][0] != ' ') and (ultimateBoard[boardX][boardY][0] == ultimateBoard[boardX][boardY][4]) and (ultimateBoard[boardX][boardY][4] == ultimateBoard[boardX][boardY][8]))
        return true;
    else if((ultimateBoard[boardX][boardY][2] != ' ') and (ultimateBoard[boardX][boardY][2] == ultimateBoard[boardX][boardY][4]) and (ultimateBoard[boardX][boardY][4] == ultimateBoard[boardX][boardY][6]))
        return true;
    else
        return false;


}

bool makeMove(int boardX, int boardY, int cellX, int cellY) {
    if (isValidMove(boardX, boardY, cellX, cellY) and subGrid[boardX][boardY] == false) {
        ultimateBoard[boardX][boardY][cellX * BOARD_SIZE + cellY] = currentPlayer;
        //sub grid game
       if( is_sub_grid_game(boardX, boardY)){
            subGrid[boardX][boardY] = true;
            if(currentPlayer == 'X') current[boardX][boardY] = 'X';
            else opponent[boardX][boardY] = 'O';
       }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        return true;
    }
    return false;
}

bool isGameOver() {
    cout<<"Current player situation \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<current[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"opponent player situation \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<opponent[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";




    // opponent wins

    if((opponent[0][0] != '_') and (opponent[0][0] == opponent[0][1]) and (opponent[0][1] == opponent[0][2])){
        cout<<"Opponent Wins\n";
        return true;
    }
    else if((opponent[1][0] != '_') and (opponent[1][0] == opponent[1][1]) and (opponent[1][1] == opponent[1][2])){
        cout<<"Opponent Wins\n";
        return true;
    }
    else if((opponent[2][0] != '_') and (opponent[2][0] == opponent[2][1]) and (opponent[2][1] == opponent[2][2])){
        cout<<"Opponent Wins\n";
        return true;
    }
    else if((opponent[0][0] != '_') and (opponent[0][0] == opponent[1][0]) and (opponent[1][0] == opponent[2][0])){
        cout<<"Opponent Wins\n";
        return true;
    }
    else if((opponent[0][1] != '_') and (opponent[0][1] == opponent[1][1]) and (opponent[1][1] == opponent[2][1])){
        cout<<"Opponent Wins\n";
        return true;
    }
    else if((opponent[0][2] != '_') and (opponent[0][2] == opponent[1][2]) and (opponent[1][2] == opponent[2][2])){
        cout<<"Opponent Wins\n";
        return true;
    }
    else if((opponent[0][0] != '_') and (opponent[0][0] == opponent[1][1]) and (opponent[1][1] == opponent[2][2])){
        cout<<"Opponent Wins\n";
        return true;
    }
    else if((opponent[0][2] != '_') and (opponent[0][2] == opponent[1][1]) and (opponent[1][1] == opponent[2][0])){
        cout<<"Opponent Wins\n";
        return true;
    }






    //current player wins

    if((current[0][0] != '_') and (current[0][0] == current[0][1]) and (current[0][1] == current[0][2])){
        cout<<"current player Wins\n";
        return true;
    }
    else if((current[1][0] != '_') and (current[1][0] == current[1][1]) and (current[1][1] == current[1][2])){
        cout<<"current player Wins\n";
        return true;
    }
    else if((current[2][0] != '_') and (current[2][0] == current[2][1]) and (current[2][1] == current[2][2])){
        cout<<"current player Wins\n";
        return true;
    }
    else if((current[0][0] != '_') and (current[0][0] == current[1][0]) and (current[1][0] == current[2][0])){
        cout<<"current player Wins\n";
        return true;
    }
    else if((current[0][1] != '_') and (current[0][1] == current[1][1]) and (current[1][1] == current[2][1])){
        cout<<"current player Wins\n";
        return true;
    }
    else if((current[0][2] != '_') and (current[0][2] == current[1][2]) and (current[1][2] == current[2][2])){
        cout<<"current player Wins\n";
        return true;
    }
    else if((current[0][0] != '_') and (current[0][0] == current[1][1]) and (current[1][1] == current[2][2])){
        cout<<"current player Wins\n";
        return true;
    }
    else if((current[0][2] != '_') and (current[0][2] == current[1][1]) and (current[1][1] == current[2][0])){
        cout<<"current player Wins\n";
        return true;
    }


    return false;
}

int main() {
    int boardX, boardY, cellX, cellY;

    while (!isGameOver()) {
        printBoard();

        cout << "Player " << currentPlayer << ", enter your move:(0 based) " << endl;
        cout << "Enter Ultimate Board coordinates (X Y): ";
        cin >> boardX >> boardY;
        cout << "Enter Cell coordinates (X Y): ";
        cin >> cellX >> cellY;

        if (makeMove(boardX, boardY, cellX, cellY)) {
            cout << "Move accepted." << endl;
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    printBoard();
    cout << "Game over!" << endl;

    return 0;
}
