#ifndef REFEREE_
#define REFEREE_

class Referee{
    private:
    char game_outcome;
    public:
    Referee();
    char refGame(Human Player1, Computer Player2);
};

#endif