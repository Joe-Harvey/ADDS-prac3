#include "Crescendo.h"

Crescendo :: Crescendo(){
    move_count = 0;
}

char Crescendo :: makeMove(){
    if (move_count == 0){
        move = 'P';
    }
    if (move_count == 1){
        move = 'S';
    }
    if (move_count == 2){
        move = 'R';
    }

    move_count = (move_count + 1) % 3;
    return move;
}
