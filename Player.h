#ifndef PLAYER_H
#define PLAYER_H

class Player{
    protected:
    char move;
    char move_count;
    public:
    Player();
    virtual char makeMove();
    char getMove();
    void reset_count();

};

#endif