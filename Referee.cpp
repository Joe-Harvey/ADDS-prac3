#include "Referee.h"
#include "Player.h"
#include <iostream>

Referee :: Referee(){
    
}

char Referee :: refGame(Player * User1, Player * User2){
    char outcome;
    int move_num1;
    int move_num2;
    
    if (User1->getMove() == 'R'){
        move_num1 = 1;
    }
    if (User1->getMove() == 'P'){
        move_num1 = 2;
    }
    if (User1->getMove() == 'S'){
        move_num1 = 3;
    }

    if (User2->getMove() == 'R'){
        move_num2 = 1;
    }
    if (User2->getMove() == 'P'){
        move_num2 = 2;
    }
    if (User2->getMove() == 'S'){
        move_num2 = 3;
    }

    int det = (move_num1 - move_num2 + 3) % 3;

    if (det == 0){
        outcome = 'T';
    }

    if (det == 1){
        outcome = 'W';
    }

    if (det == 2){
        outcome = 'L';
    }

    return outcome;
}