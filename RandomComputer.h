#ifndef RANDOM_COMPUTER_H
#define RANDOM_COMPUTER_H

#include "Player.h"
#include "Computer.h"

class RandomComputer : public Computer{
    public:
    RandomComputer();
    char makeMove();
};

#endif