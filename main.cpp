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
    
    Human * P0 = new Human();
    RandomComputer * P1 = new RandomComputer();
    Avalanche * P2 = new Avalanche();
    Bureaucrat * P3 = new Bureaucrat();
    Toolbox * P4 = new Toolbox();
    Crescendo * P5 = new Crescendo();
    PaperDoll * P6 = new PaperDoll();
    FistfullODollars * P7 = new FistfullODollars();

    std :: array<Player *, 8> contestants = {P0, P1, P2, P3, P4, P5, P6, P7};

    Tournament T;

    Player * winner = T.run(contestants);

    return 0;
}