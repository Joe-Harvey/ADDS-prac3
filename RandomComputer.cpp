#include "RandomComputer.h"
#include <stdlib.h>
#include <time.h> 

using namespace std;

RandomComputer :: RandomComputer(){
    
}

char RandomComputer :: makeMove(){
    srand (time(NULL));
    int num;
    num = (rand() % 3) + 1;

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

