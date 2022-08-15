#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

Referee :: Referee(){
    return;
}

char Referee :: refGame(Human User1, Computer User2){
    char outcome;
    int move_num1;
    int move_num2;
    
    if (User1.player_move == 'R'){
        move_num1 = 1;
    }
    if (User1.player_move == 'P'){
        move_num1 = 2;
    }
    if (User1.player_move == 'S'){
        move_num1 = 3;
    }

    if (User2.computer_move == 'R'){
        move_num2 = 1;
    }
    if (User2.computer_move == 'P'){
        move_num2 = 2;
    }
    if (User2.computer_move == 'S'){
        move_num2 = 3;
    }

    int det = (move_num1 - move_num2 + 3) % 3;

    if (det == 0){
        outcome = 'D';
    }

    if (det == 1){
        outcome = 'D';
    }

    if (det == 2){
        outcome = 'D';
    }

    return outcome;
}