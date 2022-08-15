#include "Player.h"
#include "Computer.h"
#include "RandomComputer.h"
#include <stdlib.h>
#include <iostream>

RandomComputer :: RandomComputer(){
    return;
}

char RandomComputer :: makeMove(){
    int num;
    char move;
    num = (std :: rand() % 3) + 1;
    std :: cout << num << std :: endl;
    std:: cout << std :: rand() % 3 << std :: endl;
    if (num == 1){
        move = 'R';
    }
    if (num == 2){
        move = 'P';
    }
    if (num == 3){
        move = 'S';
    }
    return move;
}

