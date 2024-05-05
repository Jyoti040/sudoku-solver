#include<iostream>
#include "player.h"
#include "board.h"
#ifndef GAME_H
#define GAME_H

class game{
     board gameBoard;
     player gamePlayer;

    bool isValidPos(int row,int col, int i){
        
    }

     void  solveSudoku(int row, int col){
         int newR=0;
         int newC=0;
        if(col==gameBoard.size-1){
            newR=row+1;
            newC=0;
        }else{
            newC=col+1;
        }

        if(gameBoard.matrix[row][col] !=0 ){
            solveSudoku(newR,newC);
        }
        else{
            for(int i=1; i<=9; i++){  //checking for all possibility 
              if(isValidPos(row,col,i)){   //checking if valid pos or  not
                 gameBoard.matrix[row][col]=i;
                 solveSudoku(newR,newC);
                 gameBoard.matrix[row][col]=0;  //backtracking 
              }
            }
        }
     }

public :
     game(  board b, player p){
            gamePlayer=p;
            gameBoard=b;
     }
   
    void play(){
        solveSudoku(0,0);


    }


};
#endif