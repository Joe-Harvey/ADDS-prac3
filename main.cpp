#include <iostream>

#include "Player.h"

#include "Referee.h"

#include "Human.h"

#include "Tournament.h"

#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"

#include <array>


int main(){
    
    Avalanche * P0 = new Avalanche();
    Avalanche * P1 = new Avalanche();
    Avalanche * P2 = new Avalanche();
    Avalanche * P3 = new Avalanche();
    Bureaucrat * P4 = new Bureaucrat();
    Avalanche *P5 = new Avalanche();
    Avalanche *P6 = new Avalanche();
    Avalanche *P7 = new Avalanche();


    std :: array<Player *, 8> contestants = {P0, P1, P2, P3, P4, P5, P6, P7};

    Tournament T;

    Player * winner = T.run(contestants);

    return 0;
}