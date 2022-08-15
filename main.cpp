#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main(){
    Human User1;
    Computer User2;
    Referee Ump;

    User1.makeMove();
    User2.makeMove();
    char result = Ump.refGame(User1, User2);
    cout << result << endl;

    return 0;
}