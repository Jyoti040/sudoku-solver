#include <iostream>
#include <vector>
#include "hepler classes/player.h"
#include "hepler classes/board.h"
// #include "hepler classes/triplet.h"
#include "hepler classes/game.h"
using namespace std;

int main()
{
  cout << endl
       << "Enter player's details : " << endl;
  string s, p, e;
  int a;
  cout << "Enter your name :  ";
  cin >> s;
  cout << "Enter your age :  ";
  cin >> a;
  cout << "Enter your phone number  :  ";
  cin >> p;
  cout << "Enter your email id  :  ";
  cin >> e;
  player p1(s, p, e, a);
  p1.getPlayerAllDetails();

  board b(9);
  b.printBoard();

  // triplet t1(1,4,9);
  // triplet t2( 3,6,3);
  // triplet t3( 4,0,8);
  // triplet t4(4,8,7 );
  // triplet t5( 5,2,3);
  // triplet t6(7,2,2 );
  // triplet t7(1,4,4 );

  //  vector<triplet> triplets={t1,t2,t3,t4,t5};

  //  b.boardSetUp(triplets);
  b.boardSetup();
  b.printBoard();

  game g(b, p1);
  g.play();
  g.Gameboard.printBoard();
  return 0;
}