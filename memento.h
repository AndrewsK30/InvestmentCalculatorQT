#ifndef MEMENTO_H
#define MEMENTO_H

#include "state.h"



class Memento
{
    State* state;
public:
    Memento(State* state);
    State* getState();
};

#endif // MEMENTO_H
