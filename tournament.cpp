#include "tournament.h"
#include "Player.h"
#include "Referee.h"
#include <array>

Tournament :: Tournament(){

}

Player Tournament :: run(std :: array<Player , 8>  competitors){

    Referee TRef;

    std :: array<int, 8> round_1 = {0,0,0,0,0,0,0,0};
    std :: array<int, 4> round_2 = {0,0,0,0};
    std :: array<int, 2> round_3 = {0,0};

    //round 1

    for (int n = 0; n < 4; n){

    for (int i = 0; i < 5; i++){
        competitors.at(2*n).makeMove();
        competitors.at(2*n + 1).makeMove();
        char result = TRef.refGame(competitors.at(2*n), competitors.at(2*n + 1));
        if (result == 'W'){
            round_1.at(2*n) = round_1.at(2*n) + 1;
        }
        if (result == 'L'){
            round_1.at(2*n + 1) = round_1.at(2*n + 1) + 1;
        }
    }

        competitors.at(2*n).reset_count();
        competitors.at(2*n + 1).reset_count();

    if (round_1.at(2*n) >= round_1.at(2*n + 1)){
        competitors.at(n) = competitors.at(2*n);
    }
    if (round_1.at(2*n) < round_1.at(2*n + 1)){
        competitors.at(n) = competitors.at(2*n + 1);
    }
    }

    //round 2

    for (int n = 0; n < 2; n){

    for (int i = 0; i < 5; i++){
        competitors.at(2*n).makeMove();
        competitors.at(2*n + 1).makeMove();
        char result = TRef.refGame(competitors.at(2*n), competitors.at(2*n + 1));
        if (result == 'W'){
            round_2.at(2*n) = round_2.at(2*n) + 1;
        }
        if (result == 'L'){
            round_2.at(2*n + 1) = round_2.at(2*n + 1) + 1;
        }
    }

        competitors.at(2*n).reset_count();
        competitors.at(2*n + 1).reset_count();

    if (round_2.at(2*n) >= round_2.at(2*n + 1)){
        competitors.at(n) = competitors.at(2*n);
    }
    if (round_2.at(2*n) < round_2.at(2*n + 1)){
        competitors.at(n) = competitors.at(2*n + 1);
    }
    }

// round 3

    for (int n = 0; n < 1; n){

    for (int i = 0; i < 5; i++){
        competitors.at(2*n).makeMove();
        competitors.at(2*n + 1).makeMove();
        char result = TRef.refGame(competitors.at(2*n), competitors.at(2*n + 1));
        if (result == 'W'){
            round_3.at(2*n) = round_3.at(2*n) + 1;
        }
        if (result == 'L'){
            round_3.at(2*n + 1) = round_3.at(2*n + 1) + 1;
        }
    }

        competitors.at(2*n).reset_count();
        competitors.at(2*n + 1).reset_count();

    if (round_3.at(2*n) >= round_3.at(2*n + 1)){
        competitors.at(n) = competitors.at(2*n);
    }
    if (round_3.at(2*n) < round_3.at(2*n + 1)){
        competitors.at(n) = competitors.at(2*n + 1);
    }
    }

return competitors.at(0);
}