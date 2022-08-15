#ifndef AVALANCHE_H
#define AVALANCHE_H

#include "Player.h"
#include "Computer.h"

class Avalanche : public Computer{
    public:
    Avalanche();
    char makeMove();
};

#endif