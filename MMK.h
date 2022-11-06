//Rayyan Mridha
//MMK Interface
//11-5-22

#ifndef MMK_H
#define MMK_H

#include <iostream>

using namespace std;

class Scorpian
{
public:
    Scorpian();
    void setSpecial(int);
    void setHeavy(int);
    void setSmall(int);
    void setHealth(int);

    int getSpecial();
    int getHeavy();
    int getSmall();
    int getHealth();
    string getAttribute();

    void specialAtk();
    void heavyAtk();
    void smallAtk();

     int special;
     int heavy;
     int small;
     int health;
     const string name = "Scorpian";
     const string attribute = "Fire";
    
};

class Subzero
{
public:
    Subzero();
    void setSpecial(int);
    void setHeavy(int);
    void setSmall(int);
    void setHealth(int);

    int getSpecial();
    int getHeavy();
    int getSmall();
    int getHealth();
    string getAttribute();

    void specialAtk();
    void heavyAtk();
    void smallAtk();

    int special;
    int heavy;
    int small;
    int health;
    const string name = "Subzero";
    const string attribute = "Ice";
};


#endif