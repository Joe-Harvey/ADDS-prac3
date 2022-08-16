#include <iostream>

#include "Player.h"

#include "Referee.h"

#include "Human.h"

#include "tournament.h"

#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"

#include <array>


int main(){
    
    Human * P0;
    RandomComputer * P1;
    Avalanche * P2;
    Bureaucrat * P3;
    Toolbox * P4;
    Crescendo * P5;
    PaperDoll * P6;
    FistfullODollars * P7;

    std :: array<Player, 8> contestants = {P0, P1, P2, P3, P4, P5, P6, P7};

    Tournament tournament;

    Player * winner = tournament.run(contestants);

    //std :: cout << winner << std :: endl;
    std :: cout << "end" << std :: endl;

    return 0;
}