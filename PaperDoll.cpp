#include "PaperDoll.h"

PaperDoll :: PaperDoll(){
    move_count = 0;
}

char PaperDoll :: makeMove(){
    if (move_count == 0){
        move = 'P';
    }
    if (move_count == 1){
        move = 'S';
    }
    if (move_count == 2){
        move = 'S';
    }

    move_count = (move_count + 1) % 3;
    return move;
}
