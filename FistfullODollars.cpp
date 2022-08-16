#include "FistfullODollars.h"

FistfullODollars :: FistfullODollars(){
    move_count = 0;
}

char FistfullODollars :: makeMove(){
    if (move_count == 0){
        move = 'R';
    }
    if (move_count == 1){
        move = 'P';
    }
    if (move_count == 2){
        move = 'P';
    }

    move_count = (move_count++) % 3;
    return move;
}
