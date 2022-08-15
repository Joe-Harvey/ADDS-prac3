#ifndef COMPUTER_
#define COMPUTER_

#include "Player.h"

class Computer : public Player{
    protected:
        char move_count;
    public:
        Computer();
        virtual char makeMove();
};

#endif