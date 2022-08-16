#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"


class Referee{
    private:
    char game_outcome;
    public:
    Referee();
    char refGame(Player Player1, Player Player2);
};

#endif