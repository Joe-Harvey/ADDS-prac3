#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

#include "RandomComputer.h"
using namespace std;

int main(){
    RandomComputer comp;
    comp.makeMove();

    Human user;
    user.makeMove();

    Referee ump;

    char result = ump.refGame(user, comp);
    cout << result << endl;

    return 0;
}