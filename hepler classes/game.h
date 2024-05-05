#include<iostream>
#include "./board.h"
#include "./player.h"
using namespace std;

 class game {

    board Gameboard;
    player Gameplayer;

    public: 
     game(board b, player p) {
        Gameboard = b;
        Gameplayer = p;
    }

    public:
     void play() {
        solveSudoku(0,0);
    }

    public :
public :
    void solveSudoku(int row, int col) {
        if (row >= Gameboard.size) {
            cout << "Sudoku Solved!!!!! by ";
            Gameplayer.getPlayerName();
            Gameboard.printBoard();
            return;
        }

        int nrow = 0, ncol = 0;

        if (col == Gameboard.size - 1) {
            nrow = row + 1;
            ncol = 0;
        } else {
            nrow = row;
            ncol = col + 1;
        }

        if (Gameboard.matrix[row][col] != 0) {
            cout << "Skipping filled cell at (" << row << ", " << col << ")" << endl;
            solveSudoku(nrow, ncol);
        } else {
            for (int i = 1; i <= 9; i++) {
                if (validPos(row, col, i)==true) {
                    cout << "Placing " << i << " at (" << row << ", " << col << ")" << endl;
                    Gameboard.matrix[row][col] = i;
                    solveSudoku(nrow, ncol);
                    Gameboard.matrix[row][col] = 0; // Backtrack
                    cout << "Backtracked from (" << row << ", " << col << ")" << endl;
                }
            }
        }
    }


    private :
     bool validPos( int row, int col, int val) {
        
        for(int i=0;i<Gameboard.size;i++) {
            if(Gameboard.matrix[row][i] == val) {
                return false;
            }
        }

        for(int i=0;i<Gameboard.size; i++) {
            if(Gameboard.matrix[i][col] == val) {
                return false;
            }
        }

        int tempRow = row/3*3;
        int tempCol = col/3*3;

        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                if (Gameboard.matrix[tempRow + i][tempCol + j] == val) {
                    return false;
                }
            }
        }

        return true;
    }
};