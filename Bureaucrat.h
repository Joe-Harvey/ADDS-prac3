#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Player.h"
#include "Computer.h"

class Bureaucrat : public Computer{
    public:
    Bureaucrat();
    char makeMove();
};

#endif