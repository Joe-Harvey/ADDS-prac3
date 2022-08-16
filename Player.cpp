#include "Player.h"

Player :: Player(){
    
}

char Player :: makeMove(){
    return 'R';
}

char Player :: getMove(){
    return move;
}

void Player :: reset_count(){
    move_count = 0;
}