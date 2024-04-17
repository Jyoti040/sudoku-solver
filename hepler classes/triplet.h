#include<iostream>
#ifndef TRIPLET_H
#define TRIPLET_H

using namespace std;
class triplet{
    public:
      int row,col,val;

      public:
        triplet(int r,int c, int v){
            row=r;
            col=c;
            val=v;
        }
};

#endif