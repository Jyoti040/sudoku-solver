#include<iostream>
#include<bits/stdc++.h>
#include<vector>
// #include "triplet.h"
#ifndef BOARD_H
#define BOARD_H

using namespace std;
 
class board{
    public :
    int size;
    char** matrix;

    public :
    board(){

    }
    board(int s){
        size=s;
        matrix= new char*[size];
        for(int i=0; i<size; i++){
            matrix[i]=new char[size];

            memset(matrix[i],'.',(size)*sizeof(char));
        }
     
    }

    void boardSetup(){
        cout<<"Enter elements of suduko "<<endl;
        int ct=1;
          for(int i=0; i<size ;i++){
            for(int j=0; j<size; j++){
                cout<<"Enter "<<ct<<" th element : ";
                char ele;
                cin>>ele;
                matrix[i][j]=ele;
                ct++;
            }}
    }
    void printBoard(){
        cout<<endl<<"Board is : "<<endl;
        for(int i=0; i<size ;i++){
            for(int j=0; j<size; j++){
                cout<<matrix[i][j]<<"  ";
            }
            cout<<endl;
        }
    }

    // void boardSetUpIndividual(int row,int col, int val){
    //     matrix[row][col]=val;   //initialise the board with some give values
    // }

    // void boardSetUpColumnWise(int row, vector<int> col , vector<int> val){
    //          for(int i=0; i<col.size();i++){    //another way to initialise the board with some give values for a particular row 
    //             matrix[row][col[i]]=val[i];
    //          }
    // }
    // void boardSetUp(vector<triplet> triplets){
    //     int len=triplets.size();
    //     for(int i=0; i<len;i++  ){
    //         int row=triplets[i].row;
    //          int col=triplets[i].col;
    //           int val=triplets[i].val;
    //             matrix[row][col]=val; 
    //     }
    // }
};

#endif