#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "RandomComputer.h"

class Referee{
    private:
    char game_outcome;
    public:
    Referee();
    char refGame(Player Player1, Player Player2);
};

#endif