#include<iostream>
#ifndef PLAYER_H
#define PLAYER_H
 
 using namespace std;

 class player{
      string name;
      int age;
      string phone_no;
      string email;
public :
      player(){
        cout<<endl<<"Enter your details : "<<endl;
        string s,p,e;
        int a;
        cout<<"Enter your name :  ";
        cin>>s;
        name=s;
         cout<<"Enter your age :  ";
        cin>>a;
        age=a;
         cout<<"Enter your phone number  :  ";
        cin>>p;
        phone_no=p;
         cout<<"Enter your email id  :  ";
        cin>>e;
        email=e;
      }
        void getPlayerName(){
            cout<<"Player name is : "<<name<<endl;
       
        }
        void getPlayerAllDetails(){
            cout<<endl<<"Player details are : "<<endl;
            cout<<"Player name is : "<<name<<endl;
            cout<<"Player age  is : "<<age<<endl;
            cout<<"Player email is : "<<email<<endl;
            cout<<"Player phone number   is : "<<phone_no<<endl;
        }
      
 };

#endif