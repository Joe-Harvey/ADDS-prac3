#include "Human.h"
#include <iostream>

Human :: Human(){
    return;
}

char Human :: makeMove(){
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}