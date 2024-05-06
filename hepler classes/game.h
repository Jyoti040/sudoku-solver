#include<iostream>
#include "./board.h"
#include "./player.h"
using namespace std;

 class game {
public:
    board Gameboard;
    player Gameplayer;

    bool isSafe(char val, int r , int c){
           for(int i=0; i<Gameboard.size; i++){
                  if(Gameboard.matrix[r][i]==val){
                    return false;
                  }
                   if(Gameboard.matrix[i][c]==val){
                    return false;
                  }
                  int nr=3*(r/3)+i/3;
                  int nc=3*(c/3)+i%3;
                  if(Gameboard.matrix[nr][nc]==val){
                    return false;
                  }
           }
           return true;
    }

    public: 
     game(board b, player p) {
        Gameboard = b;
        Gameplayer = p;
    }

    public:
     void play() {
        solveSudoku();
    }
    public :
   bool solveSudoku(){
     for(int i=0; i<Gameboard.size;i++){
        for(int j=0; j<Gameboard.size ; j++){
            if(Gameboard.matrix[i][j]=='.'){
                for(char ch='1'; ch<='9'; ch++){
                    if(isSafe(ch,i,j)==true){
                        Gameboard.matrix[i][j]=ch;
                        bool ans=solveSudoku();
                        if(ans){
                            return true;
                        }else{
                            Gameboard.matrix[i][j]='.';
                        }
                    }
                }
                return false;
            }
        }
     }
     return true;
   }
    
};