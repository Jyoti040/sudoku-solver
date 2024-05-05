#include<iostream>
#include<vector>
#include "hepler classes/player.h"
// #include "player.h"
// #include "board.h"
#include "hepler classes/board.h"
#include "hepler classes/triplet.h"
#include "hepler classes/game.h"
using namespace std;

int main(){
    player p1("hars","2345","hjx",12);
    p1.getPlayerAllDetails();

    board b(9);
   b.printBoard();
  
  triplet t1(1,4,9);
  triplet t2( 3,6,3);
  triplet t3( 4,0,8);
  triplet t4(4,8,7 );
  triplet t5( 5,2,3);
  triplet t6(7,2,2 );
  // triplet t7(1,4,4 );
  // triplet t8( 1,5,1);
  // triplet t9(1,8,8 );
  // triplet t10(0,2,3);
  //  triplet t11(2,1,1); triplet t12(2,2,6); triplet t13(2,4,3); triplet t14(2,5,5); triplet t15(2,7,7);
  //   triplet t16();
  //    triplet t10(); triplet t10(); triplet t10(); triplet t10(); triplet t10(); triplet t10();


 vector<triplet> triplets={t1,t2,t3,t4,t5};


 b.boardSetUp(triplets);
  b.printBoard();

  game g(b,p1);
  g.play();
   
    return 0;
}