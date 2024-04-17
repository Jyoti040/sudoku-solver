#include<iostream>
#include "player.h"
#include "board.h"
using namespace std;

int main(){
    player p1;
    p1.getPlayerAllDetails();

    board b(9);
   b.printBoard();
    return 0;
}