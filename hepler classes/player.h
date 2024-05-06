#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class player
{
  string name;
  int age;
  string phone_no;
  string email;

public:
  player()
  {
  }
  player(string s, string p, string e, int a)
  { // if repition make it parameterised

    name = s;

    age = a;

    phone_no = p;

    email = e;
  }
  void getPlayerName()
  {
    cout << "Player name is : " << name << endl;
  }
  void getPlayerAllDetails()
  {
    cout << endl
         << "Player details are : " << endl;
    cout << "Player name is : " << name << endl;
    cout << "Player age  is : " << age << endl;
    cout << "Player email is : " << email << endl;
    cout << "Player phone number   is : " << phone_no << endl;
  }
};

#endif