#include "Human.h"
#include <iostream>

Human :: Human(){
    return;
}

char Human :: makeMove(){
    char move_letter;
    std::cout << "Enter move: ";
    std::cin >> move_letter;
    player_move = move_letter;

    return move_letter;
}