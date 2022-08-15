#include "Computer.h"

Computer :: Computer(){
    return;
}

char Computer :: makeMove(){
    char move_letter;
    move_letter = 'R';
    computer_move = move_letter;
    return move_letter;
}

