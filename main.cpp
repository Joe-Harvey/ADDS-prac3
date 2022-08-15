#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

#include "Avalanche.h"
#include "RandomComputer.h"

int main(){
    Avalanche comp;
    comp.makeMove();

    Human user;
    user.makeMove();

    Referee ump;

    char result = ump.refGame(user, comp);
    std :: cout << result << std :: endl;

    return 0;
}