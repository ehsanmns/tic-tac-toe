#include <iostream>
using namespace std;

char board[3][3]; //2D array to represent the board
char currentPlayer = 'X'; //X always goes first

//function to initialize the board with empty spaces
void initBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

//function to display the current state of the board
void displayBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------" << endl;
    }
}

//function to check if the game has ended (either someone has won or it's a draw)
bool isGameOver() {
    //check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return true;
        }
    }
    //check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
            return true;
        }
    }
    //check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true;
    }
    //check for draw
    bool draw = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                draw = false;
            }
        }
    }
    if (draw) {
        return true;
    }
    //game is not over
    return false;
}

//function to prompt the current player for their move and update the board
void makeMove() {
    int row, col;
    cout << "It's " << currentPlayer << "'s turn. Enter row and column: ";
    cin >> row >> col;
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
        //invalid move, try again
        cout << "Invalid move, try again." << endl;
        makeMove();
        return;
    }
    board[row][col] = currentPlayer;
    //switch to the other player's turn
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    initBoard();
    while (!isGameOver()) {
        displayBoard();
        makeMove();
    }
    //display final state of the board
    displayBoard();
    //declare winner or tie game
    if (currentPlayer == 'X') {
        cout << "O wins!" << endl;
    } else if (currentPlayer == 'O') {
        cout << "X wins!" << endl;
    } else {
        cout << "Tie game!" << endl;
    }
    return 0;
}

