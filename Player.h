#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player{
    protected:
    char move;
    public:
    Player();
    virtual char makeMove();
    char getMove();
};

#endif